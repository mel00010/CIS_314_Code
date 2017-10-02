add_library(2-57_test INTERFACE)
target_sources(2-57_test
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}/2-57_test.cpp
)
target_link_libraries(2-57_test
	INTERFACE
		2-57_functions
)