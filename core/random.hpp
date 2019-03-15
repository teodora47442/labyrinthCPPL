#ifndef RANDOM_HPP
#define RANDOM_HPP

#include <random>
#include <type_traits>
#include <memory>
#include <vector>
#include <algorithm>

namespace dg {

namespace math
{
    /**
     * Generates a random number in the closed interval [min, max].
     * <p>
     * For debugging purposes, a parameter can be specified so the random generated
     * numbers are the same over successive executions.
     * @brief Generates a random number in the closed interval [min, max].
     * @tparam T an arithmetic type
     * @param min the lower boud of generated numbers
     * @param max the upper bound of generated numbers
     * @param reproducible true if the sequences of generated numbers must be the same
     * over successive executions, false otherwise
     * @return a random number in [min, max]
     * @throws std::invalid_argument if min > max
     */
    template<class T>
    T random(T min = std::numeric_limits<T>::min(),
             T max = std::numeric_limits<T>::max(),
             bool reproducible = false)
    {
        if (max < min)
                throw std::invalid_argument {"Maximum must be higher than minimum"};

        static std::random_device rd;
        static std::mt19937 rng {rd()};
        static std::mt19937 rng_deterministic {};

        using DIST = std::conditional_t<std::is_integral<T>::value, std::uniform_int_distribution<T>, std::uniform_real_distribution<T>>;
        static DIST dist;

        if (dist.min() != min || dist.max() != max)
           dist.param(typename decltype(dist)::param_type {min, max});

        if(! reproducible)
            return dist(rng);
        else
            return dist(rng_deterministic);
    }

    /**
     * Generates <code>n</code> distinct random integers between two distinct values.
     * <p>
     * Note that this function must be avoided if <code>max - min</code> is large,
     * as it internally builds up the exhaustive list of the <code>max - min + 1</code>
     * integers between min an max. If this is the case, the user has to favour
     * <code>sparse_distinct_random</code>.
     * @tparam T an integral type
     * @param n the number of distinct integers to generate
     * @param min the lower boud of generated integers
     * @param max the upper bound of generated integers
     * @param reproducible true if the sequences of generated integers must be the same
     * over successive executions, false otherwise
     */
    template<class T>
    std::shared_ptr<std::vector<T>> dense_distinct_random(int n, T min, T max, bool reproducible = false)
    {
        static_assert(std::is_integral<T>::value, "Generated numbers must be integers");

        if (max < min)
            throw std::invalid_argument {"Maximum must be higher than minimum"};

        std::vector<T> from;
        for(int i = 0; i < max - min + 1; i++)
            from.push_back(max - min + i);

        std::shared_ptr<std::vector<T>> out;
        for(int i = 0; i < n; i++)
        {
            auto index = random(0, from.size(), reproducible);

            out->push_back(from[index]);
            from.erase(from.begin() + index);
        }

        return out;
    }

    /**
     * Generates <code>n</code> distinct random numbers between two distinct values.
     * <p>
     * Note that this function must be avoided for integers if <code>max - min</code> is close from
     * <code>n</code>, as the probability to successfully generate new distinct random integers
     * converges to zero as the amount of numbers to generate grows close to <code>max - min</code>.
     * If it is the case, the user has to favour <code>dense_distinct_random</code>.
     * <p>
     * Note that this "never" happens with floating point numbers.
     * @tparam T an arithmetic type
     * @param n the number of distinct numbers to generate
     * @param min the lower boud of generated numbers
     * @param max the upper bound of generated numbers
     * @param reproducible true if the sequences of generated numbers must be the same
     * over successive executions, false otherwise
     */
    template<class T>
    std::shared_ptr<std::vector<T>> sparse_distinct_random(int n,  T min = std::numeric_limits<T>::min(),
                                             T max = std::numeric_limits<T>::max(),
                                             bool reproducible = false)
    {
        if (max < min)
            throw std::invalid_argument {"Maximum must be higher than minimum"};

        std::shared_ptr<std::vector<T>> out = std::make_shared<std::vector<T>>();
        for(int i = 0; i < n; i++)
        {
            T nbr = math::random(min, max, reproducible);

            while(std::find(out->begin(), out->end(), nbr) != out->end())//while we can find 'nbr' in 'out'
                nbr = math::random(min, max, reproducible); //it works because we have few numbers to generate

            out->push_back(nbr);
        }

        return out;
    }

}//namespace math

}//namespace dg

#endif // RANDOM_HPP
