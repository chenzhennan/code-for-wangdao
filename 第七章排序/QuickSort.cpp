#include<iostream>
using namespace std;

int Partition(int* A, int low, int high){
    int midvalue = A[low];
    while(low<high){
        while(low<high&&A[high]>=midvalue)
            high--;
        A[low]=A[high];
        while(low<high && A[low]<=midvalue)
            low++;
        A[high]=A[low]
    }
    A[low]=midvalue;
    return low;
}

//快排是选一个数值，然后把小于该数值的全部放在该数值的左边，其余的放在右边，然后再对左边和右边的进行快排
void QuickSort(int* A, int low, int high){
    if(low<high){
        int mid = Partition(A, low, high);
        QuickSort(A, low, mid-1);
        QuickSort(A, mid+1, high);
    }

}

int main(){
     int A[10]={10,3,4,8,7,1,9,2,6,5};
     QuickSort(&A, 0, 9);

     
}