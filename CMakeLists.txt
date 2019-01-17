add_library(only_glob_ctors OBJECT only_glob_ctors.cpp)
add_library(normal_lib only_glob_ctors.cpp)

add_executable(with_ctors main.cpp $<TARGET_OBJECTS:only_glob_ctors>)
add_executable(no_ctors main.cpp)
target_link_libraries(no_ctors normal_lib)
