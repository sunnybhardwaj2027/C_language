// loop question from codeforwin
// Q-1 Write a C program to print all natural numbers from 1 to n. � using while loop
/*
#include<stdio.h>

int main()
{
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        printf("%d \n",i);
        i++;
    }
    return 0;
}
*/
//m--2 using for loop

/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("d",&n);
    int i;
    for(i=0; i<=n; i++){
        printf("%d \n",i);
    }
}
*/
// Q2--Write a C program to print all natural numbers in reverse (from n to 1). � using while loop
/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int i;
    i=n;
    while(i>=1){
        printf("%d \n",i);
        i--;
    }
    return 0;
}
*/
//m--2
/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int i;
    for(i=n; i>=1; i--){
        printf("%d \n",i);
    }

    return 0;
}
*/
//Q3--Write a C program to print all alphabets from a to z. � using while loop
/*
#include<stdio.h>
int main()
{
    char alph;
    alph="a";
    while(alph<="z"){
        printf("%c \n",alph);
        alph++;
    }
    alph="A";
    while(alph<="Z"){
        printf("%c \n",alph);
        alph++;
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char alph;
    for(alph='a'; alph<='z'; alph++){
        printf("%c \n",alph);
    }
}
*/
//Q4--Write a C program to print all even numbers between 1 to 100. � using while loop
/*#include<stdio.h>
int main()
{
    int i;
    i=2;
    while(i<=100){
        printf("%d \n",i);
        i+=2;
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{   int i;
    for(i=2; i<=100; i+=2){
        printf("%d \n",i);
    }
    return 0;
}
*/
//Q5--Write a C program to find sum of all natural numbers between 1 to n.
/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int i;
    i=1;
    int sum=0;
    while (i<=n){
        sum+=i;
        i+=1;
    }
    printf("sum is %d",sum);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d",&n);

    int sum=0;
    for (int i=1; i<=n; i+=1){
        sum+=i;
    }
    printf("sum is %d",sum);
    return 0;
}
*/
//Q6--Write a C program to find sum of all even numbers between 1 to n.
/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int i=2;
    int sum=0;
    while(i<=n){
        sum+=i;
        i+=2;
    }
    printf("sum is %d",sum);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d",&n);

    int sum=0;
    for (int i=2; i<=n; i+=2){
        sum+=i;
    }
    printf("sum is %d",sum);
    return 0;
}
*/
//Q9--Write a C program to print multiplication table of any number.
/*
#include<stdio.h>
int main()
{
    int i, num;
    i=1;
    printf("enter number : ");
    scanf("%d",&num);
    while (i<=10){
        printf("%d * %d = %d \n",num,i,num*i);
        i++;
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    for (int i=1; i<=10; i++){
        printf("%d * %d = %d \n",num,i,(num*i));
    }
    return 0;
}
*/

// Q10--Write a C program to count number of digits in a number
/*
#include <stdio.h>

int main()
{
    int number, i;

    printf("Enter number : ");
    scanf("%d",&number);

    int count=0;
    while(number != 0){
        number=number/10;
        count++;
    }

    printf("number of digits : %d",count);
    return 0;
}
*/

// Q11--Write a C program to find first and last digit of a number
/*
#include <stdio.h>

int main()
{
    int number, first, last;

    printf("Enter number : ");
    scanf("%d",&number);

    last=number%10;

    while(number>10){
        number=number/10;
    }

    first=number;

    printf("first digit : %d\n",number);
    printf("last digit : %d",last);
    return 0;
}
*/

// Q12--Write a C program to find sum of first and last digit of a number
/*
#include <stdio.h>

int main()
{
    int number, first, last;

    printf("Enter number : ");
    scanf("%d",&number);

    last=number%10;

    while(number>=10){
        number=number/10;
    }

    first=number;

    printf("first digit : %d\n",number);
    printf("last digit : %d\n",last);

    printf("sum : %d",number+last);
    return 0;
}
*/

// Q13--Write a C program to calculate sum of digits of a number
/*
#include <stdio.h>

int main()
{
    int number, rem;

    printf("Enter number : ");
    scanf("%d",&number);

    int sum = 0;

    while(number>=10){
        rem=number%10;
        number = number / 10;
        sum =  sum + rem;
    }

    sum+=number;

    printf("sum of the digits: %d",sum);
    return 0;
}
*/

Q14--