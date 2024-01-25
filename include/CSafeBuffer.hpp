#ifndef CSAFE_BUFFER
#define CSAFE_BUFFER

#include <vector>
#include <mutex>
#include <iostream>

using namespace std;

class CSafeBuffer{
    private:
        vector<int> shared_buf;
        mutex mut_buf;

    public:
        CSafeBuffer();
        ~CSafeBuffer();

        void add(int val);
        void add(int pos, int val);
        void del(int pos);
        void clear();
        void print();
        void print_elem(int pos);
        int get_size();
        bool is_empty();
        int get_num(int pos);
        void full_random(int buf_len);
};


#endif