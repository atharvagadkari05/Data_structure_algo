#include<iostream>
using namespace std;
int main(){

int arr[] = {10,20,30};
int *ptr = arr;
// cout<<ptr<<endl; output-----> 0x1210x
// cout<<*ptr<<endl; output-----> 10
 for(int i=0;i<3;i++)
 {
     cout<<*ptr<<endl;
     ptr++;
 }



    return 0;
}