#include<bits/stdc++.h>
using namespace std;
// 25-06-2022

// swap fxn
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// partition fxn to find the pivot element
int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;

    // l-1 <= i
    // j =< r
    for(int j=l; j<r; j++){
        if(arr[j]<pivot){ // comparing each element with pivot element
            i++;
            swap(arr,i,j); // swapping if in the wrong order
        }
    }
    swap(arr,i+1,r);
    return i+1; // index of pivot element
}


void quickSort(int arr[], int l, int r){
    if(l<r){
        int part = partition(arr, l, r);
        quickSort(arr, l, part-1);
        quickSort(arr, part+1, r);
    }
}

int main(){
    int n;
    cin>> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    quickSort(arr,0,4);
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    return 0;
}