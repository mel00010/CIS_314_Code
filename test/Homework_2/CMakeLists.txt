add_library(homework_2_test INTERFACE)

target_link_libraries(homework_2_test
	INTERFACE
		2-71_test
		2-72_test
		2-83_test
)

add_subdirectory(2-71)
add_subdirectory(2-72)
add_subdirectory(2-83)