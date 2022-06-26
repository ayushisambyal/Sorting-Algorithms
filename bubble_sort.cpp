#include<bits/stdc++.h>
using namespace std;
// 22-06-2022
// Bubble sort: repeatedly sort two adjacent elements if they are in wrong order

int main(){
    // input n = size of array
    int n;
    cin>> n;
    
    // input array 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    int counter=0; // goes from 1 to n-1 & picks a[i]
    while(counter < n){
        for(int i=0; i<n-counter-1; i++){ // picks a[i] & a[i+1] for comparison
            if(arr[i] > arr[i+1]){ // comparing the two adj elements
                int temp = arr[i]; // swapping if in wrong order
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++; 
    }

    // printing output
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }

    return 0;
}