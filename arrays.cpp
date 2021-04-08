#include<iostream>
#include<climits>
using namespace std;

int main(){
int n;
int arr[n];
cin>>n;
int maxNo = INT_MIN;
int minNo= INT_MAX;

for(int i =0;i<n;i++){
    cin>>arr[i];
if(arr[i]>maxNo ){
    maxNo = arr[i];
}
if(arr[i]<minNo){
    minNo = arr[i];
}
// maxNo = max(arr[i],maxNo); this is short  way to write program
// minNo = min(arr[i],minNo);
}
cout<<maxNo<<" "<<minNo<<endl;
return 0;
}
