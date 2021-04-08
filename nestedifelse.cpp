#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a>b){
    if(a>c){
        cout<<"a is greatest" << a <<endl;
    }else{
        cout<<"c is greatest"<<c <<endl;

    }
}else{
    if(b>c){
        cout<<"b is greatest"<<b <<endl;

    }else{
        cout<<"c is greatest"<< c <<endl;
    }
}



    return 0;
}