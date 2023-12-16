project(XMLPraser)

add_library(${PROJECT_NAME} 
	STATIC
	XMLPraser.cpp
	XMLPraser.h
	Node.h
)

add_library(lib::XMLPraser ALIAS ${PROJECT_NAME})

#message(STATUS "PROJECT_SOURCE_DIR: " ${PROJECT_SOURCE_DIR})

target_include_directories( ${PROJECT_NAME}
    PUBLIC 
    ${PROJECT_SOURCE_DIR}
)


target_link_libraries(${PROJECT_NAME}
	#LINK_INTERFACE_LIBRARIES
	PUBLIC
	lib::XMLPraser
	Qt${QT_VERSION_MAJOR}::Core
	Qt${QT_VERSION_MAJOR}::Xml
)