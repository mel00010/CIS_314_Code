add_library(homework_3_test INTERFACE)

target_link_libraries(homework_3_test
	INTERFACE
		3-54_test
		sort_test
)

add_subdirectory(3-54)
add_subdirectory(sort)
