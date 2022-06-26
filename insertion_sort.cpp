#include<bits/stdc++.h>
using namespace std;
// 23-06-2022
// Insertion sort: insert an element from unsorted array to its correct position in sorted array


int main(){
    // input n = size of array
    int n;
    cin>> n;
    
    // input array 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    // assuming that the 0th element is already sorted => starting from 1
    for(int i=1; i<n; i++){ 
        // picking up the 1st element
        int current = arr[i]; 
        // picking up the 0th element
        int j = i-1; 
        while( arr[j]> arr[i] && j>=0){ //wrong order
            arr[j+1] = arr[i-1]; //
            j--;
        }
        // updating variable
        arr[j+1] = current; 
    }

    // printing output
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }

    return 0;
}