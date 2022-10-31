
#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
int pointer_arg(int a,int b,int(*function)(int,int)){
    return function (a,b);
    
}
int main(){
    int i,j;
    cout<<"enter first value :";
    cin>>i;
    cout<<"enter second value :";
    cin>>j;
    cout<<"sum of both numbers :";
    cout<<"pointer_arg(i,j&sum)"<<endl;
    
    
    
    
}
