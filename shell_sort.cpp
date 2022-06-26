#include<bits/stdc++.h>
using namespace std;
// 26-06-2022
// Shell sort: similar to select sort, but with larger gap

int shellsort(int arr[], int n){

    // start with a big gap & then keep reducing the gap
    for(int gap = n/2; gap>0; gap /= 2){
        
        for(int i=gap; i<n; i+=1){
            // add a[i] to the elements that have been gap sorted
            // save a[i] in temp and make a hole at position i
            int temp = arr[i];

            // shift earlier gap-sorted elements up until the correct 
            // location for a[i] is found
            int j;
            for(j=i; j>=gap && arr[j-gap]>temp; j-= gap){
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    return 0;
}

int main(){
    int arr[] = {12, 34, 54, 2, 3};
    int n = 5;

    shellsort(arr, n);

    // printing the sorted array
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}