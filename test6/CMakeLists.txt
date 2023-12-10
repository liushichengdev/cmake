# CMakeList.txt : CMake project for test6, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

add_compile_options(-std=c++11)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

# Set a default C++ compile flag
#set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DEX2" CACHE STRING "Set C Compiler Flags" FORCE)
add_compile_options(-DEX2)

project ("test6")

# Add source to this project's executable.
add_executable (test6 "test6.cpp" )

target_compile_definitions(test6  
    PRIVATE EX3
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET test6 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
