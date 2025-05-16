#include <bits/stdc++.h>
using namespace std;
void  fibonacci(int n);
int main(){
   int a=0;
   int b=1;
   int n;
   cout<<"Enter N(how many fibonacci digits u want):";
   cin>>n;
   fibonacci(n);
       
 return 0;   
}
void  fibonacci(int n){
    if(n==0){
        exit(0);
        
    }else if (n==1)
    {
        cout<<"Fibonacci Series:"<<0;
    }else{
        int a=1;
        cout<<"Fibonacci Series:"<<0<<","<<1;

        int x=0;
        int y=0;
        int i=3;
        while(i<=n){
            y=a+x;
            cout<<","<<y;
            x=a;
            a=y;
            i++;


        }

    }
}

