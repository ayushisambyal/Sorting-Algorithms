#include<bits/stdc++.h>
using namespace std;
// 23-06-2022
// Merge sort : 
// Based on divide & conquer algorithm
// keep diving the array from mid, until only 2 element are left
// sort the 2 & keep merging back in the right order, element by element


// Merge fxn: to merge 2 sorted arrays while comparing their elements simultaneously
void merge(int arr[], int l, int mid, int r){
    int n1 = mid -l +1;
    int n2 = r - mid;

    // temp arrays
    int a[n1];
    int b[n2];

    // a = sorted first half of arr
    for(int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    // b = sorted second half of arr
    for(int i=0; i<n2; i++){
        a[i] = arr[mid+l+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++; i++;
        }
        else{
            arr[k]=b[j];
            k++; j++;
        }
    }

    // if i is still < n1 & j = n2
    while(i<n1){
        arr[k]=a[i];
        k++; i++;
    }
    // if j is still < n2 & i = n1
    while(j<n2){
        arr[k]=b[j];
        k++; j++;
    }
}

void mergeSort(int arr[], int l, int r){
    // 0<= l <=mid; mid+1<= r <= last
    // if l = r => last element
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }
}

int main(){
    // input n = size of array
    int n;
    cin>> n;
    
    // input array 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;
    return 0;
}