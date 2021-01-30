#include<iostream.h>
#include<conio.h>
void len(char *s1){
	for(int i=0;s1[i]!=NULL;i++);
		cout<<"Length of the String is "<<i;
}
void main(){
	char *str;
	clrscr();
	cout<<"Enter a String : ";
	cin>>str;
	len(str);
	getch();
}