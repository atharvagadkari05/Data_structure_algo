#include<iostream>
using namespace std;
void primeSieve(int n){
    int arr[100]={0};
    int j;
    for(int i=2;i<=n;i++){
        if(arr[i]==0){
            for(j=i*i;j<=n;j+=i);{
                 arr[j]=1;

            }
        }
    }
 for(int i=2;i<n;i++){
     if(arr[i]==0){
         cout<<i<<" ";
     }
 }
}

int main(){
int n;
cin>>n;
primeSieve(n);
return 0;
}