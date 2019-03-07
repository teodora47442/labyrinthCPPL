#############################################################################
# Makefile for building: Labyrinth
# Generated by qmake (3.1) (Qt 5.11.2)
# Project:  Labyrinth.pro
# Template: subdirs
# Command: C:\Qt\5.11.2\mingw53_32\bin\qmake.exe -o Makefile Labyrinth.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
#############################################################################

MAKEFILE      = Makefile

first: make_first
QMAKE         = C:\Qt\5.11.2\mingw53_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL      = C:\Qt\5.11.2\mingw53_32\bin\qmake.exe -install qinstall
QINSTALL_PROGRAM = C:\Qt\5.11.2\mingw53_32\bin\qmake.exe -install qinstall -exe
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		sub-core \
		sub-tests \
		sub-console


sub-core-qmake_all:  FORCE
	@if not exist core\ mkdir core\ & if not exist core\ exit 1
	cd core\ && $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\core\core.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
	cd core\ && $(MAKE) -f Makefile qmake_all
sub-core: FORCE
	@if not exist core\ mkdir core\ & if not exist core\ exit 1
	cd core\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\core\core.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile
sub-core-make_first: FORCE
	@if not exist core\ mkdir core\ & if not exist core\ exit 1
	cd core\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\core\core.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile 
sub-core-all: FORCE
	@if not exist core\ mkdir core\ & if not exist core\ exit 1
	cd core\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\core\core.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile all
sub-core-clean: FORCE
	@if not exist core\ mkdir core\ & if not exist core\ exit 1
	cd core\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\core\core.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile clean
sub-core-distclean: FORCE
	@if not exist core\ mkdir core\ & if not exist core\ exit 1
	cd core\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\core\core.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile distclean
sub-core-install_subtargets: FORCE
	@if not exist core\ mkdir core\ & if not exist core\ exit 1
	cd core\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\core\core.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile install
sub-core-uninstall_subtargets: FORCE
	@if not exist core\ mkdir core\ & if not exist core\ exit 1
	cd core\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\core\core.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile uninstall
sub-tests-qmake_all:  FORCE
	@if not exist tests\ mkdir tests\ & if not exist tests\ exit 1
	cd tests\ && $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\tests\tests.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
	cd tests\ && $(MAKE) -f Makefile qmake_all
sub-tests: FORCE
	@if not exist tests\ mkdir tests\ & if not exist tests\ exit 1
	cd tests\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\tests\tests.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile
sub-tests-make_first: FORCE
	@if not exist tests\ mkdir tests\ & if not exist tests\ exit 1
	cd tests\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\tests\tests.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile 
sub-tests-all: FORCE
	@if not exist tests\ mkdir tests\ & if not exist tests\ exit 1
	cd tests\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\tests\tests.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile all
sub-tests-clean: FORCE
	@if not exist tests\ mkdir tests\ & if not exist tests\ exit 1
	cd tests\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\tests\tests.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile clean
sub-tests-distclean: FORCE
	@if not exist tests\ mkdir tests\ & if not exist tests\ exit 1
	cd tests\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\tests\tests.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile distclean
sub-tests-install_subtargets: FORCE
	@if not exist tests\ mkdir tests\ & if not exist tests\ exit 1
	cd tests\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\tests\tests.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile install
sub-tests-uninstall_subtargets: FORCE
	@if not exist tests\ mkdir tests\ & if not exist tests\ exit 1
	cd tests\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\tests\tests.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile uninstall
sub-console-qmake_all:  FORCE
	@if not exist console\ mkdir console\ & if not exist console\ exit 1
	cd console\ && $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\console\console.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
	cd console\ && $(MAKE) -f Makefile qmake_all
sub-console: FORCE
	@if not exist console\ mkdir console\ & if not exist console\ exit 1
	cd console\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\console\console.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile
sub-console-make_first: FORCE
	@if not exist console\ mkdir console\ & if not exist console\ exit 1
	cd console\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\console\console.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile 
sub-console-all: FORCE
	@if not exist console\ mkdir console\ & if not exist console\ exit 1
	cd console\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\console\console.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile all
sub-console-clean: FORCE
	@if not exist console\ mkdir console\ & if not exist console\ exit 1
	cd console\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\console\console.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile clean
sub-console-distclean: FORCE
	@if not exist console\ mkdir console\ & if not exist console\ exit 1
	cd console\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\console\console.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile distclean
sub-console-install_subtargets: FORCE
	@if not exist console\ mkdir console\ & if not exist console\ exit 1
	cd console\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\console\console.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile install
sub-console-uninstall_subtargets: FORCE
	@if not exist console\ mkdir console\ & if not exist console\ exit 1
	cd console\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\console\console.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile uninstall

Makefile: Labyrinth.pro C:/Qt/5.11.2/mingw53_32/mkspecs/win32-g++/qmake.conf C:/Qt/5.11.2/mingw53_32/mkspecs/features/spec_pre.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/qdevice.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/device_config.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/common/sanitize.conf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/common/gcc-base.conf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/common/g++-base.conf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/common/angle.conf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/common/windows-vulkan.conf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/common/g++-win32.conf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/qconfig.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3danimation.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3danimation_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3drender.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_axbase.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_axserver.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_core.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_core_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_dbus.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_designer.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_edid_support_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_egl_support_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_fb_support_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_gui.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_help.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_help_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_location.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_location_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_network.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_network_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_nfc.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_opengl.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_positioning.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_positioningquick.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_positioningquick_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qml.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quick.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_scxml.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_sensors.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_serialport.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_sql.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_svg.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_testlib.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_texttospeech.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_texttospeech_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_theme_support_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_uitools.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_websockets.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_widgets.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_winextras.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_xml.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/qt_functions.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/qt_config.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/win32-g++/qmake.conf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/spec_post.prf \
		.qmake.stash \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/exclusive_builds.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/toolchain.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/default_pre.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/win32/default_pre.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/resolve_config.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/exclusive_builds_post.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/default_post.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/qml_debug.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/precompile_header.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/warn_on.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/qmake_use.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/file_copies.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/win32/windows.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/testcase_targets.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/exceptions.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/yacc.prf \
		C:/Qt/5.11.2/mingw53_32/mkspecs/features/lex.prf \
		Labyrinth.pro
	$(QMAKE) -o Makefile Labyrinth.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
C:/Qt/5.11.2/mingw53_32/mkspecs/features/spec_pre.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/qdevice.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/device_config.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/common/sanitize.conf:
C:/Qt/5.11.2/mingw53_32/mkspecs/common/gcc-base.conf:
C:/Qt/5.11.2/mingw53_32/mkspecs/common/g++-base.conf:
C:/Qt/5.11.2/mingw53_32/mkspecs/common/angle.conf:
C:/Qt/5.11.2/mingw53_32/mkspecs/common/windows-vulkan.conf:
C:/Qt/5.11.2/mingw53_32/mkspecs/common/g++-win32.conf:
C:/Qt/5.11.2/mingw53_32/mkspecs/qconfig.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3danimation.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3danimation_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3drender.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_accessibility_support_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_axbase.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_axserver.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_core.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_core_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_dbus.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_designer.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_edid_support_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_egl_support_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_fb_support_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_gui.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_help.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_help_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_location.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_location_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_network.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_network_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_nfc.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_opengl.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_positioning.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_positioningquick.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_positioningquick_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qml.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quick.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_scxml.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_sensors.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_serialport.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_sql.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_svg.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_testlib.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_texttospeech.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_texttospeech_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_theme_support_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_uitools.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_websockets.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_widgets.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_winextras.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_xml.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/qt_functions.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/qt_config.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/win32-g++/qmake.conf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/spec_post.prf:
.qmake.stash:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/exclusive_builds.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/toolchain.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/default_pre.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/win32/default_pre.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/resolve_config.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/exclusive_builds_post.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/default_post.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/qml_debug.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/precompile_header.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/warn_on.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/qmake_use.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/file_copies.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/win32/windows.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/testcase_targets.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/exceptions.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/yacc.prf:
C:/Qt/5.11.2/mingw53_32/mkspecs/features/lex.prf:
Labyrinth.pro:
qmake: FORCE
	@$(QMAKE) -o Makefile Labyrinth.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"

qmake_all: sub-core-qmake_all sub-tests-qmake_all sub-console-qmake_all FORCE

make_first: sub-core-make_first sub-tests-make_first sub-console-make_first  FORCE
all: sub-core-all sub-tests-all sub-console-all  FORCE
clean: sub-core-clean sub-tests-clean sub-console-clean  FORCE
distclean: sub-core-distclean sub-tests-distclean sub-console-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash
install_subtargets: sub-core-install_subtargets sub-tests-install_subtargets sub-console-install_subtargets FORCE
uninstall_subtargets: sub-core-uninstall_subtargets sub-tests-uninstall_subtargets sub-console-uninstall_subtargets FORCE

sub-core-debug:
	@if not exist core\ mkdir core\ & if not exist core\ exit 1
	cd core\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\core\core.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile debug
sub-tests-debug:
	@if not exist tests\ mkdir tests\ & if not exist tests\ exit 1
	cd tests\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\tests\tests.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile debug
sub-console-debug:
	@if not exist console\ mkdir console\ & if not exist console\ exit 1
	cd console\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\console\console.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile debug
debug: sub-core-debug sub-tests-debug sub-console-debug

sub-core-release:
	@if not exist core\ mkdir core\ & if not exist core\ exit 1
	cd core\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\core\core.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile release
sub-tests-release:
	@if not exist tests\ mkdir tests\ & if not exist tests\ exit 1
	cd tests\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\tests\tests.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile release
sub-console-release:
	@if not exist console\ mkdir console\ & if not exist console\ exit 1
	cd console\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\console\console.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile release
release: sub-core-release sub-tests-release sub-console-release

sub-core-check:
	@if not exist core\ mkdir core\ & if not exist core\ exit 1
	cd core\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\core\core.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile check
sub-tests-check:
	@if not exist tests\ mkdir tests\ & if not exist tests\ exit 1
	cd tests\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\tests\tests.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile check
sub-console-check:
	@if not exist console\ mkdir console\ & if not exist console\ exit 1
	cd console\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\console\console.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile check
check: sub-core-check sub-tests-check sub-console-check

sub-core-benchmark:
	@if not exist core\ mkdir core\ & if not exist core\ exit 1
	cd core\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\core\core.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile benchmark
sub-tests-benchmark:
	@if not exist tests\ mkdir tests\ & if not exist tests\ exit 1
	cd tests\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\tests\tests.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile benchmark
sub-console-benchmark:
	@if not exist console\ mkdir console\ & if not exist console\ exit 1
	cd console\ && ( if not exist Makefile $(QMAKE) -o Makefile "C:\Users\lucas\Desktop\New Labyrinth\Labyrinth\console\console.pro" -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug" ) && $(MAKE) -f Makefile benchmark
benchmark: sub-core-benchmark sub-tests-benchmark sub-console-benchmark
install:install_subtargets  FORCE

uninstall: uninstall_subtargets FORCE

FORCE:

