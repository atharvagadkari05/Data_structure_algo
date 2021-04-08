#include<iostream>
using namespace std;

int add(int a,int b)//THIS IS DECLARATION OF FUNCTION
{int sum= a+b;  // TYPE FUNCTION-NAME(TYPE-ARGUEMENTS)
return sum;
}
int main(){
int x,y;
cin>>x>>y;
cout<<add(x,y)<<endl; // THIS 'ADD' MENTIONED HERE IS KNOWN AS CALLING OF FUNCTION 
return 0;


}
