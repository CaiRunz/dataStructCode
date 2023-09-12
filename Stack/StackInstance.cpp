#include <stdio.h>

#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;//因为数组第一个下标是0

void Push(int x)
{
    if (top==MAX_SIZE-1)
    {
        printf("Error: stack overflow\n");
        return;//单return没有返回值单纯退出函数
    }
    
    top++;
    A[top]=x;
}

void Pop()
{
    if (top==-1)
    {
        printf("No elemt to pop\n");
        return;
    }
    top--;
}

int Top()
{
    return A[top];
}

void Print(int A[])
{
    for (int i = 0; i <=top; i++)
    {
        printf("%d\n",A[i]);
    }
    
}

int main()
{
    Push(2);
    Push(5);
    Push(10);
    Pop();
    Push(12);
    Print(A);
}