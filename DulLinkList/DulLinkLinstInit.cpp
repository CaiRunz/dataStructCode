#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* prev;
    struct Node * next;
};


Node* head = nullptr;
Node* getNewNode(int value);
void  insertNewNodeAtHead(int value);
void print();



int main()
{
    insertNewNodeAtHead(2);
    insertNewNodeAtHead(6);
    insertNewNodeAtHead(9);
    insertNewNodeAtHead(5);
    print();

    return 0;
}

Node * getNewNode(int value)
{
    Node* newNodePtr = (Node*)malloc(sizeof(Node));
    newNodePtr->next=nullptr;
    newNodePtr->prev=nullptr;
    newNodePtr->data=value;
    return newNodePtr;
}

void insertNewNodeAtHead(int value)
{
    Node* temp = getNewNode(value);
    if (head==nullptr){
        head=temp;
    }else
    {
        head->prev=temp;
        temp->next=head;
        head=temp;
    }
    
}

void print()
{
    Node* temp = head;
    if (temp==nullptr)
    {
        return;
    }
    printf("the temp pointer is %p\n",temp);
    printf("the temp->next pointer is %p\n",temp->next);

    while (temp!=nullptr)
    {
        printf("From head the data is %d \n",temp->data);
        if (temp->next==nullptr){
            break;
        }
        else
        {
            temp=temp->next;
        }
        
        
    }

    while (temp!=nullptr)
    {
        printf("From last the data is %d \n",temp->data);
        temp=temp->prev;
    }
    
    
}

void printFromLast()
{

}
