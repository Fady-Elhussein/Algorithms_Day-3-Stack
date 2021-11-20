#include <stdio.h>
#include <stdlib.h>
int max_size=20,top=-1;
int stack[20];
void push(int val)
{
    if(top>=max_size-1)
    {
        printf("Stack Overflow ");
    }
    else
    {
        top++;
        stack[top]=val;
    }
}
void pop() {
    if (top <= -1)
    {
    printf("Stack Underflow" );
    }
    else {
        printf( "The popped element is %d \n",stack[top]);
        top--;
    }
}
void display() {
    if (top >= 0) {
      printf ("Stack elements are: ");
        for (int i = top; i >=0; i--)
           printf ("%d ",stack[i]);
    }
    else
    {
        printf( "Stack is empty" );
    }
}
void peek()
{
    printf("The top element is : %d",stack[top]);
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
