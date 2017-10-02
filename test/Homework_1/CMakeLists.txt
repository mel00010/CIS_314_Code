add_library(homework_1_test INTERFACE)

target_link_libraries(homework_1_test
	INTERFACE
		2-57_test
		2-60_test
		2-64_test
		2-68_test
)

add_subdirectory(2-57)
add_subdirectory(2-60)
add_subdirectory(2-64)
add_subdirectory(2-68)