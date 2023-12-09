# CMakeList.txt : CMake project for test3, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()



project (static_library)

add_library(static_library 
		STATIC 
		src/static.cpp
)
target_include_directories(static_library
	PUBLIC
	${PROJECT_SOURCE_DIR}/include
	)


add_executable (hello_binary src/main.cpp)
target_link_libraries(hello_binary
	PRIVATE
	static_library
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET static_library PROPERTY CXX_STANDARD 20)
endif()



# TODO: Add tests and install targets if needed.
