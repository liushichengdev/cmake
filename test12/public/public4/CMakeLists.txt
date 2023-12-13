# Set the project name
project (public4)

# Add a library with the above sources
add_library(${PROJECT_NAME} INTERFACE)
add_library(lib::public4 ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} 
    INTERFACE 
    ${PROJECT_SOURCE_DIR}
)
target_include_directories( ${PROJECT_NAME}  
    INTERFACE 
    ${public3_SOURCE_DIR} 
)
