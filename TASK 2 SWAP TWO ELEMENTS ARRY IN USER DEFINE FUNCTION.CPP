#include<iostream>
using namespace std;
void swap(int*a,int*b){
int c;
c=*a;
*a=*b;
*b=c;
     cout<<"\n\n\n";
	 cout<<"out put of main function........\n";
	 cout<<"A"=<<a<<endl;
	 cout<<"B"=<<b;	
	
}

main(){
	int a,b;
	cout<<"enter number in a variable :";
	cin>>a;
	cout<<"enter number in b variable :";
	cin>>b;
	swap(&a,&b);
	
}
