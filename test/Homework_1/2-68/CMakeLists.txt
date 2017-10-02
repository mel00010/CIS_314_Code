add_library(2-68_test INTERFACE)
target_sources(2-68_test
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}/2-68_test.cpp
)
target_link_libraries(2-68_test
	INTERFACE
		2-68_functions
)