cmake_minimum_required (VERSION 2.6)

set (PROJECT main)

IF (WIN32)
	add_definitions(-DWINDOWS=1)
ENDIF()

project (${PROJECT})

include_directories (../libs)
include_directories (../src)

if (CMAKE_COMPILER_IS_GNUCXX)
	add_definitions (-Wall -pedantic -std=c++17)
else ()
	message ("Unknown compiler")
endif ()

set (HEADERS)
set (SOURCES ../src/main.cpp)

source_group ("Header Files" FILES ${HEADERS})
source_group ("Source Files" FILES ${SOURCES})

add_executable (${PROJECT} ${HEADERS} ${SOURCES})

target_link_libraries (${PROJECT} ${LIBRARIES})
