#############################################################################
# Makefile for building: libQtDkClientes.so.1.0.0
# Generated by qmake (3.0) (Qt 5.6.0)
# Project:  nbproject/qt-Debug.pro
# Template: lib
# Command: /usr/local/bin/qmake VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
#############################################################################

MAKEFILE      = qttmp-Debug.mk

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -pipe -g -std=gnu++0x -Wall -W -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -Inbproject -I. -isystem /usr/local/include/QtWidgets -isystem /usr/local/include/QtGui -isystem /usr/local/include/QtCore -I. -I/usr/local/mkspecs/linux-g++
QMAKE         = /usr/local/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = QtDkClientes1.0.0
DISTDIR = /home/brasilio/NetBeansProjects/QtDkClientes/build/Debug/GNU-Linux/QtDkClientes1.0.0
LINK          = g++
LFLAGS        = -Wl,-rpath,/usr/local/lib -shared -Wl,-soname,libQtDkClientes.so.1
LIBS          = $(SUBLIBS) -L/usr/local/lib -lQt5Widgets -lQt5Gui -lQt5Core -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = build/Debug/GNU-Linux/

####### Files

SOURCES       = DkClientes.cpp 
OBJECTS       = build/Debug/GNU-Linux/DkClientes.o
DIST          = /usr/local/mkspecs/features/spec_pre.prf \
		/usr/local/mkspecs/common/unix.conf \
		/usr/local/mkspecs/common/linux.conf \
		/usr/local/mkspecs/common/sanitize.conf \
		/usr/local/mkspecs/common/gcc-base.conf \
		/usr/local/mkspecs/common/gcc-base-unix.conf \
		/usr/local/mkspecs/common/g++-base.conf \
		/usr/local/mkspecs/common/g++-unix.conf \
		/usr/local/mkspecs/qconfig.pri \
		/usr/local/mkspecs/modules/qt_lib_3dcore.pri \
		/usr/local/mkspecs/modules/qt_lib_3dcore_private.pri \
		/usr/local/mkspecs/modules/qt_lib_3dinput.pri \
		/usr/local/mkspecs/modules/qt_lib_3dinput_private.pri \
		/usr/local/mkspecs/modules/qt_lib_3dlogic.pri \
		/usr/local/mkspecs/modules/qt_lib_3dlogic_private.pri \
		/usr/local/mkspecs/modules/qt_lib_3dquick.pri \
		/usr/local/mkspecs/modules/qt_lib_3dquick_private.pri \
		/usr/local/mkspecs/modules/qt_lib_3dquickinput.pri \
		/usr/local/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		/usr/local/mkspecs/modules/qt_lib_3dquickrender.pri \
		/usr/local/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		/usr/local/mkspecs/modules/qt_lib_3drender.pri \
		/usr/local/mkspecs/modules/qt_lib_3drender_private.pri \
		/usr/local/mkspecs/modules/qt_lib_bluetooth.pri \
		/usr/local/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/usr/local/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/local/mkspecs/modules/qt_lib_clucene_private.pri \
		/usr/local/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/local/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/local/mkspecs/modules/qt_lib_core.pri \
		/usr/local/mkspecs/modules/qt_lib_core_private.pri \
		/usr/local/mkspecs/modules/qt_lib_dbus.pri \
		/usr/local/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/local/mkspecs/modules/qt_lib_designer.pri \
		/usr/local/mkspecs/modules/qt_lib_designer_private.pri \
		/usr/local/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/usr/local/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri \
		/usr/local/mkspecs/modules/qt_lib_gui.pri \
		/usr/local/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/local/mkspecs/modules/qt_lib_help.pri \
		/usr/local/mkspecs/modules/qt_lib_help_private.pri \
		/usr/local/mkspecs/modules/qt_lib_location.pri \
		/usr/local/mkspecs/modules/qt_lib_location_private.pri \
		/usr/local/mkspecs/modules/qt_lib_multimedia.pri \
		/usr/local/mkspecs/modules/qt_lib_multimedia_private.pri \
		/usr/local/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/usr/local/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/usr/local/mkspecs/modules/qt_lib_network.pri \
		/usr/local/mkspecs/modules/qt_lib_network_private.pri \
		/usr/local/mkspecs/modules/qt_lib_nfc.pri \
		/usr/local/mkspecs/modules/qt_lib_nfc_private.pri \
		/usr/local/mkspecs/modules/qt_lib_opengl.pri \
		/usr/local/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/local/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/local/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/local/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/local/mkspecs/modules/qt_lib_positioning.pri \
		/usr/local/mkspecs/modules/qt_lib_positioning_private.pri \
		/usr/local/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/local/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/local/mkspecs/modules/qt_lib_qml.pri \
		/usr/local/mkspecs/modules/qt_lib_qml_private.pri \
		/usr/local/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/usr/local/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/local/mkspecs/modules/qt_lib_qmltest_private.pri \
		/usr/local/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/usr/local/mkspecs/modules/qt_lib_quick.pri \
		/usr/local/mkspecs/modules/qt_lib_quick_private.pri \
		/usr/local/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/usr/local/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/local/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/usr/local/mkspecs/modules/qt_lib_script.pri \
		/usr/local/mkspecs/modules/qt_lib_script_private.pri \
		/usr/local/mkspecs/modules/qt_lib_scripttools.pri \
		/usr/local/mkspecs/modules/qt_lib_scripttools_private.pri \
		/usr/local/mkspecs/modules/qt_lib_sensors.pri \
		/usr/local/mkspecs/modules/qt_lib_sensors_private.pri \
		/usr/local/mkspecs/modules/qt_lib_serialport.pri \
		/usr/local/mkspecs/modules/qt_lib_serialport_private.pri \
		/usr/local/mkspecs/modules/qt_lib_sql.pri \
		/usr/local/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/local/mkspecs/modules/qt_lib_svg.pri \
		/usr/local/mkspecs/modules/qt_lib_svg_private.pri \
		/usr/local/mkspecs/modules/qt_lib_testlib.pri \
		/usr/local/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/local/mkspecs/modules/qt_lib_uiplugin.pri \
		/usr/local/mkspecs/modules/qt_lib_uitools.pri \
		/usr/local/mkspecs/modules/qt_lib_uitools_private.pri \
		/usr/local/mkspecs/modules/qt_lib_waylandclient.pri \
		/usr/local/mkspecs/modules/qt_lib_waylandclient_private.pri \
		/usr/local/mkspecs/modules/qt_lib_webchannel.pri \
		/usr/local/mkspecs/modules/qt_lib_webchannel_private.pri \
		/usr/local/mkspecs/modules/qt_lib_websockets.pri \
		/usr/local/mkspecs/modules/qt_lib_websockets_private.pri \
		/usr/local/mkspecs/modules/qt_lib_widgets.pri \
		/usr/local/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/local/mkspecs/modules/qt_lib_x11extras.pri \
		/usr/local/mkspecs/modules/qt_lib_x11extras_private.pri \
		/usr/local/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/local/mkspecs/modules/qt_lib_xml.pri \
		/usr/local/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/local/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/usr/local/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/usr/local/mkspecs/features/qt_functions.prf \
		/usr/local/mkspecs/features/qt_config.prf \
		/usr/local/mkspecs/linux-g++/qmake.conf \
		/usr/local/mkspecs/features/spec_post.prf \
		/usr/local/mkspecs/features/exclusive_builds.prf \
		/usr/local/mkspecs/features/default_pre.prf \
		/usr/local/mkspecs/features/resolve_config.prf \
		/usr/local/mkspecs/features/default_post.prf \
		/usr/local/mkspecs/features/warn_on.prf \
		/usr/local/mkspecs/features/qt.prf \
		/usr/local/mkspecs/features/resources.prf \
		/usr/local/mkspecs/features/moc.prf \
		/usr/local/mkspecs/features/unix/opengl.prf \
		/usr/local/mkspecs/features/uic.prf \
		/usr/local/mkspecs/features/unix/thread.prf \
		/usr/local/mkspecs/features/testcase_targets.prf \
		/usr/local/mkspecs/features/exceptions.prf \
		/usr/local/mkspecs/features/yacc.prf \
		/usr/local/mkspecs/features/lex.prf \
		nbproject/nbproject/qt-Debug.pro DkClientes.h DkClientes.cpp
QMAKE_TARGET  = QtDkClientes
DESTDIR       = dist/Debug/GNU-Linux/
TARGET        = libQtDkClientes.so.1.0.0
TARGETA       = dist/Debug/GNU-Linux/libQtDkClientes.a
TARGET0       = libQtDkClientes.so
TARGETD       = libQtDkClientes.so.1.0.0
TARGET1       = libQtDkClientes.so.1
TARGET2       = libQtDkClientes.so.1.0


first: all
####### Build rules

dist/Debug/GNU-Linux/$(TARGET):  $(OBJECTS) $(SUBLIBS) $(OBJCOMP)  
	@test -d dist/Debug/GNU-Linux/ || mkdir -p dist/Debug/GNU-Linux/
	-$(DEL_FILE) $(TARGET) $(TARGET0) $(TARGET1) $(TARGET2)
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(LIBS) $(OBJCOMP)
	-ln -s $(TARGET) $(TARGET0)
	-ln -s $(TARGET) $(TARGET1)
	-ln -s $(TARGET) $(TARGET2)
	-$(DEL_FILE) dist/Debug/GNU-Linux/$(TARGET)
	-$(MOVE) $(TARGET)  dist/Debug/GNU-Linux/ 
	-$(DEL_FILE) dist/Debug/GNU-Linux/$(TARGET0)
	-$(DEL_FILE) dist/Debug/GNU-Linux/$(TARGET1)
	-$(DEL_FILE) dist/Debug/GNU-Linux/$(TARGET2)
	-$(MOVE) $(TARGET0) dist/Debug/GNU-Linux/ 
	-$(MOVE) $(TARGET1) dist/Debug/GNU-Linux/ 
	-$(MOVE) $(TARGET2) dist/Debug/GNU-Linux/ 



staticlib: $(TARGETA)

$(TARGETA):  $(OBJECTS) $(OBJCOMP) 
	-$(DEL_FILE) $(TARGETA) 
	$(AR) $(TARGETA) $(OBJECTS)

qttmp-Debug.mk: nbproject/qt-Debug.pro /usr/local/mkspecs/linux-g++/qmake.conf /usr/local/mkspecs/features/spec_pre.prf \
		/usr/local/mkspecs/common/unix.conf \
		/usr/local/mkspecs/common/linux.conf \
		/usr/local/mkspecs/common/sanitize.conf \
		/usr/local/mkspecs/common/gcc-base.conf \
		/usr/local/mkspecs/common/gcc-base-unix.conf \
		/usr/local/mkspecs/common/g++-base.conf \
		/usr/local/mkspecs/common/g++-unix.conf \
		/usr/local/mkspecs/qconfig.pri \
		/usr/local/mkspecs/modules/qt_lib_3dcore.pri \
		/usr/local/mkspecs/modules/qt_lib_3dcore_private.pri \
		/usr/local/mkspecs/modules/qt_lib_3dinput.pri \
		/usr/local/mkspecs/modules/qt_lib_3dinput_private.pri \
		/usr/local/mkspecs/modules/qt_lib_3dlogic.pri \
		/usr/local/mkspecs/modules/qt_lib_3dlogic_private.pri \
		/usr/local/mkspecs/modules/qt_lib_3dquick.pri \
		/usr/local/mkspecs/modules/qt_lib_3dquick_private.pri \
		/usr/local/mkspecs/modules/qt_lib_3dquickinput.pri \
		/usr/local/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		/usr/local/mkspecs/modules/qt_lib_3dquickrender.pri \
		/usr/local/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		/usr/local/mkspecs/modules/qt_lib_3drender.pri \
		/usr/local/mkspecs/modules/qt_lib_3drender_private.pri \
		/usr/local/mkspecs/modules/qt_lib_bluetooth.pri \
		/usr/local/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/usr/local/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/local/mkspecs/modules/qt_lib_clucene_private.pri \
		/usr/local/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/local/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/local/mkspecs/modules/qt_lib_core.pri \
		/usr/local/mkspecs/modules/qt_lib_core_private.pri \
		/usr/local/mkspecs/modules/qt_lib_dbus.pri \
		/usr/local/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/local/mkspecs/modules/qt_lib_designer.pri \
		/usr/local/mkspecs/modules/qt_lib_designer_private.pri \
		/usr/local/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/usr/local/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri \
		/usr/local/mkspecs/modules/qt_lib_gui.pri \
		/usr/local/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/local/mkspecs/modules/qt_lib_help.pri \
		/usr/local/mkspecs/modules/qt_lib_help_private.pri \
		/usr/local/mkspecs/modules/qt_lib_location.pri \
		/usr/local/mkspecs/modules/qt_lib_location_private.pri \
		/usr/local/mkspecs/modules/qt_lib_multimedia.pri \
		/usr/local/mkspecs/modules/qt_lib_multimedia_private.pri \
		/usr/local/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/usr/local/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/usr/local/mkspecs/modules/qt_lib_network.pri \
		/usr/local/mkspecs/modules/qt_lib_network_private.pri \
		/usr/local/mkspecs/modules/qt_lib_nfc.pri \
		/usr/local/mkspecs/modules/qt_lib_nfc_private.pri \
		/usr/local/mkspecs/modules/qt_lib_opengl.pri \
		/usr/local/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/local/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/local/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/local/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/usr/local/mkspecs/modules/qt_lib_positioning.pri \
		/usr/local/mkspecs/modules/qt_lib_positioning_private.pri \
		/usr/local/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/local/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/local/mkspecs/modules/qt_lib_qml.pri \
		/usr/local/mkspecs/modules/qt_lib_qml_private.pri \
		/usr/local/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/usr/local/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/local/mkspecs/modules/qt_lib_qmltest_private.pri \
		/usr/local/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/usr/local/mkspecs/modules/qt_lib_quick.pri \
		/usr/local/mkspecs/modules/qt_lib_quick_private.pri \
		/usr/local/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/usr/local/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/local/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/usr/local/mkspecs/modules/qt_lib_script.pri \
		/usr/local/mkspecs/modules/qt_lib_script_private.pri \
		/usr/local/mkspecs/modules/qt_lib_scripttools.pri \
		/usr/local/mkspecs/modules/qt_lib_scripttools_private.pri \
		/usr/local/mkspecs/modules/qt_lib_sensors.pri \
		/usr/local/mkspecs/modules/qt_lib_sensors_private.pri \
		/usr/local/mkspecs/modules/qt_lib_serialport.pri \
		/usr/local/mkspecs/modules/qt_lib_serialport_private.pri \
		/usr/local/mkspecs/modules/qt_lib_sql.pri \
		/usr/local/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/local/mkspecs/modules/qt_lib_svg.pri \
		/usr/local/mkspecs/modules/qt_lib_svg_private.pri \
		/usr/local/mkspecs/modules/qt_lib_testlib.pri \
		/usr/local/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/local/mkspecs/modules/qt_lib_uiplugin.pri \
		/usr/local/mkspecs/modules/qt_lib_uitools.pri \
		/usr/local/mkspecs/modules/qt_lib_uitools_private.pri \
		/usr/local/mkspecs/modules/qt_lib_waylandclient.pri \
		/usr/local/mkspecs/modules/qt_lib_waylandclient_private.pri \
		/usr/local/mkspecs/modules/qt_lib_webchannel.pri \
		/usr/local/mkspecs/modules/qt_lib_webchannel_private.pri \
		/usr/local/mkspecs/modules/qt_lib_websockets.pri \
		/usr/local/mkspecs/modules/qt_lib_websockets_private.pri \
		/usr/local/mkspecs/modules/qt_lib_widgets.pri \
		/usr/local/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/local/mkspecs/modules/qt_lib_x11extras.pri \
		/usr/local/mkspecs/modules/qt_lib_x11extras_private.pri \
		/usr/local/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/local/mkspecs/modules/qt_lib_xml.pri \
		/usr/local/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/local/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/usr/local/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/usr/local/mkspecs/features/qt_functions.prf \
		/usr/local/mkspecs/features/qt_config.prf \
		/usr/local/mkspecs/linux-g++/qmake.conf \
		/usr/local/mkspecs/features/spec_post.prf \
		/usr/local/mkspecs/features/exclusive_builds.prf \
		/usr/local/mkspecs/features/default_pre.prf \
		/usr/local/mkspecs/features/resolve_config.prf \
		/usr/local/mkspecs/features/default_post.prf \
		/usr/local/mkspecs/features/warn_on.prf \
		/usr/local/mkspecs/features/qt.prf \
		/usr/local/mkspecs/features/resources.prf \
		/usr/local/mkspecs/features/moc.prf \
		/usr/local/mkspecs/features/unix/opengl.prf \
		/usr/local/mkspecs/features/uic.prf \
		/usr/local/mkspecs/features/unix/thread.prf \
		/usr/local/mkspecs/features/testcase_targets.prf \
		/usr/local/mkspecs/features/exceptions.prf \
		/usr/local/mkspecs/features/yacc.prf \
		/usr/local/mkspecs/features/lex.prf \
		nbproject/qt-Debug.pro \
		/usr/local/lib/libQt5Widgets.prl \
		/usr/local/lib/libQt5Gui.prl \
		/usr/local/lib/libQt5Core.prl
	$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
/usr/local/mkspecs/features/spec_pre.prf:
/usr/local/mkspecs/common/unix.conf:
/usr/local/mkspecs/common/linux.conf:
/usr/local/mkspecs/common/sanitize.conf:
/usr/local/mkspecs/common/gcc-base.conf:
/usr/local/mkspecs/common/gcc-base-unix.conf:
/usr/local/mkspecs/common/g++-base.conf:
/usr/local/mkspecs/common/g++-unix.conf:
/usr/local/mkspecs/qconfig.pri:
/usr/local/mkspecs/modules/qt_lib_3dcore.pri:
/usr/local/mkspecs/modules/qt_lib_3dcore_private.pri:
/usr/local/mkspecs/modules/qt_lib_3dinput.pri:
/usr/local/mkspecs/modules/qt_lib_3dinput_private.pri:
/usr/local/mkspecs/modules/qt_lib_3dlogic.pri:
/usr/local/mkspecs/modules/qt_lib_3dlogic_private.pri:
/usr/local/mkspecs/modules/qt_lib_3dquick.pri:
/usr/local/mkspecs/modules/qt_lib_3dquick_private.pri:
/usr/local/mkspecs/modules/qt_lib_3dquickinput.pri:
/usr/local/mkspecs/modules/qt_lib_3dquickinput_private.pri:
/usr/local/mkspecs/modules/qt_lib_3dquickrender.pri:
/usr/local/mkspecs/modules/qt_lib_3dquickrender_private.pri:
/usr/local/mkspecs/modules/qt_lib_3drender.pri:
/usr/local/mkspecs/modules/qt_lib_3drender_private.pri:
/usr/local/mkspecs/modules/qt_lib_bluetooth.pri:
/usr/local/mkspecs/modules/qt_lib_bluetooth_private.pri:
/usr/local/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/local/mkspecs/modules/qt_lib_clucene_private.pri:
/usr/local/mkspecs/modules/qt_lib_concurrent.pri:
/usr/local/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/local/mkspecs/modules/qt_lib_core.pri:
/usr/local/mkspecs/modules/qt_lib_core_private.pri:
/usr/local/mkspecs/modules/qt_lib_dbus.pri:
/usr/local/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/local/mkspecs/modules/qt_lib_designer.pri:
/usr/local/mkspecs/modules/qt_lib_designer_private.pri:
/usr/local/mkspecs/modules/qt_lib_designercomponents_private.pri:
/usr/local/mkspecs/modules/qt_lib_eglfs_device_lib_private.pri:
/usr/local/mkspecs/modules/qt_lib_gui.pri:
/usr/local/mkspecs/modules/qt_lib_gui_private.pri:
/usr/local/mkspecs/modules/qt_lib_help.pri:
/usr/local/mkspecs/modules/qt_lib_help_private.pri:
/usr/local/mkspecs/modules/qt_lib_location.pri:
/usr/local/mkspecs/modules/qt_lib_location_private.pri:
/usr/local/mkspecs/modules/qt_lib_multimedia.pri:
/usr/local/mkspecs/modules/qt_lib_multimedia_private.pri:
/usr/local/mkspecs/modules/qt_lib_multimediawidgets.pri:
/usr/local/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
/usr/local/mkspecs/modules/qt_lib_network.pri:
/usr/local/mkspecs/modules/qt_lib_network_private.pri:
/usr/local/mkspecs/modules/qt_lib_nfc.pri:
/usr/local/mkspecs/modules/qt_lib_nfc_private.pri:
/usr/local/mkspecs/modules/qt_lib_opengl.pri:
/usr/local/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/local/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/local/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/local/mkspecs/modules/qt_lib_platformsupport_private.pri:
/usr/local/mkspecs/modules/qt_lib_positioning.pri:
/usr/local/mkspecs/modules/qt_lib_positioning_private.pri:
/usr/local/mkspecs/modules/qt_lib_printsupport.pri:
/usr/local/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/local/mkspecs/modules/qt_lib_qml.pri:
/usr/local/mkspecs/modules/qt_lib_qml_private.pri:
/usr/local/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/usr/local/mkspecs/modules/qt_lib_qmltest.pri:
/usr/local/mkspecs/modules/qt_lib_qmltest_private.pri:
/usr/local/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
/usr/local/mkspecs/modules/qt_lib_quick.pri:
/usr/local/mkspecs/modules/qt_lib_quick_private.pri:
/usr/local/mkspecs/modules/qt_lib_quickparticles_private.pri:
/usr/local/mkspecs/modules/qt_lib_quickwidgets.pri:
/usr/local/mkspecs/modules/qt_lib_quickwidgets_private.pri:
/usr/local/mkspecs/modules/qt_lib_script.pri:
/usr/local/mkspecs/modules/qt_lib_script_private.pri:
/usr/local/mkspecs/modules/qt_lib_scripttools.pri:
/usr/local/mkspecs/modules/qt_lib_scripttools_private.pri:
/usr/local/mkspecs/modules/qt_lib_sensors.pri:
/usr/local/mkspecs/modules/qt_lib_sensors_private.pri:
/usr/local/mkspecs/modules/qt_lib_serialport.pri:
/usr/local/mkspecs/modules/qt_lib_serialport_private.pri:
/usr/local/mkspecs/modules/qt_lib_sql.pri:
/usr/local/mkspecs/modules/qt_lib_sql_private.pri:
/usr/local/mkspecs/modules/qt_lib_svg.pri:
/usr/local/mkspecs/modules/qt_lib_svg_private.pri:
/usr/local/mkspecs/modules/qt_lib_testlib.pri:
/usr/local/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/local/mkspecs/modules/qt_lib_uiplugin.pri:
/usr/local/mkspecs/modules/qt_lib_uitools.pri:
/usr/local/mkspecs/modules/qt_lib_uitools_private.pri:
/usr/local/mkspecs/modules/qt_lib_waylandclient.pri:
/usr/local/mkspecs/modules/qt_lib_waylandclient_private.pri:
/usr/local/mkspecs/modules/qt_lib_webchannel.pri:
/usr/local/mkspecs/modules/qt_lib_webchannel_private.pri:
/usr/local/mkspecs/modules/qt_lib_websockets.pri:
/usr/local/mkspecs/modules/qt_lib_websockets_private.pri:
/usr/local/mkspecs/modules/qt_lib_widgets.pri:
/usr/local/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/local/mkspecs/modules/qt_lib_x11extras.pri:
/usr/local/mkspecs/modules/qt_lib_x11extras_private.pri:
/usr/local/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/local/mkspecs/modules/qt_lib_xml.pri:
/usr/local/mkspecs/modules/qt_lib_xml_private.pri:
/usr/local/mkspecs/modules/qt_lib_xmlpatterns.pri:
/usr/local/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
/usr/local/mkspecs/features/qt_functions.prf:
/usr/local/mkspecs/features/qt_config.prf:
/usr/local/mkspecs/linux-g++/qmake.conf:
/usr/local/mkspecs/features/spec_post.prf:
/usr/local/mkspecs/features/exclusive_builds.prf:
/usr/local/mkspecs/features/default_pre.prf:
/usr/local/mkspecs/features/resolve_config.prf:
/usr/local/mkspecs/features/default_post.prf:
/usr/local/mkspecs/features/warn_on.prf:
/usr/local/mkspecs/features/qt.prf:
/usr/local/mkspecs/features/resources.prf:
/usr/local/mkspecs/features/moc.prf:
/usr/local/mkspecs/features/unix/opengl.prf:
/usr/local/mkspecs/features/uic.prf:
/usr/local/mkspecs/features/unix/thread.prf:
/usr/local/mkspecs/features/testcase_targets.prf:
/usr/local/mkspecs/features/exceptions.prf:
/usr/local/mkspecs/features/yacc.prf:
/usr/local/mkspecs/features/lex.prf:
nbproject/qt-Debug.pro:
/usr/local/lib/libQt5Widgets.prl:
/usr/local/lib/libQt5Gui.prl:
/usr/local/lib/libQt5Core.prl:
qmake: FORCE
	@$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro

qmake_all: FORCE


all: qttmp-Debug.mk dist/Debug/GNU-Linux/$(TARGET)

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/
	$(COPY_FILE) --parents DkClientes.h $(DISTDIR)/
	$(COPY_FILE) --parents DkClientes.cpp $(DISTDIR)/


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) dist/Debug/GNU-Linux/$(TARGET) 
	-$(DEL_FILE) dist/Debug/GNU-Linux/$(TARGET0) dist/Debug/GNU-Linux/$(TARGET1) dist/Debug/GNU-Linux/$(TARGET2) $(TARGETA)
	-$(DEL_FILE) qttmp-Debug.mk


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

build/Debug/GNU-Linux/DkClientes.o: DkClientes.cpp DkClientes.h \
		../QtDkDatabase/DkDatabase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux/DkClientes.o DkClientes.cpp

####### Install

install:  FORCE

uninstall:  FORCE

FORCE:

