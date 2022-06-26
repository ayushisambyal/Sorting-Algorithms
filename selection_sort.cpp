#include<bits/stdc++.h>
using namespace std;
// 22-06-2022
// Selection sort : find the smallest element & swap it with the element at the beginning of unsorted array

int main(){
    // input n = size of array
    int n;
    cin>> n;
    
    // input array 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    for(int i=0; i<n; i++){ // loop iterating from start to end
        for(int j=i+1; j<n; j++){ // inner loop to find the smallest element from the unsorted array
            if(arr[j]<arr[i]){ 
                // swapping the two, when the minimum element is found
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp; // a[i] fixated as min 
            }
        }
    }
    
    // printing output
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }

    return 0;
}