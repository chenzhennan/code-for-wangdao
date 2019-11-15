#include<iostream>
using namespace std;

void buildMaxHeap(int* A, int len){
    for(int i = len/2;i>0;i--){
        AdjustDown(A, i, len)
    }
}

void AdjustDown(int* A, int k, int len){
    int temp = A[k];
    for(int i= 2k;i<len;i*=2){
        if(A[i]<A[i+1])
            i++;
        if(temp<A[i]){
            A[k]=A[i];
            k=i;
        }
        else
            break;
        
    }
    A[k]=temp;
}

void AdjustUp(int* A, int k){
    int temp = A[k];
    int i=k/2;
    while(i>0&&A[i]<temp){
        A[k]=A[i];
        k=i;
        i=i/2;
    }
    A[k]=temp;
}

void HeapSort(int* A, int len){
    for(int i=len;i>0;i--){
        int temp = A[1];
        A[1]=A[len];
        A[len]=temp;
        AdjustDown(A, 1, len-1);
    }
}