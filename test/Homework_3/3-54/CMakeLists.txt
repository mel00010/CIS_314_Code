add_library(3-54_test INTERFACE)
target_sources(3-54_test
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}/3-54_test.cpp
)
target_link_libraries(3-54_test
	INTERFACE
		3-54_functions
)