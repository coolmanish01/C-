		/* Printing prime numbers from 1 to 100*/
#include<iostream.h>
#include<conio.h>
void main(){
	int f=0;
	clrscr();
	for(int i=2;i<=100;i++){
		f=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				f=1;
				break;
			}
		}
		if(f==0)
			cout<<i<<" ";
	}
	getch();
}