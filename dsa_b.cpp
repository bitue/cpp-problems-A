#include<bits/stdc++.h>
using namespace std ;



int main (){

    int t ;
    cin>>t ;

  while(t--){
        int n ;
        cin>>n;
        int a[n];

        for(int w =0 ; w<n ; w++){
            cin>>a[w];
        }
         //need to sort it
        for(int i =1 ; i<n ; i++){
            int key = a[i];
            int j = i-1 ;

            while(j>=0 && key < a[j]) {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=key ;
        }




       int co =0;
       for(int i=0 ; i<n ; i++){
            if(a[i]==a[0]){
                co++;
            }
       }

       cout<<n-co<<endl;

    }

}
