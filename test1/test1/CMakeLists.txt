# CMakeList.txt : CMake project for test1, include source and define
# project specific logic here.
#
#set(fmt_DIR "C:/dev/vcpkg/packages/fmt_x86-windows")
#list(APPEND CMAKE_PREFIX_PATH "C:/dev/vcpkg/packages/fmt_x64-windows")

# Add source to this project's executable.
add_executable (test1 "test1.cpp" "test1.h")



if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET test1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

find_package(fmt CONFIG REQUIRED)

#target_include_directories(main PUBLIC ${fmt_DIR}/include)
#target_link_directories(main PRIVATE ${fmt_DIR}/lib)
target_link_libraries(test1 PRIVATE fmt::fmt)