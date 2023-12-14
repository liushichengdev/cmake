project(XMLPraser)

add_library(${PROJECT_NAME} 
	SHARED
	XMLPraser.cpp
	XMLPraser.h
)

add_library(lib::XMLPraser ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC 
    ${PROJECT_SOURCE_DIR}
)

target_link_libraries(${PROJECT_NAME}
    lib::XMLPraser
)