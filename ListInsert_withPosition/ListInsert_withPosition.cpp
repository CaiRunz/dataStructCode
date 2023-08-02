#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};



void Insert(int data, int position);
void Print();


struct Node* head;

int main(){

    // Node* head;//写在main()方法里会让其他方法的定义找不到head的定义
    head=nullptr;

    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);

    Print();


    return 0;
}

void Insert(int data, int position)
{   
    //创建一个新结点
    Node* temp1=new Node();
    //c中的写法 为:
    //struct Node* temp1=(struct Node*)malloc(sizeof(struct Node*));
    temp1->data=data;//给数据域赋值
    temp1->next=nullptr;//给next指针置空

    //判断插入位置是不是第一个
    if (position==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }

    //插入链表第position个位置
    Node* temp2=head;
    for (int i = 0; i < position-2; i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
    

}

void Print()
{
    Node* temp=head;
    while (temp!=nullptr)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
