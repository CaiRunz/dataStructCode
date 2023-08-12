#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


void Print(Node*);
Node *Insert(Node * , int );



int main()
{
    struct Node * head=nullptr;
    head=Insert(head,2);
    head=Insert(head,4);
    head=Insert(head,6);
    head=Insert(head,8);//头插法,the list is 8,6,4,2

    Print(head);


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

void Print(Node* head)
{
    if (head==nullptr)//边界条件
    {
        return;
    }

    Print(head->next);//递进语句

    printf("the data is %d\n",head->data);//执行语句
}