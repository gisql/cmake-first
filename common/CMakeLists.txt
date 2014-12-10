project(lib-common)
add_library(common STATIC common.cpp)

install(TARGETS common DESTINATION lib)
install(FILES common.hpp DESTINATION include)