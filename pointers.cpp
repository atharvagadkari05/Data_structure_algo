#include <iostream>
using namespace std;
int main(){

int a =10;
int *aptr = &a;
// ------> (&) this operator is 'address of' operator 
// ------> (*) this operaator is 'Dereference operator
cout<<"The address of a is "<<&a<<endl;
cout<<"The address of a is "<<aptr<<endl; // both cout are same


cout<<"the value of a is"<<endl;//derefrencing(*), it gives the value.





    return 0;
}
