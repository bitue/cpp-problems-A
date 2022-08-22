#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n;
    cin>>n ;
    int arr[n][n]={0};
    for(int i =0 ; i<n; i++){
        for(int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }

    int total =0 ;
    for(int i =0 ; i<n; i++){
        for(int j=0 ; j<n ; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    for(int i =0 ; i<n ; i++){
        for(int j=0 ; j<n; j++){
           if(j==n/2 ) {
            total+= arr[i][j];
           }
        }
        
    }

    for(int i =0 ; i<n ; i++){
        for(int j=0 ; j<n; j++){
           if(i==n/2 ) {
            total+= arr[i][j];
           }
        }
        
    }

    total -= arr[n/2][n/2];

     for(int i =0 ; i<n ; i++){
        for(int j=0 ; j<n; j++){
           if(i==0 && j<n/2 ) {
            total+= arr[i][j];
           }
           if(i==n-1 && (j>n/2)){
             total+= arr[i][j];
           }
        }
        
     }

      for(int i =0 ; i<n ; i++){
        for(int j=0 ; j<n; j++){
           if(j== n-1 && i<n/2 ) {
            total+= arr[i][j];
           }
           if(j==0 && (i>n/2)){
             total+= arr[i][j];
           }
        }
        
     }


    cout<<total ;



    




}