#ifndef MY_ASSERT_H
#define MY_ASSERT_H
#include <iostream>

using std::cout;
using std::endl;

#define ASSERT(expr, msg) if(!(expr)) cout << "[FAIL] " << msg << endl; else cout << "[PASS] " << msg << endl;
#endif