#include<iostream>
using namespace std;





// factorial code by recursion


// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     int prev = factorial(n-1);
//     return n*prev;
// }
// int main(){
// int n;
// cin>>n;
// cout<<factorial(n)<<endl;
//     return 0;
// }





// INCREASING DECREASING



// int numb(int n){
// if (n==0)
// {
//     return 0;
// }

// cout<<n<<endl;
// numb(n-1);
// }
// int main(){
// int n;
// cin>>n;
// cout<<numb(n)<<endl;
//     return 0;
// }







int numb(int n){
if (n==0)
{
    return -1  ;
}

numb(n-1);
cout<<n<<endl;

}
int main(){
int n;
cin>>n;
cout<<numb(n)<<endl;
    return 0;
}





// FIRST OCCURANCE LAST OCC



// int firstocc(int arr[],int i, int key,int n){
    
//     if(i==n){
//         return -1;
//     }
    
//     if(arr[i]==key){ //base condition
//         return i;
//     }
//     return firstocc(arr,i+1,key,n);
// }
// int lastocc(int arr[],int i,int key,int n){
//     int
// }
// int main(){
//     int arr[]={4,2,1,5,6,8};
//     cout<<firstocc(arr,0,6,6)<<endl;
// }
