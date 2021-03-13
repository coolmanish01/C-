#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
class Linklist{
	public:
		void traverse(struct node *);
		struct node* add(struct node*,int);
		struct node* del(struct node*);
};
void Linklist::traverse(struct node *ptr){
	while(ptr!=NULL){
		cout<<"Element : "<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
struct node* Linklist::add(struct node *head,int data){
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node *p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
struct node* Linklist::del(struct node *head){
	struct node *p=head;
	struct node *ptr=head;
	while(p->next!=NULL){
		p=p->next;
	}
	while(ptr->next!=p){
		ptr=ptr->next;
	}
	ptr->next=NULL;
	free(p);
	return head;
}
void main(){
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;

	head = (struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third =(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));

	head->data=10;
	head->next=second;

	second->data=20;
	second->next=third;

	third->data=30;
	third->next=fourth;

	fourth->data=40;
	fourth->next=NULL;

	Linklist ob1;
	int data;
	clrscr();
	do{
		cout<<"\n\nPress 1 to Add a Node"
		      "\nPress 2 for delete a Node"
		      "\nPress 3 to Display List"
		      "\nPress 4 to Exit"
		      "\nEnter Your Choice : ";
		int ch;
		cin>>ch;
		switch(ch){
			case 1:cout<<"Enter the Data you want to Add : ";
				cin>>data;
				ob1.add(head,data);
				break;
			case 2:ob1.del(head);
				break;
			case 3:ob1.traverse(head);
				break;
			case 4:exit(0);

			default:cout<<"Please Enter a valid Input!";
		}
	}while(1);
	getch();
}