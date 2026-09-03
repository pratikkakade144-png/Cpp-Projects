#include <iostream>
using namespace std;

#define Max 5

class Stack
{
public:
    int A[Max];
    int top;

    Stack()
    {
      top =-1;
    }

    void push(int value)
    {
        if(top == Max-1)
        {
         cout<<"Stack is overflow"<<endl;
        }
        else
        {
         top++;
         A[top] =value;
         cout<<value<<"Value is pushed into Stack"<<endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
          cout <<"Stack is underflow"<< endl;
        }
        else
        {
          cout <<A[top] <<"is popped from stack"<<endl;
          top--;
        }
    }
    void peak()
    {
      if(top==-1)
      cout<<" no top element "<<endl;
      else
      {
        cout<<A[top]<<"it is top element"<<endl; 
      }
    }


    void display()
    {
        if (top == -1)
        {
          cout <<"Stack is empty"<< endl;
        }
        else
        {
          cout<<"Stack elements are:"<< endl;

            for (int i = top; i >= 0; i--)
            {
              cout <<A[i]<<endl;
            }
        }
    }
};

int main()
{
    Stack s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    s1.pop();           

    s1.display();

    return 0;
}
