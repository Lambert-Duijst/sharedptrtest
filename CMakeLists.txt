cmake_minimum_required(VERSION 2.8)
project(test)

find_package ( Qt4 REQUIRED )
include ( ${QT_USE_FILE} )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(test_HDRS container.h testobject.h)
set(test_SRCS ${test_HDRS}  main.cpp
                            testobject.cpp
                            testobjectbase.cpp
                            testobjectbasebase.cpp
                            container.cpp
                            memberofwhichdestructorisnotcalled.cpp
                            wrap.cpp )

add_executable (test ${test_SRCS} )


