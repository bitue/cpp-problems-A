#include<bits/stdc++.h>
using namespace std ;

void fun (int *a){

    *a = 200 ;


}

int main (){

    int a =10 ;
    int *ptr_a = &a ;
    fun(ptr_a);
    cout<<a<<endl;

}
