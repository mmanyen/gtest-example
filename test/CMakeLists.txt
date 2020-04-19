add_executable(exampleApp_tst test_hello.cpp main.cpp)

add_test(NAME exampleApp_tst COMMAND exampleApp_tst)

target_link_libraries(exampleApp_tst PUBLIC exampleApp_lib gtest)