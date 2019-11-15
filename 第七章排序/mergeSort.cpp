#include<iostream>
using namespace std;

void merge(int* A, int low, int mid, int high){
    int* B = new int[high+1];
    for(int i=low;i<high+1;i++)
        B[i]=A[i];
    int i, j, k;
    for(i=low,j=mid+1,k=i;i<mid+1&&j<high+1;k++){
        if(B[i]<B[j]){
            A[k]=B[i++];
        }
        else{
            A[k]=B[j++]
        }
    }
    while(i<mid+1){
        A[k++]=B[i++];
    }
    while(j<high+1){
        A[k++]=B[j++];
    }
}

void mergeSort(int* A, int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, ,high);
        merge(A, low, mid, ,high);
    }
}