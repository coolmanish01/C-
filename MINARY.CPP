#include<iostream.h>
#include<conio.h>
void main(){
	int ar[10],n;
	clrscr();
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<"Enter Your Array : ";
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}//for inpiut Array
	for(i=1;i<n;i++){
		//considering ar[0] as min
		if(ar[0]>ar[i])
			ar[0]=ar[i];
	}
	cout<<"Minimum Value is "<<ar[0];
	getch();
}