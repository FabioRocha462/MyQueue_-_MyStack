#ifndef MYQUEUE_H
#define MYQUEUE_H

class MyQueue{
public:
    // default constructor
   explicit MyQueue (int initialsize=10); 

   //construsctor
   MyQueue (const MyQueue & rhs);

   //to destroy
   ~MyQueue();

   //check if the Queue is empty, 0 for false and 1 for True
   bool isEmpty() const;

   //check if the Queue is full, 0 for false and 1 for True
   bool isFull()const;

   //return size
   int size()const;
   
   //returns the front element 
   int front()const;
   
   //returns the back element
   int back()const;

   //enqueue the element to the queue
   void enqueue(int element);
   
   //dequeue the element in the queue
   int dequeue();
   
   //clear queue
   void clear();

   //print elements
   void print();


private:
    int *f;
    int *r;
    int *sizes;
    int Queue[];
};
#endif