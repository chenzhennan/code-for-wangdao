#include<iostream>
using namespace std;

int binarySearch(int* A, int key, int len){
    int low=0, high=len-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(key==A[mid])
            return mid;
        else if(key<A[mid])
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

// 递归实现
int binarySearch1(int* A, int key, int low, int high){
    if(low>high)
        return 0;
    int mid = (low+high)/2;
    if(key<A[mid]){
        binarySearch1(A, key, low, mid-1);
    }
    else if(key>A[mid]){
        binarySearch1(A, key, mid+1, high);
    }
    if(key==A[mid])
        return mid;
}