add_library(2-64_test INTERFACE)
target_sources(2-64_test
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}/2-64_test.cpp
)
target_link_libraries(2-64_test
	INTERFACE
		2-64_functions
)