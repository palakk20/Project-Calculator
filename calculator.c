#include<stdio.h>
#include<windows.h>

// declaring color functions.
void red()
{
   printf("\033[1;31m"); 
}

void green()
{
    printf("\033[1;32m");
}

void yellow()
{
    printf("\033[1;33m");
}

void blue()
{
    printf("\033[1;34m");
}

void purple()
{
    printf("\033[1;35m");
}

void cyan()
{
    printf("\033[0;36m");
}

void reset()
{
    printf("\033[0m");
}

void load()
{
    int i;
    while(1)
    {
        red();
        printf("loading");
        for(i = 0;i < 4; i++)
        {
            
            Beep(1500, 500);
            printf(".");
           
        }
        reset();
        system("cls"); 
        break;
    }
}

void add()
{
    green();
    int n1, n2, res ;
    printf("Please enter two numbers\n\n");
    scanf("%d%d",&n1,&n2);
    load();
    green();
    res = n1 + n2;
    printf("%d + %d = %d",n1, n2, res);
}

void sub()
{
    red();
    int n1, n2, res ;
    printf("Please enter two numbers\n\n");
    scanf("%d%d",&n1,&n2);
    load();
    red();
    res = n1 - n2;
    printf("%d - %d = %d",n1, n2, res);
}

void mult()
{
    yellow();
    int n1, n2, res ;
    printf("Please enter two numbers\n\n");
    scanf("%d%d",&n1,&n2);
    load();
    yellow();
    res = n1 * n2;
    printf("%d * %d = %d",n1, n2, res);
}

void divide()
{
    blue();
    int n1, n2, res ;
    printf("Please enter the divisor and dividend\n\n");
    scanf("%d%d",&n1,&n2);
    load();
    blue();
    res = n1 / n2;
    printf("%d / %d = %d",n1, n2, res);
}

void mod()
{
    purple();
    int n1, n2, res ;
    printf("Please enter the divisor and dividend\n\n");
    scanf("%d%d",&n1,&n2);
    load();
    purple();
    res = (n1%n2);
    printf("%d * %d = %d",n1, n2, res);
}

void fact()
{
    cyan();
    int n, i;
    int fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("\n\nError! Factorial of a negative number doesn't exist\n\n.");
    else {
        for (i = 1; i <= n; i++) 
        {
            fact = fact * i;
        }
        load();
        cyan();
        printf("\n\nFactorial of %d = %d", n, fact);
    }
}

void main()
{
    int ch,i;
    printf("\n\n\t\tCALCULATOR\n\n");
    while(1)
    {
        green();
        printf("\n\n1:\tAddition\n");
        red();
        printf("\n\n2:\tSubtraction\n");
        yellow();
        printf("\n\n3:\tMultiplication\n");
        blue();
        printf("\n\n4:\tDivision\n");
        purple();
        printf("\n\n5:\tModulas\n");
        cyan();
        printf("\n\n6:\tFactorial\n");
        reset();

        printf("\n\nPlease choose one operation\n");
        scanf("%d",&ch);
        system("cls");
        switch(ch)
        {
            case 1: add();
            break;
            case 2: sub();
            break;
            case 3: mult();
            break;
            case 4: divide();
            break;
            case 5: mod();
            break;
            case 6: fact();
            break;
            case 0: exit(0);
        }
        reset();
        printf("\n\n");
        for (i=0;i<70;i++)
        {
            printf("_");
        }
    }
}