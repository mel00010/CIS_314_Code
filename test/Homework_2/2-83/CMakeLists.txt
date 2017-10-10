add_library(2-83_test INTERFACE)
target_sources(2-83_test
	INTERFACE
		${CMAKE_CURRENT_SOURCE_DIR}/2-83_test.cpp
)
target_link_libraries(2-83_test
	INTERFACE
		2-83_functions
)