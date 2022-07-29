#include<bits/stdc++.h>
using namespace std ;


int main (){

    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int arr [n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int co ;
        int curr[n]={0};
        int m =0 ;
        for(int i=0 ; i<n ; i++){
            co=0 ;
            for(int j=0 ; j<n ; j++){
                if(arr[i]==arr[j]){
                    co++;
                }
            }
            curr[i]= co ;
            if(co >m){
                m = co ;
            }
        }

        // curr

        // find the max idx
        int max_idx =0 ;
        for(int i=0 ; i<n ; i++){
            if(curr[i]== m){
                max_idx = i ;
                break ;
            }
        }
        int c =0 ;

        for(int i=0 ; i<n ; i++){
            if(arr[max_idx] != arr[i]){
                c++;
            }
        }

        cout<<c<<endl;



    }


}
