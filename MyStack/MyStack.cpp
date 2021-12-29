#include <iostream>
#include "MyStack.h"
using namespace std;

MyStack :: MyStack (int initialsize){
    sizes = new int(initialsize);
    tops = new int(-1);
}

MyStack :: MyStack(const MyStack & rhs){
    sizes = new int(*rhs.sizes);
    tops  = new int(-1);
}

MyStack :: ~MyStack(){
    delete sizes;
    delete tops;
}

bool MyStack :: isEmpty()const{
    if( *tops == -1){
        return true;
    }else{
        return false;
    }
}

bool MyStack :: isFull()const{
    if(*tops == *sizes-1){
        return true;
    }else{
        return false;
    }

}

int MyStack :: size()const{
     return *sizes;
}

int MyStack :: top()const{
    if(*tops> -1){
    return Stack[*tops];
    }else{
        return 0;
    }
}

void MyStack::push(int element){
    if(*tops < *sizes-1){
        *tops=*tops+1;
        Stack[*tops]=element;
    }else{
        cout<<"StackOverflow"<<endl;
    }
}
int MyStack ::pop(){
    int restoured_value;
    if(*tops >=0){
        restoured_value = Stack[*tops];
        *tops=*tops-1;
    }else{
        cout<<"StackUnderflow"<<endl;
    }
    return restoured_value;
}

void MyStack :: clear(){
    *tops= -1;
}

void MyStack :: print(){
//testing if list is empty does not print and will give Underflow
cout<<"--------------"<<endl;
    if(*tops  > -1){
        if(*tops == 0){
            cout<<Stack[*tops];
        }else{
            int i=0;
           while(i<= *tops){
               cout<<Stack[i]<<" ";
               //cout<<endl;
               i++;
           }
        }
        cout<<endl;
        cout<<"------------"<<endl;
    }else{
             cout<<"StackUnderflow"<<endl;
    }
}