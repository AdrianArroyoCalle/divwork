CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT (DIVWORK)
SET(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")
#Version number
SET(DIVWORK_VERSION_MAJOR 0)
SET(DIVWORK_VERSION_MINOR 1)
#Common source codes for projects (exclude platform independent)
SET(DIVEL_CALENDAR_SRC
"divel-calendar/AddEvent.cpp"
"divel-calendar/Calendario.cpp"
"divel-calendar/DivChat.cpp"
"divel-calendar/Divel Calendar.cpp"
"divel-calendar/StdAfx.cpp"
)
SET(AGENDA_CORREOS_SRC
"agenda-correos/correos.cpp"
)
SET(DIV_VNC_SRC
"div-vnc/app.cpp"
)
SET(DIVEL_WRITE_SRC
"divel-write/DivelWriteFrm.cpp"
"divel-write/DivelWriteApp.cpp"
)
SET(DIV_VERIFY_HTTP
"div-verify-http/app.cpp"
"div-verify-http/frame.cpp"
)
#Compiling options
# should we use our stupid functions?
option (USE_LIBRANDOM 
        "Library example implementation" ON)
option (BUILD_DIVELCALENDAR "Build Divel Calendar" ON)
option (BUILD_AGENDACORREOS "Build Agenda de Correos" ON)
option (BUILD_DIV_VNC "Build DivVNC (broked)" OFF)
option (BUILD_DIVEL_WRITE "Build Divel Write" ON)
option (BUILD_DIV_VERIFY_HTTP "Build DivVerifyHTTP" ON)
#Custom builds
if (USE_LIBRANDOM)
	include_directories("${PROJECT_BINARY_DIR}/librandom")
	add_subdirectory(librandom)
	set(COMMON_LIBS ${COMMON_LIBS} librandom)
endif()
#Get required libraries
find_package(wxWidgets COMPONENTS core base aui adv html net gl)#REQUIRED)
include( "${wxWidgets_USE_FILE}" )
SET(COMMON_LIBS ${COMMON_LIBS} ${wxWidgets_LIBRARIES})
# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/config/config.h.in"
  "${PROJECT_BINARY_DIR}/config/config.h"
  )
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}/config")

# Add executables
if(BUILD_DIVELCALENDAR)
	add_executable(Divel_Calendar ${DIVEL_CALENDAR_SRC})
	target_link_libraries(Divel_Calendar ${COMMON_LIBS})
	install(TARGETS Divel_Calendar DESTINATION bin)
	SET(DESKTOP_FILES ${DESKTOP_FILES} "freedesktop/divel-calendar.desktop")
	SET(SCALABLE_FILES ${SCALABLE_FILES}) #"freedesktop/divel-calendar.svg"
	SET(ICON64_FILES ${ICON64_FILES} "freedesktop/divel-calendar.png")
	SET(EXE_TARGETS ${EXE_TARGETS} Divel_Calendar)
	SET(EXE_DESC ${EXE_DESC} "Divel Calendar")
endif()
if(BUILD_AGENDACORREOS)
	add_executable(AgendaCorreos ${AGENDA_CORREOS_SRC})
	target_link_libraries(AgendaCorreos ${COMMON_LIBS})
	install(TARGETS AgendaCorreos DESTINATION bin)
	SET(DESKTOP_FILES ${DESKTOP_FILES} "freedesktop/agenda-correos.desktop")
	SET(EXE_TARGETS ${EXE_TARGETS} AgendaCorreos)
	SET(EXE_DESC ${EXE_DESC} "Agenda de Correos")
endif()
if(BUILD_DIV_VNC)
	find_package(LIBVNCCLIENT REQUIRED)
	add_executable(DivVnc ${DIV_VNC_SRC})
	target_link_libraries(DivVnc ${COMMON_LIBS} ${LIBVNCCLIENT_LIBRARY})
	install(TARGETS DivVnc DESTINATION bin)
endif()

if(BUILD_DIVEL_WRITE)
	add_executable(DivelWrite ${DIVEL_WRITE_SRC})
	target_link_libraries(DivelWrite ${COMMON_LIBS})
	install(TARGETS DivelWrite DESTINATION bin)
	SET(DESKTOP_FILES ${DESKTOP_FILES} "freedesktop/divel-write.desktop")
	SET(EXE_TARGETS ${EXE_TARGETS} DivelWrite)
	SET(EXE_DESC ${EXE_DESC} "Divel Write")
endif()
if(BUILD_DIV_VERIFY_HTTP)
	add_executable(DivVerifyHTTP ${DIV_VERIFY_HTTP})
	target_link_libraries(DivVerifyHTTP ${COMMON_LIBS})
	install(TARGETS DivVerifyHTTP DESTINATION bin)
	SET(DESKTOP_FILES ${DESKTOP_FILES} "freedesktop/div-verify-http.desktop")
	SET(EXE_TARGETS ${EXE_TARGETS} DivVerifyHTTP)
	SET(EXE_DESC ${EXE_DESC} "DivVerifyHTTP")
endif()
#Desktop shourtcouts
if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
	SET(DESKTOP_DIR     "share/applications/")
	SET(SCALABLE_DIR	"share/icons/hicolor/scalable/apps/")
	set(ICON64_DIR 		"share/icons/hicolor/64x64/apps/")
	#INSTALL (FILES ${DESKTOP_FILES} DESTINATION ${DESKTOP_DIR})
	INSTALL (PROGRAMS ${DESKTOP_FILES} DESTINATION ${DESKTOP_DIR})
	INSTALL (FILES ${SCALABLE_FILES} DESTINATION ${SCALABLE_DIR})
	INSTALL (FILES ${ICON64_FILES} DESTINATION ${ICON64_DIR})
endif()
if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
	set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "${CMAKE_PROJECT_NAME}-${DIVWORK_VERSION_MAJOR}")
	set(CPACK_NSIS_MENU_LINKS "http://github.com/AdrianArroyoCalle/divwork" "Homepage for DivWork")
	set(CPACK_NSIS_URL_INFO_ABOUT "http://github.com/AdrianArroyoCalle/divwork")
	set(CPACK_NSIS_HELP_LINK "http://github.com/AdrianArroyoCalle/divwork")
	set(CPACK_PACKAGE_EXECUTABLES "${EXE_TARGETS}" "${EXE_DESC}")
endif()
# build a CPack driven installer package
include (InstallRequiredSystemLibraries)
set (CPACK_RESOURCE_FILE_LICENSE  
     "${CMAKE_CURRENT_SOURCE_DIR}/divel-calendar/License.txt")
set (CPACK_PACKAGE_VERSION_MAJOR "${DIVWORK_VERSION_MAJOR}")
set (CPACK_PACKAGE_VERSION_MINOR "${DIVWORK_VERSION_MINOR}")
set (CPACK_PACKAGE_NAME "divwork")
set (CPACK_PACKAGE_VENDOR "Adrian Arroyo Calle")
SET (CPACK_DEBIAN_PACKAGE_DEPENDS "libc6 (>= 2.3.1-6), libwxgtk2.8-dev")
SET (CPACK_PACKAGE_CONTACT "adrian.arroyocalle@gmail.com")
SET (CPACK_DEBIAN_PACKAGE_MAINTAINER "${CPACK_PACKAGE_VENDOR} <${CPACK_PACKAGE_CONTACT}>")
SET (CPACK_PACKAGE_DESCRIPTION_SUMMARY "DivWork is a utilitary suite free for personal use and little bussiness")
include (CPack)
