add_library(2-60_test INTERFACE)
target_sources(2-60_test
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}/2-60_test.cpp
)
target_link_libraries(2-60_test
	INTERFACE
		2-60_functions
)