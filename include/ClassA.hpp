#ifndef CLASS_A
#define CLASS_A

#include <vector>
#include <iostream>
#include "CSafeBuffer.hpp"

using namespace std;

class ClassA{
    private:
        int f_id{0};
        CSafeBuffer *f_buf;

    public:
        ClassA(int id, CSafeBuffer *buf);
        ~ClassA();
        int get_id();
        int generate_num();
        bool try_add_num();
};

#endif
