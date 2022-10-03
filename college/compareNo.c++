#include <iostream>
using namespace std;
//function declaration
void compareNo(int a,int b,int c){
	if(a>b && a>c){
		cout<<a<<" is Greater than "<<b<<" & "<<c;}
	else if(b>a && b>c){
		cout<<b<<" is Greater than "<<a<<" & "<<c;}	
	else if(c>b && c>a){ 
		cout<<c<<" is Greater than "<<b<<" & "<<a;}
	cout<<""<<endl;
	if(a==b && a==c){
		cout<<a<<" is equal to both "<<b<<" & "<<c;}
	if(a==b && a!=c){
		cout<<a<<" is equal to "<<b<<" and not "<<c;}
	if(a==c && a!=b){
		cout<<a<<" is equal to "<<c<<" and not "<<b;}
	if(b==c && b!=a){
		cout<<b<<" is equal to "<<c<<" and not "<<a;}
}

int main(){
	int a,b,c; 
	cout<<"Enter three Numbers to Compare: ";
	cin>>a>>b>>c;
	//function calling
	compareNo(a,b,c);
}



