//
// Created by fellowlong on 2018/3/2.
//

#include "bind_test.h"

#include <iostream>
#include <boost/bind.hpp>
#include <vector>

using namespace std;

int f(int a, int b) {
    return a + b;
}

int g(int a, int b, int c) {
    return a + b + c;
}

struct P {
    int x, y;
    P(int a = 9, int b = 9) : x(a), y(b){};
    void print() {
        cout << "x:" << x << "y:" << y << endl;
    }
};


int test_bind() {
    int x = 1, y = 2, z = 3;
    cout << boost::bind(f, x, y)() << endl;
    cout << boost::bind(g, _1, _2, _3)(x, y, z) << endl;
    cout << boost::bind(g, x, _2, x)(x, y, z) << endl;// g(x, y, x), 占位符表示的是实际传入的第几个参数

    vector<P> v(3);
    for_each(v.begin(), v.end(), boost::bind(&P::print, _1)); // print: P.x , P.y，当引用成员函数时，占位符第一个总表示对象实例

    return 0;
}
