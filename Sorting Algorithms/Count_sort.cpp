#include<iostream>
using namespace std;

void countSort(int arr[],int n){

// Max element
int k = arr[0];
for (int i = 0; i <n; i++)
{
    k = max(k,arr[i]);
}

// Position array
int position[20] = {0};
for(int i=0;i<n;i++){
    position[arr[i]]++;
}

// Updation of position array
for(int i=1;i<=k;i++){
    position[i] += position[i-1];
}

// Output Array
int result[n];
for(int i = n-1;i>=0;i--){
     result[--position[arr[i]]] = arr[i];
}
for(int i =0;i<n;i++){
    cout<<result[i]<< " ";
}
}


int main(){
    int arr[]={1,4,2,5,2,5,8,3};
countSort(arr,8);
    // for(int i=0;i<8;i++){
    //     cout<<arr[i]<<" ";

    // }
return 0;
}