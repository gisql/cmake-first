project(lib-common)
add_library(common STATIC common.cpp)

target_include_directories(common PUBLIC .)

install(TARGETS common DESTINATION lib)
install(FILES common.hpp DESTINATION include)

