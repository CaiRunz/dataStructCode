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

int main()
{
    struct Node * head=nullptr;
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

void Print(Node *head)
{   
    while (head!=nullptr)
    {
        printf("the data is %d\n",head->data);
        head=head->next;
    }
    

}

Node *ListReverse(struct Node *head)
{
    struct Node *current , *prev, *next;//定义多个指针必须每个前都需要*
    prev=nullptr;
    current=head;
    while (current!=nullptr)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;//注意不能是current->next因为current的next指针已经不再指向原链表的下一个结点了
        
    }
    

    head=prev;
    return head;

}
