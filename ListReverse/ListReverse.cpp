#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;


void Reverse();


void Reverse()
{
    struct Node* current;
    //必须要有一个指针记录前面的结点的地址:
    struct Node* prev=nullptr;
    //还要有一个指针记录后面结点的地址:
    struct Node* next=nullptr;

    current=head;

    while (current!=nullptr)
    {   
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;

    }
    head=prev;//当链表遍历到最后时,prev指向的便是原链表最后的结点,反转后的链表的头结点

}
