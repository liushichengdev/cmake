# main.cpp


project(main)

find_package(QT NAMES Qt6 REQUIRED COMPONENTS Core Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets)

qt_add_executable(${PROJECT_NAME}
	main.cpp
)

target_include_directories(${PROJECT_NAME}
	PUBLIC
	${PROJECT_SOURCE_DIR}
)

target_link_libraries(${PROJECT_NAME} 
	PRIVATE 
	Qt${QT_VERSION_MAJOR}::Core
	Qt${QT_VERSION_MAJOR}::Widgets
	lib::MainWindow
)

add_subdirectory(MainWindow)