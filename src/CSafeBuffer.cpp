#include "../include/CSafeBuffer.hpp"


CSafeBuffer::CSafeBuffer(){

}

CSafeBuffer::~CSafeBuffer(){
    
}

void CSafeBuffer::add(int val){
    lock_guard<mutex> lock(this->mut_buf);

    this->shared_buf.push_back(val);
}

void CSafeBuffer::add(int pos, int val){
    auto iter = this->shared_buf.cbegin();

    lock_guard<mutex> lock(this->mut_buf);

    this->shared_buf.emplace(iter+pos, val);
}

void CSafeBuffer::del(int pos){
    auto iter = this->shared_buf.cbegin();

    lock_guard<mutex> lock(this->mut_buf);

    this->shared_buf.erase(iter+pos);
}

void CSafeBuffer::clear(){
    auto iter_beg = this->shared_buf.cbegin();
    auto iter_end = this->shared_buf.cend();

    lock_guard<mutex> lock(this->mut_buf);

    this->shared_buf.erase(iter_beg, iter_end);
}

void CSafeBuffer::print(){
    for(int elem : this->shared_buf){
        cout<<elem<<" ";
    }
    cout<<"\n";
}

void CSafeBuffer::print_elem(int pos){
    cout<<this->shared_buf[pos]<<endl;
}

int CSafeBuffer::get_size(){
    return this->shared_buf.size();
}

bool CSafeBuffer::is_empty(){
    return this->shared_buf.empty();
}

int CSafeBuffer::get_num(int pos){
    return this->shared_buf[pos];
}

void CSafeBuffer::full_random(int buf_len){
    for(auto i{0}; i<buf_len; ++i){
        this->add(rand()%4096+1);
    }
}

