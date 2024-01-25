#include "../include/main.hpp"

int main(int argc, char *argv[]){
    
    CSafeBuffer buffer;
    ClassA obj(1000, &buffer);

    if(buffer.is_empty()){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
        return 0;
    }

    buffer.full_random(30);

    buffer.print();

    if(obj.try_add_num()){
        cout<<"Added successfuly"<<endl;
        buffer.del(0);
    }
    else{
        cout<<"Error occured. Number did not add"<<endl;
        buffer.del(0);
        buffer.add(0, rand()%4096+1);
    }

    buffer.print();
    
    cout<<"Runtime = "<<(float)clock()/1000<<" ms"<<endl;
    //system("pause");
    return 0;
}