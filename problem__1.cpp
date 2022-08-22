#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n ;
    cin>>n ;
    int arr [n];
    for(int i=0 ; i<n ; i++) cin>>arr[i];


    // find max 
    int max_num = arr[0];

    for(int i=1 ; i<n ; i++){
        max_num = max(max_num, arr[i]);

    }

    int curr[max_num+1]={0};
    for(int i=0 ; i<n ; i++){
        curr[arr[i]]++;
        
    }

    for(int i=0 ; i<max_num+1; i++){
        if(curr[i]){
            cout<<i<<" => "<<curr[i]<<endl;

        }
       
    }

}