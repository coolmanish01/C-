#include<iostream.h>
#include<conio.h>
class str{
	char *s1,*s2;
	public:
	void len(char *s1);
	void lwr(char *s1);
	void upr(char *s1);
	void comp(char *s1,char *s2);
	void rev(char *s1);
};
	void str::len(char *s1){
	for(int i=0;s1[i]!=NULL;i++);
		cout<<"Length of the String is "<<i;
	}
	void str::lwr(char *s1){
		for(int i=0;s1[i]!=NULL;i++){
			if(s1[i]>='A'||s1[i]<='Z')
				s1[i]=s1[i]+32;
		}
		cout<<"Your String is : "<<s1;
	}
	void str::upr(char *s1){
		for(int i=0;s1[i]!=NULL;i++){
			if(s1[i]>='a'||s1[i]<='z')
				s1[i]=s1[i]-32;
		}
		cout<<"Your String is : "<<s1;
	}
	void str::comp(char *s1,char *s2){
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
	void str::rev(char *s1){
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
void main(){}