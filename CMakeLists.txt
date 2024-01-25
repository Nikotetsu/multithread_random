cmake_minimum_required(VERSION 3.15)

#
#   Project details
#

project(
    "multithread_random"
    VERSION "0.0.1"
    LANGUAGES CXX
)

include(cmake/settings.cmake)
include(cmake/sources.cmake)

#
# Application
#

add_executable(multithread_random
    ${exe_sources}
)

target_link_libraries(multithread_random
    PRIVATE
    
)




