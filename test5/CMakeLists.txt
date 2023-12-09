# CMakeList.txt : CMake project for test4, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(GIT_EXECUTABLE "C:/Program Files/Git/bin/git.exe")

project (hello_library)

add_executable(Git::Git IMPORTED)
set_property(TARGET Git::Git PROPERTY IMPORTED_LOCATION "${GIT_EXECUTABLE}")
get_target_property(git_location Git::Git IMPORTED_LOCATION)
get_target_property(git_imported Git::Git IMPORTED)
message(">>> git location: ${git_location}, ${git_imported}")

# Add source to this project's executable.
add_library(hello_library
	SHARED
	src/Hello.cpp
)
add_library(hello::library ALIAS hello_library)

target_include_directories(hello_library
	PUBLIC
	${PROJECT_SOURCE_DIR}/include
)

add_executable (hello_binary
	src/main.cpp
)

target_link_libraries(hello_binary
	PRIVATE
	hello::library
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET hello_library PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
