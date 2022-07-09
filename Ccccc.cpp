#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,count1=0,sub,k,sum,count2;
    char a[100000],b[100000],c[26];
      for(i=0;i<26;i++)
    {
        c[i]='a'+i;//c array te sokol letter store//
    }
    cin>>a;
    sort(a,a+strlen(a));//sort the input array
    for(i=0,k=0; a[i]!='\0'; i++)
    {
        if(a[i]!=a[i+1])
        {
            b[k]=a[i];
            k++;
        }
    }
    b[k]='\0';

    for(i=0;i<26;i++)//compare array b[] with array c[]
    {
       if(c[i]!=b[i])
       {
          cout<<c[i];
          count1++;
          break;
       }
    }
   if(count1==0)
   {
       cout<<"None";
   }
    return 0;
}
