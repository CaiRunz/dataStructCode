#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;

};


Node* Insert(Node* ,int);
void Print(Node*);

struct Node *ListReverse(struct Node *);
struct Node * head=nullptr;//定义为全局变量

int main()
{
    
    head=Insert(head,2);
    head=Insert(head,4);
    head=Insert(head,6);
    head=Insert(head,8);
    
    Print(head);
    head=ListReverse(head);
    Print(head);
    return 0;
}


Node *Insert(Node * head, int data)
{
    //Node * temp=(Node*)malloc(sizeof(Node));//C语言写法
    Node * temp=new Node;
    temp->data=data;temp->next=nullptr;
    if (head==nullptr)
    {
        head=temp;
    }
    else{
    temp->next=head;
    head=temp;
    }
    return head;
}

Node*  ListReverse(Node *p)
{   
    //Node* tmp=head;
    if (p->next==nullptr)
    {   
        head=p;
        return;
    }
    ListReverse(p->next);
    
}

