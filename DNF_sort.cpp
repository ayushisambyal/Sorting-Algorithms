#include<bits/stdc++.h>
using namespace std;
// 25-06-2022
// DNF Algo: to sort an array with 0, 1 & 2 only.

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void DNFSort(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr,mid,high);
            high--;
        }
    }
} 

int main(){
    
    int arr[]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    DNFSort(arr, n);

    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }

    return 0;
}