#include<iostream>
#include "MyQueue.h"
using namespace std;

MyQueue :: MyQueue(int initialsize){
     sizes = new int(initialsize);
     f = new int(-1);
     r = new int (-1);
}

MyQueue :: MyQueue(const MyQueue & rhs){
       sizes = new int(*rhs.sizes);
       f     = new int(-1);
       r     = new int (-1);
}

MyQueue :: ~MyQueue(){
    delete sizes;
    delete f;
    delete r;
}

bool MyQueue :: isEmpty()const{
    if(*f ==-1 && *r==-1){
        return true;
    }else{
        return false;
    }
}

bool MyQueue :: isFull() const{
    if((*f==0 && *r==*sizes-1)||(*f-*r==1)){
        return true;
    }else{
        return false;
    }
}

int MyQueue :: size()const{
    return *sizes;
}

int MyQueue :: front()const{
    if(*f>-1){
    return Queue[*f];
    }else{
        cout<<"QueueUnderflow"<<endl;
        return 0;
    }
}

int MyQueue :: back()const{
    if(*r>=0){
        return Queue[*r];
    }else{
        cout<<"QueueUnderflow"<<endl;
        return 0;
    }
}

void MyQueue :: enqueue(int element){
    if((*r==*sizes-1)&&(*f!=0)){
             *r=-1;
            }
    if(*r<*sizes-1 && *f - *r != 1){
         *r=*r+1;
        Queue[*r]=element;
        if(*f==-1){
            *f=0;
        }
    }else{
        cout<<"QueueOverflow"<<endl;
    }
}

int MyQueue :: dequeue(){
    int restoured_value;
    if((*f==*sizes-1)&&(*r!=0)){
        *f=-1;
    }
    
    if(*f!=-1 && *r!=-1){
      restoured_value = Queue[*f];
      *f=*f+1;
      if(*f>*r){
       *r=-1;
       *f=-1;
    }
      cout<<*f<<endl;
    }else{
        cout<<"QueueUnderflow"<<endl;
    }
    return restoured_value;
}

void MyQueue :: clear(){
    *r=-1;
    *f=-1;
}

void MyQueue :: print(){
    if(*r!=-1 && *f!=-1){
                if(*r>*f){
                    for(int i=*f;i<=*r;i++){
                        cout<<Queue[i]<<" ";
                    }
                    cout<<endl;
                }else{
                            if(*r==*f){
                            cout<<Queue[*r]<<endl;
                            }else{
                            for(int i=0;i<=*r;i++){
                                cout<<Queue[i]<<" ";
                            }
                            for(int i=*f;i<=*sizes-1;i++){
                                cout<<Queue[i]<<" ";
                            }
                            cout<<endl;
                         }
                  }
          }else{
              cout<<"QueueUnderflow"<<endl;
          }
}

