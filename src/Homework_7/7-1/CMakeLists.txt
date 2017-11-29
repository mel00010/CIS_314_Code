# We need thread support
find_package (Threads REQUIRED)

# Download and unpack googletest at configure time
configure_file(GoogleBenchmark.cmake.in  ${CMAKE_BINARY_DIR}/benchmark-download/CMakeLists.txt)

execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/benchmark-download )
if(result)
  message(FATAL_ERROR "CMake step for benchmark failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/benchmark-download )
if(result)
  message(FATAL_ERROR "Build step for benchmark failed: ${result}")
endif()


# Add benchmark directly to our build. 
add_subdirectory(${CMAKE_BINARY_DIR}/benchmark-src
                 ${CMAKE_BINARY_DIR}/benchmark-build)

add_executable(benchmarks "")
target_sources(benchmarks
	PRIVATE
		benchmarks.cpp
		7-1.c
		7-1.h
)

target_link_libraries(benchmarks
	benchmark
	gtest
	pthread
)

add_executable(7-1 "")
target_sources(7-1 
	PRIVATE
		main.c
		7-1.c
		7-1.h
)
include(FormatForDist)
packForDist(Assignment7
	7-1.h
	7-1.c
	main.c
)
