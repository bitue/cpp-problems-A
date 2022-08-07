
#include<bits/stdc++.h>
using namespace std ;


void pr(int * a , int n ){
    cout<<"print array current condition "<<endl;
    for(int i =0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
     cout<<endl;

}

int main () {

    int n , t ;
    cin>>n >>t ;

    int a[n] ;

    for(int i=0 ; i<n ; i++) cin>>a[i];

    int lb = 0 ;
    int ub = n-1 ;

    cout<<"lb : "<<lb<<" ub : "<<ub <<endl;

    int co =0 ;
    while (lb <=ub){
        cout<<"iteration no :"<<++co<<endl;

        int mid = (lb +ub)/ 2 ;
        if(a[mid]== t ) {
            cout<<mid<<endl;
            return 0;
        }
        if(t > a[mid]) {

            cout<<"lb: "<<lb<<" mid: "<<mid <<" ub : "<<ub<<endl;
            lb = mid +1 ;

            cout<<endl;


        }
        if(t < a[mid]) {

            cout<<"lb: "<<lb<<" mid: "<<mid <<" ub : "<<ub<<endl;
            ub = mid-1 ;

            cout<<endl;
        }
    }
    cout<<"Not found"<<endl;
    cout<<-1<<endl;




}
