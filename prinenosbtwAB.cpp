#include<iostream>
using namespace std;

int main(){
int a,b,i;
cin>>a>>b;
for(int j= a;j<b;j++){
   for(i = 2 ;i<b;i++){
       if(j%i==0){
           break;
       }
   }
   if(i==j){
       cout<<j<<endl;
   }
}
return 0;
} 
int main (){

int s;
cin>>s; 
    return 0;
}