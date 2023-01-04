cmake_minimum_required(VERSION 3.5)
project(exp_crazyflie)

find_package(Eigen3 REQUIRED)
find_package(Boost 1.5 COMPONENTS system REQUIRED)

include_directories(
    include
    ${EIGEN3_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}/../ros_ws/src/crazyswarm/externalDependencies/libmotioncapture/include
)

add_executable(test src/main.cpp src/Wrapper.cpp)
target_link_libraries(test 
                    libmotioncapture
                    pthread
                    Boost::system
                      )
