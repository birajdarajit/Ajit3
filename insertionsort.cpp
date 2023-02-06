#include<iostream>
using namespace std;
 int main(){
    int A[]={12,321,23,2,21,132};
    for(int i=1;i<6;i++){
           
           int temp=A[i];
           int j=i-1;
           while(j>=0 && A[j]>temp){
                A[j+1]=A[j];
                j--;

           }
           A[j+1]=temp;
          }
          for(int i=0;i<6;i++){
            cout<<A[i]<<" ";
          }
    }
 