#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int data);
void Print();
void Delete(int position);//delete the position number node

int main(){

    head=nullptr;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);//now the list :2,4,6,5

    int position;
    printf("Enter a position\n");
    scanf("%d",&position);
    Delete(position);
    Print();


    return 0;
}