#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(){
    int a,b,i=0;
    string array[10]={"zero","one","two","three","four","five","six","seven",     "eight","nine"};
    
     cin>>a>>b; 
     for(i=a;i<=b;i++){
         if( (i>=1) && i<=9){
            cout<<array[i];}
            
        else if(i%2==0){
            cout<<"even";
        }
        
        else {
            cout<<"odd";
        }        
        cout<<endl;
        
 }
}
