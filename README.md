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
find_package
vcpkg new --application 创建vcpkg.json
CMakeUserPresets.json中添加 "CMAKE_TOOLCHAIN_FILE":"C:/dev/vcpkg/scripts/buildsystems/vcpkg.cmake"


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

[test 7]: visual studio 2022
尝试使用vcpkg.json 
Qt
find_package()

[test 8]: visual studio 2022
multi-directory

[test 9]: visual studio 2022
将头文件的代码组织编译成接口库（接口目标）
app目录存放应用层代码
public中存放公共代码
main中存放主函数代码


[test 10]: visual studio 2022
指定输入目录
使用 _declspec(dllexport) 声明 DLL 代替 set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)


[test11]: visual studio 2022
try Qt


[test12]: visual studio 2022
尝试新DLL替换 test 11 中 DLL（app4.dll）


[test13]：visual studio 2022
使用visual studio创建Qt项目

[test14]: visual studio 2022
利用Qt Creater创建Qt - cmake项目
使用visual studio创建cmake项目，将上一个项目作为子目录复制到当前项目，修改CMakeLists.txt文件，实现编译
追加Googletest



