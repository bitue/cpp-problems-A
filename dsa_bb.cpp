#include<bits/stdc++.h>
using namespace std ;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t ;
    cin>>t ;

  for(int k=0 ; k<t ; k++){
        cout<<"Case "<<k+1<<":"<<endl;
        int n , q ;
        cin.ignore();
        cin>>n>>q ;
        int arr[n];


        for(int i =0 ; i<n ; i++){
            cin>>arr[i];

        }

       for(int w =0 ; w<q ; w++){

            int f , l;
            cin>>f>>l;
            f-- ;
            l--;
            int min_num = arr[f];

            for(int i=f ; i<=l ; i++){
                min_num = min(min_num, arr[i]);
            }
            cout<<min_num<<endl;
       }


    }


}
