#include<iostream.h>
#include<conio.h>
void rev(char *s1){
	int i=0;
	for(int j=0;s1[j]!=NULL;j++);
	int n=j-1;
	char t;
	while(i<n){
		t=s1[i];
		s1[i]=s1[n];
		s1[n]=t;
		i++;
		n--;
	}
	cout<<"Your String : "<<s1;
}
void main(){
	char *str;
	clrscr();
	cout<<"Enter your String : ";
	cin>>str;
	rev(str);
	getch();
}