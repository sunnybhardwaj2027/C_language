//Q1--Write a C program to find maximum between two numbers.
/*
#include<stdio.h>
int main()
{
    int first, second;
    printf("Enter first Number :");
    scanf("%d",&first);
    printf("Enter Second Number :");
    scanf("%d",&second);
    if(first>second){
        printf("first is max");
    }
    else if(first==second){
    printf("both are equal");
    }
    else{
    printf("second is max");
    }
    return 0;
}
*/
//Q2--Write a C program to find maximum between three numbers
/*
#include<stdio.h>
int main()
{
    int first, second, third;
    printf("enter first number : ");
    scanf("%d",&first);
    printf("enter second number : ");
    scanf("%d",&second);
    printf("enter third number : ");
    scanf("%d",&third);
    if (first>second && first>third){
        printf("first is max");
    }
    else if(second>first && second>third){
        printf("second is max");
    }
    else if(third>first && third>second){
        printf("third is max");
    }
    else{
        printf("none of them is max");
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int num1, num2, num3, max;
    printf("Enter three number : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2){
        if (num1>num3){
            max=num1;
        }
        else{
            max=num3;
        }
    }
    else{
        if (num2>num3){
            max=num2;
        }else{
        max=num3;
        }
    }
    printf("max amongst all is %d",max);
    return 0;
}
*/
//Q3--Write a C program to check whether a number is negative, positive or zero.
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    if (num>0){
        printf("number is positive");
    }
    else if(num<0){
        printf("number is negative");
    }
    else{
        printf("number is 0");
    }
    return 0;
}
*/
//Q4--Write a C program to check whether a number is divisible by 5 and 11 or not.
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if (num%5==0 && num%11==0){
        printf("divisible");
    }
    else{
        printf("not divisible");
    }
    return 0;
}
*/
//Q5--Write a C program to check whether a number is even or odd.
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    if (num%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}
*/
//Q6--Write a C program to check whether a year is leap year or not.
/*
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d",&year);
    if (((year%400==0) || (year%100!=0))&&(year%4==0)){
        printf("%d is Leap year",year);
    }
    else{
        printf("%d is Not leap year",year);
    }
    return 0;
}
*/
//Q7--Write a C program to check whether a character is alphabet or not.
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    if ((ch>'a'&&ch<'z')||(ch>'A'&&ch<'Z')){
        printf("%c is alphabet",ch);
    }
    else{
        printf("%c is not alphabet",ch);
    }
    return 0;
}
*/
//Q8--Write a C program to input any alphabet and check whether it is vowel or consonant.
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter alphabet: ");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            printf("%c is Vowel",ch);
        }
    else if((ch>'a'&& ch<'z')||(ch>'A'&& ch<'Z')){
        printf("%c is Consonant",ch);
    }
    else {
        printf("%c is not alphabet",ch);
    }
    return 0;
}
*/
//Q9--Write a C program to input any character and check whether it is alphabet, digit or special character.
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);
    if ((ch>'a'&&ch<'z')||(ch>'A'&&ch<'Z')){
        printf("%c is alphabet",ch);
    }
    else if(ch>'0'&&ch<'9'){
        printf("%c is digit",ch);
    }
    else{
        printf("%c is special character",ch);
    }
    return 0;
}
*/
//Q10--Write a C program to check whether a character is uppercase or lowercase alphabet.
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);
    if (isupper(ch)){
        printf("%c is uppercase alphabet",ch);
    }
    else if(islower(ch)){
        printf("%c is lowercase alphabet",ch);
    }
    else{
        printf("%c is not alphabet",ch);
    }
    return 0;
}
*/
//Q12--Write a C program to input month number and print number of days in that month.
/*
#include<stdio.h>
int main()
{
    int month;
    printf("Enter month number(1-12): ");
    scanf("%d",&month);
    if (month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        printf("month number %d has 31 days",month);
    }
    else if(month==4||month==6||month==9||month==11){
        printf("month number %d has 30 days",month);
    }
    else{
        printf("month number %d has 28 or 29 days",month);
    }
    return 0;
}
*/
//Q13--Write a C program to count total number of notes in given amount.
/*
#include<stdio.h>
int main()
{
    int amount, note500, note100, note50, note20, note10, note5, note2, note1;
    printf("Enter amount: ");
    scanf("%d",&amount);
    note500= note100= note50= note20= note10= note5= note2= note1=0;
    if (amount>=500){
        note500=amount/500;
        amount-=note500*500;
    }
    if (amount>=100){
        note100=amount/100;
        amount-=note100*100;
    }
    if (amount>=50){
        note50=amount/50;
        amount-=note50*50;
    }
    if (amount>=20){
        note20=amount/20;
        amount-=note20*20;
    }
    if (amount>=10){
        note10=amount/10;
        amount-=note10*10;
    }
    if (amount>=5){
        note5=amount/5;
        amount-=note5*5;
    }
    if (amount>=2){
        note2=amount/2;
        amount-=note2*2;
    }
    if (amount>=1){
        note1=amount;
    }
    printf("500:%d\n",note500);
    printf("100:%d\n",note100);
    printf("50:%d\n",note5);
    printf("20:%d\n",note20);
    printf("10:%d\n",note10);
    printf("5:%d\n",note5);
    printf("2:%d\n",note2);
    printf("1:%d\n",note1);
    int total;
    total=note500+note100+note50+note20+note10+note5+note2+note1;
    printf("total number of notes = %d",total);
    return 0;
}
*/
//Q14--Write a C program to input angles of a triangle and check whether triangle is valid or not.
/*
#include<stdio.h>
int main()
{
    int ang1, ang2, ang3;
    printf("Enter three angles: ");
    scanf("%d%d%d",&ang1, &ang2, &ang3);
    if (ang1+ang2+ang3==180 && ang1>0 && ang2>0 && ang3>0){
        printf("Valid triangle");
    }
    else{
        printf("not a triangle");
    }
    return 0;
}
*/
//Q15--Write a C program to input all sides of a triangle and check whether triangle is valid or not.
/*
#include<stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter three sides: ");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1+side2>side3){
        if(side2+side3>side1){
            if(side1+side3>side2){
                printf("Triangle is valid");
            }
            else{
            printf("triangle is not valid");
            }
        }
        else{
          printf("triangle is not valid");
        }
    }
    else{
        printf("triangle is not valid");
    }

    return 0;
}
*/
//Q16--Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
/*
#include<stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter three sides(keep it mind sum of any two side is greater then otheer): ");
    scanf("%d%d%d",&side1,&side2,&side3);
    if (side1==side2 && side2==side3){
        printf("triangle is equilateral triangle");
    }
    else if(side1==side2 || side2==side3 || side1==side3){
        printf("triangle is isosceles triangle");
    }
    else{
        printf("triangle is scalene triangle");
    }
    return 0;
}
*/
//Q17--Write a C program to find all roots of a quadratic equation.
/*
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,imaginary,discrimant;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);
    discrimant=(b*b)-(4*a*c);
    if (discrimant>0){
        root1=-b/(2*a) - sqrt(discrimant)/(2*a);
        root2=-b/(2*a) + sqrt(discrimant)/(2*a);
        printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if(discrimant==0){
        root1=root2=-b/(2*a);
        printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
    }
    else{
        root1=root2=-b/(2*a);
        imaginary=sqrt(-discrimant)/(2*a);
        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                root1, imaginary, root2, imaginary);

    }
    return 0;
}
*/
//Q18--Write a C program to calculate profit or loss.
/*
#include<stdio.h>
int main()
{
    int Costprice, Sellingprice, profit, loss;
    printf("Enter cost price: ");
    scanf("%d",&Costprice);
    printf("Enter selling price: ");
    scanf("%d",&Sellingprice);
    if (Sellingprice>Costprice){
        profit=Sellingprice-Costprice;
        printf("Profit: %d",profit);
    }
    else{
        loss=Costprice-Sellingprice;
        printf("Loss: %d",loss);
    }

    return 0;
}
*/
/*
Q19--Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/
/*
#include <stdio.h>

int main()
{
    int phy, chem, bio, math, comp;
    float per;
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);
    per = (phy + chem + bio + math + comp) / 5.0;
    printf("Percentage = %.2f\n", per);
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
*/
//if else---the end
#include<stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%d\n", age);
printf("%d\n", *ptr);
printf("%d\n", *(&age));

    return 0;
}
