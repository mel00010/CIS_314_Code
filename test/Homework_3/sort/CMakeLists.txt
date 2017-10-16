add_library(sort_test INTERFACE)
target_sources(sort_test
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}/sort_test.cpp
)
target_link_libraries(sort_test
	INTERFACE
		sort_functions
)