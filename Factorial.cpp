#include<iostream>
using namespace std;
int main(){
    int a, fact = 1  , i=1;
    cout<<"Enter your value :";
    cin>>a;
    
    while(i<=a){
        fact = fact * i;
        i++;
        
    }
    cout<<"your factorial is "<<fact<<endl;
}