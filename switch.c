#include<stdio.h>
#include(stdlib.h)
int main()
{
    int choice;
    printf("\n1.for loop\n2.---while loop\n3.do--- while loop\n");
    printf("Enter choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: Printf("display 1-10 using for loop");
        for(i<=10; 1++)
        {
            printf("%d\n",i)
        }
        Break;
        case 2: Printf("To display even numbers 100-400 using while loop");
        i=100;
        while(i>=40)
        {
            printf("%d",i);
            i=i-2;
        }
        Break;
        case 3: printf("Display odd number 1-3 using do ---while loop");
        i=1;
        do
        {
            printf("%d\n",i);
            i=i+2;
        }
        while(i<=33);
        Break;
        case 4: exit (0);
        Break;
        default= printf("Invalid choice");

    }
    return 0;
}