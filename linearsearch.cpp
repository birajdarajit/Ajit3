#include<iostream>
using namespace std;
int  main(){
    int A[]={12,56,78,34,26};
    int key;
    cout<<"enter key";
    cin>>key;
    for(int i=0;i<5;i++){
        if(key==A[i]){
            cout<<i;
            
            return 0;
        }
    }
    cout<<"Not found key";
}