g++ -std=gnu++11 -o basic_test ../_tests/_test_files/basic_test.cpp ../includes/array_functions/array_functions.cpp -Igoogletest/googletest/include -pthread -Lgoogletest/build/lib -lgtest
g++ -std=gnu++11 -o testA ../_tests/_test_files/testA.cpp ../includes/stub/stub.cpp -Igoogletest/googletest/include -pthread -Lgoogletest/build/lib -lgtest
g++ -std=gnu++11 -o testB ../_tests/_test_files/testB.cpp ../includes/stub/stub.cpp ../includes/array_functions/array_functions.cpp -Igoogletest/googletest/include -pthread -Lgoogletest/build/lib -lgtest
