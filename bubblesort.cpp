#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={12,23,43,12,23,65,76};
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
}