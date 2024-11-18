# file(GLOB_RECURSE SRC_FILES *.cpp)

# foreach(SRC_FILE IN LISTS SRC_FILES)
#   get_filename_component(EXEC_NAME ${SRC_FILE} NAME_WE)

#   add_executable(${EXEC_NAME} ${SRC_FILE})

#   message(STATUS "Executable '${EXEC_NAME}' created from '${SRC_FILE}'")
# endforeach()


# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

add_executable(test_vec1 test_vec1.cpp)
add_test(NAME "vec1" COMMAND "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/Debug/test_vec1")

add_executable(test_vec3 main.cpp)
add_test(NAME "vec3" COMMAND "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/Debug/test_vec3")
