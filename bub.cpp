#include<bits/stdc++.h>
using namespace std ;


void print_arr(int *a , int n) {

    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }


}

void swap_two(int *a , int *b){
    int t = *a ;
    *a = *b ;
    *b = t ;

}

int main (){

    int n ;
    cin>>n;
    int arr [n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int co =0 ;

    //boubble sort here

    bool flag = false ;

    for(int i=0 ; i<n-1 ; i++){
        flag = false ;
        for(int j=i+1 ; j<n; j++){
            co++;
            if(arr[i]> arr[j]){
                cout<<"if e gese"<<endl;
                swap_two( &arr[i], &arr[j]);
                flag = true ;
            }
        }
        if(!flag) break ;
        cout<<"i the itteration done"<<i<<endl;
        print_arr(arr, n);
        cout<<endl;
    }

    cout<<"after sort"<<endl;
    print_arr(arr, n);
    cout<<endl;
    cout<<co<<" times"<<endl;




}
