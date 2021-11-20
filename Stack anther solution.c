#include <stdio.h>
#include <stdlib.h>
int maxs=50;
int stack[50],top=-1;
int isfull()
{
    if(top==(maxs-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
       return 0;
    }
}
int push (int val)
{
    if(isempty)
    {
        top++;
        stack[top]=val;
    }
    else
    {
        printf("Stack is overflow ");
    }
}
int pop()
{
    if(isfull)
    {
        int data=stack[top];
        top--;
        printf(" the pop element is %d",data);

    }
    else
    {
         printf("Stack is underflow ");
    }
}
void display()
{
    if(isfull)
    {
        printf ("Stack elements are: ");
        for (int i = top; i >= 0; i--)
           printf ("%d ",stack[i]);
    }
    else
    {
        printf( "Stack is empty" );
    }
}
void peek()
{
    if (isfull)
    {
        printf("The top element is : %d", stack[top]);
    }
    else
    {
        printf("Stack is empty");
    }
}

int main()
{
    int x;
    printf("1) DisplayStack \n");
    printf("2) PUSH \n");
    printf("3) POP \n");
    printf("4) peek \n");
    printf("5) EXIT \n");
    while (x != 5)
    {
        printf("\nEnter choice: ");
        scanf("%d",&x);

         if (x == 1)
        {
            display();

        }
        else if (x == 2)
        {
            int y;
            printf("Enter Push number :  ");
           scanf("%d",&y);
            push(y);
            display();

        }
        else if (x == 3)
        {
            pop();

        }
         else if (x == 4)
         {
             peek();
         }
        else if (x == 5)
        {
            return 0;
        }
        else
        {
           printf("Invalid Choice ....Try again....\n");

        }


    }
        return 0;
}
