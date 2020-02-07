#include<iostream>
#include<iomanip>
using namespace std;

char a[20];

int main(){
	cin>>setw(20)>>a;
	int x=0;
	x=a[0]*1;
	for(int i=2;i<=4;i++)
		x+=(a[i]-'0')*i;
	for(int i=6;i<=10;i++)
		x+=(a[i]-'0')*(i-1);
	x=x%11;
	if(x==10)
		if(a[12]=='X') cout<<"Right";
			else { a[12]='X';cout<<a;}
	else if(a[12]==x) cout<<"Right";
			else {a[12]=x;cout<<a;}
} 
