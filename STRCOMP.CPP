#include<iostream.h>
#include<conio.h>
void comp(char *s1,char *s2){
	int i=0,d;
	while(s1[i]!=NULL||s2[i]!=NULL){
		d=s1[i]-s2[i];
		if(d!=0){
				cout<<"Strings are not Equal";
			break;
		}
		i++;
	}
	if(d==0)
		cout<<"Strings are Equal";
}
void main(){
	char *a,*b;
	clrscr();
	cout<<"Enter Your String : ";
	cin>>a;
	cout<<"Enter Your String : ";
	cin>>b;
	comp(a,b);
	getch();
}