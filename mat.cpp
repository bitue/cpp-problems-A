#include<bits/stdc++.h>

using namespace std ;

int main (){
    int n, m ;
    cin >>n >> m ;

     int arr [n][m] ;

    if(n!= m){
        cout<<"is not symentric" ;
        return 0;
    }

    for(int i=0 ; i<n; i++){
        for(int j=0 ; j< m ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0 ; i<n; i++){
        for(int j=0 ; j< m ; j++){
            if(i == j){
                continue ;
            }
            else {
                if(arr[i][j] != arr[j][i]){
                     cout<<"is not symentric" ;
                     return 0 ;
                }
            }
        }
    }

    cout << "Symentric";
    return 0 ;









}
