set(SOURCE_FILES main.cpp)

find_library(X common)
add_executable(first ${SOURCE_FILES})
target_link_libraries(first common)

install(TARGETS first DESTINATION bin)