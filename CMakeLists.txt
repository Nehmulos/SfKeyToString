cmake_minimum_required (VERSION 2.8)

project(N0Strain)

if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-std=gnu++0x")      ## C++0x
else()
	set(CMAKE_CXX_FLAGS "-std=c++0x")        ## C++0x
endif()
    
set (CMAKE_BUILD_TYPE DEBUG)
include_directories(src)

#
# Loop over all files in the folders and add all cpp files to ${sourceFiles}
#
set (folders
			
			#src
			#add one folder per line
			)

foreach (folder ${folders})

	# search source files in this folder
	file (GLOB files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "${folder}/*.cpp")
	file (GLOB headers RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "${folder}/*.h")

	list (APPEND sourceFiles ${files} )
	list (APPEND installHeaders ${headers} )
	
endforeach(folder)

# build tests
add_executable("tests" Tests.cpp SfKeyToString.cpp)
target_link_libraries("tests" sfml-window)