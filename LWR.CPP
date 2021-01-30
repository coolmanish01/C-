#include<iostream.h>
#include<conio.h>
void upr(char *s1){
	for(int i=0;s1[i]!=NULL;i++){
		if(s1[i]>='A'||s1[i]<='Z')
			s1[i]=s1[i]+32;
	}
	cout<<"Your String is : "<<s1;
}
void main(){
	char *str;
	clrscr();
	cout<<"Enter Your String : ";
	cin>>str;
	upr(str);
	getch();
}