#include<iostream>

using namespace std;

int main(){
    int A[10]={10,3,4,8,7,1,9,2,6,5};

    int i, j;
    for(i=1;i<10;i++){
        if(A[i]<A[i-1]){
            int temp = A[i];
            for(j=i-1;j>=0&&temp<A[j];j--){
                A[j+1]=A[j]
            }
            A[j+1]=temp;
        }
    }
    for(int k=0; k<10; k++)
        cout<<A[k]<<"\t";
}