#include<iostream.h>
#include<conio.h>
void main(){
	int n,f=0;
	clrscr();
	cout<<"Enter a Number to check Prime : ";
	cin>>n;
	for(int i=2;i<n;i++){
		f=0;
		for(int j=2;j<=n/2;j++){
			if(n%j==0){
				f=0;
				break;
			}
		}
	}
	if(f==0)
		cout<<"Number is Prime";
	else
		cout<<"Number is Not Prime";
	getch();
}