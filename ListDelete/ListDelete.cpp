#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


struct Node* head;

void Insert(int data);
void Print();
void Delete(int n);

int main()
{
    head=nullptr;//empty list
    printf("the first head pointer:%p\n",head);
    Insert(2);
    Insert(4);
    Insert(3);
    Insert(7);
    Insert(6);
    Insert(5);//list:5,6,7,3,4,2

    Print();

    int index;
    
    printf("input the index need to delete:\n");


    scanf("%d",&index);

    Delete(index);
    

    Print();

    return 0;
}

void Insert(int data)
{
    Node* node=new Node;
    node->data=data;
    node->next=nullptr;
    //头插法并且不考虑头节点
    if (head==nullptr)
    {
        head=node;
        printf("First insert head pointer:%p  ",head);
        printf("and the data is %d  \n",head->data);
    }
    else {
    node->next=head;
    head=node;
    printf("Insert finish head pointer:%p  ",head);
    printf("and the data is %d  \n",head->data);
    }
}

void Print()
{
    Node* temp=head;
    while (temp!=nullptr)
    {
        printf("%d  ",temp->data);
        printf("the temp pointer:%p  \n",temp);
        temp=temp->next;
    }
    
    //打印完之后head指针仍然指向的是头节点
    printf("Print finished head pointer:%p\n",head);
    
}

//现在知道不设头节点有多烦了吧
void Delete(int index)
{
    // the index is 0 to (lenth of list)-1
    struct Node* temp_del= head;
    for (int i = 0; i < index-1; i++)
    {   

        temp_del=temp_del->next;
    }
    


    struct Node* temp_rep =temp_del;

    printf("now the temp_del pointer :%p\n",temp_del);
    struct Node* debug_pointer=temp_del->next->next;
    printf("now the temp_del->next->next pointer :%p\n\n",debug_pointer);

    temp_del->next=temp_del->next->next;


    printf("delete finshed the tempdel pointer:%d\n",temp_del);
    printf("delete finished the tempdel-next pointer:%p\n",temp_del->next);

    temp_rep=temp_del->next;
    delete(temp_rep);//c++中需要写delete
    printf("Delete finished head pointer:%p\n",head) ;
}
