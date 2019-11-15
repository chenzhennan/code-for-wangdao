#include<iostream>

using namespace std;

int main() {
    int A[11]={0,10,3,4,8,7,1,9,2,6,5};

    int dk;
    for(dk=10/2;dk>=1;dk=dk/2){
        for(int i=dk+1;i<11;i++){
            if(A[i]<A[i-1]){
                A[0]=A[i];
                int j;
                for(j=i-dk;j>0&&A[0]<A[j];j-=dk)
                    A[j+dk]=A[j];
                A[j+dk]=A[0];
            }

        }
    }
}