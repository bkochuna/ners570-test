set(TESTNAME "testSparseMatrix")
include_directories(${PROJECT_SOURCE_DIR}/src)
add_executable(${TESTNAME}
               ${TESTNAME}.cpp
              )
target_link_libraries(${TESTNAME}
                      SpMV
                     )
add_test(NAME SpMV_${TESTNAME}
         COMMAND ${TESTNAME}
        )
