#include<bits/stdc++.h>
using namespace std ;

void change_n (int *a) {

    cout<<a<<endl;
    cout<<*a<<endl;

    *a = 300 ;
    cout<<"from the fun out"<<endl;


}

int main (){

    int n ;
    cin>>n ;
    cout<<n<<" before"<<endl;

    int *a_of_n = &n ;
    // call the fun

    change_n(&a_of_n);
    cout<<n<<" after"<<endl;




}
