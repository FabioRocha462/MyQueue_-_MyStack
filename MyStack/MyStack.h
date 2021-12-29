#ifndef MYSTACK_H
#define MYSTACK_H
class MyStack{
public:
    // default constructor
   explicit MyStack (int initialsize=10); 

   //construsctor
   MyStack (const MyStack & rhs);

   //to destroy
   ~MyStack();

   //check if the battery is empty, 0 for false and 1 for True
   bool isEmpty() const;

   //check if the pile is full, 0 for false and 1 for True
   bool isFull()const;
   
   //return size
   int size()const;

   //reference to the top
   int top()const;

   //method for putting elements on the stack
    void push(int element);

    //method for remove elements on the stack
    int pop();

    //method for clear  the stack
    void clear();

    //method for print the stack
    void print();


private:
    int *tops;
    int *sizes;
    int Stack[];    
};
#endif