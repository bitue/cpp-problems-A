#include<bits/stdc++.h>
using namespace std ;

int main (){
    int rw, cl ;

    cin>>rw>>cl;
    int arr[rw][cl];
    for(int i=0 ; i<rw ; i++){
        for(int j=0 ; j<cl ; j++){
            cin>>arr[i][j];
        }
    }

    map<int,int> chk ;
    
    for(int i=0 ; i<rw ; i++){
        for(int j=0 ; j<cl ; j++){
           if(chk[arr[i][j]]){
               arr[i][j]=-1;
           }
           else {
               chk[arr[i][j]] = 1 ;
           } 
        }
    
    }

    for(int i=0 ; i<rw ; i++){
        for(int j=0 ; j<cl ; j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }

}