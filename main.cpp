#include <iostream>

#include <boost-test/signal_test.h>
#include <boost-test/bind_test.h>

int main() {
    std::cout << "Hello, World!" << std::endl;
    test_signal();
    test_bind();
    return 0;
}