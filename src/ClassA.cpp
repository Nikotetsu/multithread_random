#include "../include/ClassA.hpp"

ClassA::ClassA(int id, CSafeBuffer *buf){
    this->f_id = id;
    this->f_buf = buf;
}

ClassA::~ClassA(){

}

int ClassA::generate_num(){
    return rand()%4096+1;
}

bool ClassA::try_add_num(){
    int x{this->f_id};
    int buf_zero{this->f_buf->get_num(0)};
    
    cout<<"object_id="<<x<<" buffer(0)="<<buf_zero<<endl;

    if(x==buf_zero){
        this->f_buf->add(x);
        return true;
    }
    else{
        return false;
    }

}

