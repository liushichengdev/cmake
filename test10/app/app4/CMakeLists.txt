# Set the project name
project (app4)
# Add a library with the above sources
add_library(${PROJECT_NAME} SHARED app4.cpp)
add_library(lib::app4 ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC 
    ${PROJECT_SOURCE_DIR}
)

target_link_libraries(${PROJECT_NAME}
    lib::public4
)