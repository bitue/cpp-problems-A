#include<bits/stdc++.h>
using namespace std ;

int co =0 ;

void fun (){
    int static a =0 ;
    if(a>5){ 
        return ;
    }

    cout<<a<<endl;
    a++ ;
    fun() ;
 
    return ;
}

int fib (int a ) {
    if(a==0){
        return 1 ;
    }
    co++;
    return  fib(a-1)*a ;
}

int main (){

  //  fun();
  int x ;
  cin>>x ;
  int res = fib(x);
  cout<<res<<endl;
  cout<<co<<endl;


}