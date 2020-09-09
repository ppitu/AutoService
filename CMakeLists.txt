cmake_minimum_required(VERSION 3.17)
project(AutoService)

set(CMAKE_CXX_STANDARD 20)

set(wxWidgets_ROOT_DIR </usr/local/include/wx-3.1/)
set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base  REQUIRED)
include(${wxWidgets_USE_FILE})

set(SOURCE_FILE main.cpp main.h)
add_executable(AutoService ${SOURCE_FILE})

include_directories(src)
add_subdirectory(src)

target_link_libraries(AutoService AutoService_lib ${wxWidgets_LIBRARIES} -lmysqlclient)

add_subdirectory(Test)

