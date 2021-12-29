#include<iostream>
#include "MyStack.h"
using namespace std;

int main(){
    cout<<"HOME"<<endl;
    int control = -1,element;
    //test method MyStack default
    MyStack stack;
    while(control != 0){
        cout<<"1 isEmpty"<<endl;
        cout<<"2 isFull"<<endl;
        cout<<"3 size"<<endl;
        cout<<"4 top"<<endl;
        cout<<"5 push"<<endl;
        cout<<"6 pop"<<endl;
        cout<<"7 clear"<<endl;
        cout<<"8 print"<<endl;
        cout<<"0 exit"<<endl;
        cin>>control;

        switch(control){
            case 1:
                cout<<"0 for false and 1 for true: "<<stack.isEmpty()<<endl;
            break;

            case 2:
                cout<<"0 for false and 1 for true: "<<stack.isFull()<<endl;
            break;

            case 3:
               cout<<"size in the Stack "<< stack.size()<<endl;
            break;    

            case 4:
                cout<<"last element in the Stack: "<<stack.top()<<endl;
            break;

            case 5:
               cout<<"Element ?: " <<endl;
               cin>>element;
               stack.push(element);
            break;

            case 6:
                stack.pop();
                cout<<"remove element"<<endl;
            break;

            case 7:
                stack.clear();
                cout<<"Clear Stack"<<endl;
            break;

            case 8:
                stack.print();
            break;

            case 0:
                cout<<"Exit"<<endl;
            break;

            default:
                cout<<"There is no such option"<<endl;
            break;
        }
    }
    control =-1;
     //test method MyStack with size

     int size;
     
     cout<<"stack size?"<<endl;
     cin>>size;
     MyStack stack1(size);
    while(control != 0){
        cout<<"1 isEmpty"<<endl;
        cout<<"2 isFull"<<endl;
        cout<<"3 size"<<endl;
        cout<<"4 top"<<endl;
        cout<<"5 push"<<endl;
        cout<<"6 pop"<<endl;
        cout<<"7 clear"<<endl;
        cout<<"8 print"<<endl;
        cout<<"0 exit"<<endl;
        cin>>control;

        switch(control){
            case 1:
                cout<<"0 for false and 1 for true: "<<stack1.isEmpty()<<endl;
            break;

            case 2:
                cout<<"0 for false and 1 for true: "<<stack1.isFull()<<endl;
            break;

            case 3:
               cout<<"size in the Stack "<< stack1.size()<<endl;
            break;    

            case 4:
                cout<<"last element in the Stack: "<<stack1.top()<<endl;
            break;

            case 5:
               cout<<"Digite o Elemento: " <<endl;
               cin>>element;
               stack1.push(element);
            break;

            case 6:
                stack1.pop();
                cout<<"remove element"<<endl;
            break;

            case 7:
                stack1.clear();
                cout<<"Clear Stack"<<endl;
            break;

            case 8:
                stack1.print();
            break;

            case 0:
                cout<<"Exit"<<endl;
            break;

            default:
                cout<<"There is no such option"<<endl;
            break;
        }
    }
}