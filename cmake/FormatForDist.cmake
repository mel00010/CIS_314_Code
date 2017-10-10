function(createDistTarget)
	add_custom_target(pack_all)
	add_custom_target(dist DEPENDS pack_all)
	add_custom_target(test_dist 
		DEPENDS dist
		COMMENT "Testing all")
endfunction()

function(packForDist package_name header_file source_file main_file)
	get_filename_component(base_file_name ${header_file} NAME_WE)
	add_custom_target(${base_file_name}_packed.c
		COMMAND 
			python3 ${PROJECT_SOURCE_DIR}/scripts/pack_source.py 
					${CMAKE_CURRENT_SOURCE_DIR}/${header_file}
					${CMAKE_CURRENT_SOURCE_DIR}/${source_file}
					${CMAKE_CURRENT_SOURCE_DIR}/${main_file}
					${CMAKE_BINARY_DIR}/dist/${package_name}/${base_file_name}.c
		SOURCES 
			${CMAKE_CURRENT_SOURCE_DIR}/${header_file}
			${CMAKE_CURRENT_SOURCE_DIR}/${source_file}
			${CMAKE_CURRENT_SOURCE_DIR}/${main_file}
		COMMENT
			"Packing ${header_file}, ${source_file}, and ${main_file} into ${base_file_name}.c in dist/${package_name}"	
	)

	if(TARGET pack_${package_name})
		add_dependencies(pack_${package_name} ${base_file_name}_packed.c)
		file(APPEND ${CMAKE_BINARY_DIR}/dist/${package_name}/files.txt ${base_file_name}.c\n)
	else()
		file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/dist/${package_name})
		add_custom_target(pack_${package_name}
			COMMAND
		    	${CMAKE_COMMAND} -E tar "cfv" MelMcCalla${package_name}.zip --format=zip --files-from=files.txt >/dev/null
	    	WORKING_DIRECTORY
	    		${CMAKE_BINARY_DIR}/dist/${package_name}
		    COMMENT
		    	"Generating MelMcCalla${package_name}.zip"
	    )
		add_dependencies(pack_${package_name} ${base_file_name}_packed.c)
		file(WRITE ${CMAKE_BINARY_DIR}/dist/${package_name}/files.txt ${base_file_name}.c\n)
	endif()
	if(NOT TARGET pack_${package_name})
		add_custom_target(test_pack_${package_name}
			COMMAND
	  		  	python3 ${PROJECT_SOURCE_DIR}/scripts/test_pack.py 
	    				${CMAKE_BINARY_DIR}/dist/${package_name}/MelMcCalla${package_name}.zip
	    	WORKING_DIRECTORY 
	    		${CMAKE_BINARY_DIR}/dist/${package_name}
    	)
    
	    add_dependencies(test_pack_all test_pack_${package_name})
    endif()
	if(TARGET pack_all)
		add_dependencies(pack_all pack_${package_name})
	else()
		createDistTarget()
		add_dependencies(pack_all pack_${package_name})
	endif()
	
endfunction()

function(add_file_to_package package_name file_name)
	if(TARGET pack_${package_name})
		file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/${file_name} DESTINATION ${CMAKE_BINARY_DIR}/dist/${package_name}/file_name)
		file(APPEND ${CMAKE_BINARY_DIR}/dist/${package_name}/files.txt ${file_name}\n)
	else()
		file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/dist/${package_name})
		add_custom_target(pack_${package_name}
			COMMAND
		    	${CMAKE_COMMAND} -E tar "cfv" MelMcCalla${package_name}.zip --format=zip --files-from=files.txt
		    	WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/dist/${package_name}
	    	COMMENT
		    	"Generating MelMcCalla${package_name}.zip"
	    )
	    file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/${file_name} DESTINATION ${CMAKE_BINARY_DIR}/dist/${package_name}/file_name)
		file(WRITE ${CMAKE_BINARY_DIR}/dist/${package_name}/files.txt ${file_name}\n)
	endif()
	if(TARGET pack_all)
		add_dependencies(pack_all pack_${package_name})
	else()
		createDistTarget()
		add_dependencies(pack_all pack_${package_name})
	endif()
endfunction()