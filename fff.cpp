#include<bits/stdc++.h>
using namespace std ;

int main (){

    int n ;
    cin>>n ;
    int co ;
    int farr[n]={0};
    for(int i =1 ; i<=n ; i++){
        co=0 ;
        int temp =i ;
        while(temp%2 ==0) {
            co++;
            temp = temp/2 ;
        }
        farr[i]=co;


    }

    for(int i=0 ; i<n ; i++){
        cout<<farr[i]<<endl;
    }


}
