#include <iostream>
using namespace std;
#define n 100         //  we have predefined n

class stack{
    int top;
    int* arr;
    
    public:

    stack(){
    arr = new int[n] ;
    top=-1;

    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow";
            return ;
        }
        top++;
        arr[top]=x;

    }
    void pop(){
        if(top==-1){
            cout<<"Empty Stack";
        }                                  
        top--;  // we won't remove elemnent rather we just decrement the 'top'

    }
};

int main(){
 stack st;          // implementation of stack
 st.push(1);
 st.pop();   
}