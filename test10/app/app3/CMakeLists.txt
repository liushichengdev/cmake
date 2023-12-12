# Set the project name
project (app3)
# Add a library with the above sources
add_library(${PROJECT_NAME} app3.cpp)
add_library(lib::app3 ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}
    	   ${test10_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME}
    ${test10_SOURCE_DIR}/lib/static_library.lib
)