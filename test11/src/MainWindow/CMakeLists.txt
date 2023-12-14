project(MainWindow)

add_library(${PROJECT_NAME} 
	STATIC
	MainWindow.ui
	MainWindow.cpp
	MainWindow.h
	${UI_HEADERS}
)

add_library(lib::MainWindow ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC 
    ${PROJECT_SOURCE_DIR}
)

target_link_libraries(${PROJECT_NAME}
    lib::MainWindow
	Qt${QT_VERSION_MAJOR}::Core
	Qt${QT_VERSION_MAJOR}::Widgets

)