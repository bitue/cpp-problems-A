#include<bits/stdc++.h>
using namespace std ;


void pr (int *a , int n ) {

    for(int i=0 ; i<n ; i++) cout<< a[i]<<" " ;


}

int main (){

    int n ;
    cin>>n ;
    int a [n];

    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    // find the max num

    int max_num = a[0];

    for(int i=1 ; i<n ; i++){
        max_num = max(a[i], max_num);
    }

    cout<<"Max Num : "<<max_num<<endl;
    // make a counter arr of max+1 length

    int curr[max_num+1]={0};

    // count freq in curr

    for(int i=0 ; i<n ; i++){
        curr[a[i]] ++ ;
    }
    cout<<"print the curr array"<<endl;
    pr(curr, max_num +1);
    // cumilative sum of the curr array
    int co = curr[0];
    for(int i=1 ; i<max_num +1  ; i++){
        co = curr[i]+ co ;
        curr[i]= co ;
    }

    cout<<"print the curr sum array"<<endl;
    pr(curr, max_num +1);

    // final array make ;

    int final_arr [n] ;
      cout<<"Yes"<<endl;
    for(int i=n-1 ; i>=0 ; i--){
        curr[a[i]] -- ;

        final_arr[curr[a[i]]]= a[i];
    }
      cout<<"Yes"<<endl;

    // print the final arr

    for(int i=0 ; i<n ; i++){
        cout<<final_arr[i]<<" ";
    }


}
