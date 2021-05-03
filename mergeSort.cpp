#include <bits/stdc++.h>
using namespace std;

/* l is a starting index pointer.
r is end index pointer,



*/
void merge(int arr[], int l,int r, int mid)
{
   
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < n1; j++)
    {
        b[j] = arr[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        if(a[i] > b[j])

        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;
    }

    
}

void mergesort(int arr[], int l, int r)
{
    if(l<r){int mid = (l + r) / 2;
    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, r);
    merge(arr,l,r,mid);}
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
   
 
    
 
    mergesort(arr, 0, 5);
 
    cout << "\nSorted array is \n";
   for(int i=0;i<6;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}


 
















