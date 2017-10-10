add_library(2-72_test INTERFACE)
target_sources(2-72_test
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}/2-72_test.cpp
)
target_link_libraries(2-72_test
	INTERFACE
		2-72_functions
)