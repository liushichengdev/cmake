# main.cpp


project(main)

find_package(QT NAMES Qt6 REQUIRED COMPONENTS Core Widgets Xml)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets Xml)
#set(CMAKE_VERBOSE_MAKEFILE ON)

message(STATUS "This is QT_VERSION_MAJOR :" ${QT_VERSION_MAJOR})
message(STATUS "KIT: " ${${KIT}_UIS})

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
	qt_add_executable(${PROJECT_NAME}
		MANUAL_FINALIZATION
		main.cpp
	)
endif()

target_include_directories(${PROJECT_NAME}
	PUBLIC
	${PROJECT_SOURCE_DIR}
)

target_link_libraries(${PROJECT_NAME} 
	PRIVATE 
	Qt${QT_VERSION_MAJOR}::Core
	Qt${QT_VERSION_MAJOR}::Widgets
	Qt${QT_VERSION_MAJOR}::Xml
	lib::MainWindow
	lib::XMLPraser
)

add_subdirectory(MainWindow)
add_subdirectory(XMLPraser)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(${PROJECT_NAME})
endif()