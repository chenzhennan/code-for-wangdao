#include<iostream>

using namespace std;

int main(){
    int A[10]={10,3,4,8,7,1,9,2,6,5};
    n=10;
    //从后往前，对于小于前一个的则交换，这样每一趟就可以把最小的移到第一个
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(A[j]<A[j-1]){
                int temp = A[j];
                A[j]=A[j-1];
                A[j-1]=temp;
            }
        }
    }
}
