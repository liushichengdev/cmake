# cmake
cmake Learning

URL: https://cmake.org/


[test]: visual studio 2022
cmake
add_subdirectory()
target_include_directories()
target_link_directories()
target_link_libraries()



[test1]: visual studio 2022
cmake + vcpkg + vcpkg.json


[test2]: visual studio 2022
multi-directory: test2[dirA, dirB[dirC]]
cmake

[test 3]: visual studio 2022
static library


[test 4]: visual studio 2022
dynamic library
需要添加：set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
不然不会生成.lib文件

[test 5]: visual studio 2022
导入可执行文件目标
set(GIT_EXECUTABLE "C:/Program Files/Git/bin/git.exe")
add_executable(Git::Git IMPORTED)
set_property(TARGET Git::Git PROPERTY IMPORTED_LOCATION "${GIT_EXECUTABLE}")
get_target_property(git_location Git::Git IMPORTED_LOCATION)
get_target_property(git_imported Git::Git IMPORTED)
message(">>> git location: ${git_location}, ${git_imported}")


[test 6] :visual studio 2022
含参编译

