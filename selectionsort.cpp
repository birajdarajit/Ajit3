#include<iostream>
using namespace std;
int  main(){
    int A[]={12,43,12,32,423,45,54};
    for(int i=0;i<6;i++){
        int k;
        for(int j=k=i;j<7;j++){
            if(A[k]>A[j]){
                k=j;
            }
            swap(A[i],A[k]);
        }
    }
    for(int i=0;i<7;i++){
        cout<<A[i]<<" ";
    }
}