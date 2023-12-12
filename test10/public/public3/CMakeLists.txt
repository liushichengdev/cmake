# Set the project name
project (public3)

# Add a library with the above sources
add_library(${PROJECT_NAME} INTERFACE)
add_library(lib::public3 ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    INTERFACE ${PROJECT_SOURCE_DIR}
)