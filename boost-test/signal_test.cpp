//
// Created by fellowlong on 2018/3/2.
//

#include <iostream>
#include <boost/signals2.hpp>
#include "signal_test.h"

using namespace std;

void slot1() {
    cout << "slot1" << endl;
}

void slot2() {
    cout << "slot2" << endl;
}

int test_signal() {
    boost::signals2::signal<void()> sig;
    sig.connect(&slot1);
    sig.connect(&slot2);
    sig();
    return 0;
}