//Prg for Doubly Linked List
#include <iostream>
using namespace std;
struct DNode
{
    int info;
    struct DNode *LPTR;
    struct DNode *RPTR;
}*L=NULL,*R=NULL;

struct DNode *createDNode(int val)
{
    struct DNode *new1;
    new1=(struct DNode*)malloc(sizeof(struct DNode));
    new1->info=val;
    return(new1);
}
int main() {
	
	struct DNode *d1,*d2,*d3;
	
	d1=createDNode(100);
	L=d1;
	d1->LPTR=NULL;
	d2=createDNode(200);
	d2->LPTR=d1;
	d1->RPTR=d2;
	d3=createDNode(300);
	d3->LPTR=d2;
	d2->RPTR=d3;
	d3->RPTR=NULL;
	R=d3;
	struct DNode *temp;
	temp=L;
	cout<<"\n Doubly Linked List:\n";
	//cout<<temp->info<<"<-->";
	while(temp!=NULL)
	{
	    cout<<temp->info<<"<-->";
	    temp=temp->RPTR;
	}
	cout<<"NULL";
	struct DNode *n1;
	n1=createDNode(50);
	n1->LPTR=NULL;
	n1->RPTR=L;
	L->LPTR=n1;
	L=n1;
	struct DNode *temp1;
	temp1=L;
	cout<<"\n After Lmost Insert Doubly Linked List:\n";
	//cout<<temp->info<<"<-->";
	while(temp1!=NULL)
	{
	    cout<<temp1->info<<"<-->";
	    temp1=temp1->RPTR;
	}
	cout<<"NULL";
	return 0;
}