#include <iostream>
using namespace std;


int main() {
    int t;
    cin>>t;

    while(t--){
int n,k;
cin>>n>>k;
string s;
cin>>s;
int flag =0;
int count =0;



for(int i=0;i<n;i++){
    if(s[i]=='*'){
count++;
    }
    else{
        if(count>=k){
            flag=1;
            break;
        }else{
            count=0;
        }
    }
    
}
   if(count>=k){
       flag=1;
   }
   if(flag==1){
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }
    }
}