#include<iostream>
using namespace std;

int main(){
    int A[10]={10,3,4,8,7,1,9,2,6,5};
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(A[min]>A[j]){
                min = j;
            }
        }
        if(min!=i){
            int temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }
}
