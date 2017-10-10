add_library(2-71_test INTERFACE)
target_sources(2-71_test
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}/2-71_test.cpp
)
target_link_libraries(2-71_test
	INTERFACE
		2-71_functions
)