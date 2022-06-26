#include<bits/stdc++.h>
using namespace std;

// 25-06-2022
// Count sort:
// i. find the count of every distinct element
// ii.calculate the position of each element in sorted array

void countSort(int arr[], int n){
    int k = arr[0];
    // storing k = maximum element 
    for(int i=0; i<n; i++){
        k = max(k, arr[i]);
    }

    int count[10]={0};
    // to store the count of every element of the array
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    // modifying the count array to store 1+address of the respective element
    for(int i=1; i<=k; i++){ 
        count[i] += count[i-1];
    }

    //creating a temp array to store the sorted array
    int temp[n];
    for(int i=n-1; i>=0; i--){
        temp[--count[arr[i]]] = arr[i];
    }

    // tarnsferring the sorted array to the given array
    for(int i=0; i<n; i++){
        arr[i]=temp[i];
    }
}

int main(){
    
    int n;
    cin>> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    countSort(arr, n);

    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }

    return 0;
}