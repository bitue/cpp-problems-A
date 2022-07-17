#include<bits/stdc++.h>

using namespace std ;

int main (){

    int arr []={1, 2, 3, 4, 5, 6};
    int d ;
    cin>>d ;
    for (int i=d+1 ; i<6 ; i++) {
        arr[i-1]= arr[i] ;
    }

    for(int i=0 ; i<5 ; i++){
        cout <<arr[i]<<" ";
    }


}
