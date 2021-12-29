#include<iostream>
#include "MyQueue.h"
using namespace std;

int main(){
    int control = -1, element;

    //test method MyStack default
    cout<<"HOME"<<endl;
    MyQueue queue;
    while(control != 0){
        cout<<"1 isEmpty"<<endl;
        cout<<"2 isFull"<<endl;
        cout<<"3 size"<<endl;
        cout<<"4 front"<<endl;
        cout<<"5 back"<<endl;
        cout<<"6 enqueue"<<endl;
        cout<<"7 dequeue"<<endl;
        cout<<"8 clear"<<endl;
        cout<<"9 print"<<endl;
        cout<<"0 exit"<<endl;
        cin>>control;
        switch(control){
            case 1:
                cout<<"0 for false and 1 for true:"<<queue.isEmpty()<<endl;
            break;

            case 2:
                cout<<"0 for false and 1 for true:"<<queue.isFull()<<endl;
            break;

            case 3:
                cout<<"Queue Size"<<queue.size()<<endl;
            break;

            case 4:
                cout<<"back of the Queue"<<queue.back()<<endl;
            break;

            case 5:
                cout<<"front of the Queue"<<queue.front()<<endl;
            break;    

            case 6:
                cout<<"Element ?"<<endl;
                cin>>element;
                queue.enqueue(element);
            break;

            case 7:
                queue.dequeue();
            break;

            case 8:
                queue.clear();
                cout<<"Clear"<<endl;
            break;

            case 9:
                queue.print();
            break;

            case 0:
                cout<<"EXIT"<<endl;
            break;

            default:
                cout<<"There is no such option"<<endl;
            break;

        }
    }
    //test method MyQueue with size

    control = -1;
    int size;
    cout<<"Queue Size?"<<endl;
    cin>>size;
    MyQueue queue1(size);
    while(control != 0){
        cout<<"1 isEmpty"<<endl;
        cout<<"2 isFull"<<endl;
        cout<<"3 size"<<endl;
        cout<<"4 front"<<endl;
        cout<<"5 back"<<endl;
        cout<<"6 enqueue"<<endl;
        cout<<"7 dequeue"<<endl;
        cout<<"8 clear"<<endl;
        cout<<"9 print"<<endl;
        cout<<"0 exit"<<endl;
        cin>>control;
        switch(control){
            case 1:
                cout<<"0 for false and 1 for true:"<<queue1.isEmpty()<<endl;
            break;

            case 2:
                cout<<"0 for false and 1 for true: "<<queue1.isFull()<<endl;
            break;

            case 3:
                cout<<"Queue Size: "<<queue1.size()<<endl;
            break;

            case 4:
                cout<<"back of the Queue"<<queue1.back()<<endl;
            break;

            case 5:
                cout<<"front of the Queue"<<queue1.front()<<endl;
            break;    

            case 6:
                cout<<"Element ?"<<endl;
                cin>>element;
                queue1.enqueue(element);
            break;

            case 7:
                queue1.dequeue();
            break;

            case 8:
                queue1.clear();
                cout<<"Clear"<<endl;
            break;

            case 9:
                queue1.print();
            break;

            case 0:
                cout<<"EXIT"<<endl;
            break;

            default:
                cout<<"There is no such option"<<endl;
            break;

        }
    }
}