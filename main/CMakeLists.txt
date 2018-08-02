set(Main_SRCS main.cpp OrderService.cpp OrderService.h BookDao.cpp BookDao.h Order.h)

add_library(core ${Main_SRCS})
add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} core)
