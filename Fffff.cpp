#include<bits/stdc++.h>
using namespace std ;

int main (){

    int n ;
    cin>>n ;
    int max_co =0;
    int farr[n+1]={0};
    for(int i=1 ; i<=n ; i++){

        int temp =i ;
        int co =0 ;
        // max_co =0 ;

        while(temp %2 ==0){
            co++;
            temp = temp/2 ;

        }
        farr[i]=co;
        if(co>=max_co){
            max_co = co ;
        }



    }
    //cout<<max_co<<endl;

    for(int i=0 ; i<n+1 ; i++){
        if(n==1){
            cout<<i+1<<endl;
            return 0;
        }
        if(max_co == farr[i]){
            cout<<i<<endl;
            return 0;
        }
    }


}
