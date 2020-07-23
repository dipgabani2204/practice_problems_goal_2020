#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y);
void main()
{
    int a;
    int b;
    int *p,*q;
    printf("Enter Two numbers");
    scanf("%d %d",&a,&b);
    printf("========================================================================================================\n");
    printf("If output of numbers are alternative form then implementation is True for all these different methods...\n ");
    //by temp method
    int temp,temp1;
    temp = a;
    a = b;
    b = temp;
    printf("Swap by temp variable: %d %d\n",a,b);

    //By using equation of sum
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swap by Equation of sum: %d %d\n",a,b);

    //By using equation of Multiplication

    a = a * b;
    b = a / b;
    a = a / b;
    printf("Swap by Equation of Multiplication: %d %d\n",a,b);

    //By using pointer
    void swap(int *x,int *y)
    {
        temp1 = *x;
        *x = *y;
        *y = temp1;
    }
    swap(&a,&b);
    printf("Swap by pointer: %d %d\n",a,b);
    printf("========================================================================================================\n");
}
