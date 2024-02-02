//Q1--Write a C program to create, initialize and use pointers.
/*
#include<stdio.h>
int main()
{
    int x=10;
    float price=100.00;
    char star='*';

    int *ptr1=&x;
    float *ptr2=&price;
    char *ptr3=&star;

    printf("x = %d\t address=%u\n",*(ptr1),ptr1);
    printf("price = %f\t address=%u\n",*ptr2,ptr2);
    printf("star = %c\t address=%u\n",*ptr3,ptr3);
    return 0;
}
*/
//Q2--Write a C program to add two numbers using pointers.
/*
#include<stdio.h>

int main()
{
    int x=10;
    int y=20;
    int *x_ptr=&x;
    int *y_ptr=&y;

    printf("sum: %d",*(x_ptr)+*(y_ptr));
}
*/
//M2(using function--call by value)
/*
#include<stdio.h>

void add(int a, int b);

int main()
{
    int x= 10;
    int y= 20;

    add(x,y);
    return 0;
}

void add(int a, int b)
{
    printf("sum: %d",a+b);
}
*/
// Q3--Write a C program to swap two numbers using pointers
/*
#include <stdio.h>

void swap(int *a, int *b); 

int main()
{
    int n, m;

    printf("enter two numbers: ");
    scanf("%d%d",&n,&m);

    swap(&n,&m);

    printf("n: %d\nm: %d",n,m);
    return 0;
}

void swap(int *a, int *b){
    int t;
    t=*b;
    *b=*a;
    *a=t;
}
*/
// Q4--Write a C program to input and print array elements using pointer.
/*
#include <stdio.h>

int main()
{
    int num[100];
    int *ptr=num;

    printf("Enter number: ");
    int i=0;
    for(i=0;i<5;i++){
        scanf("%d",ptr+i);
    }
    int j=0;
    for(j=0;j<5;j++){
        printf("%d\n",*(ptr+j));
    }
    return 0;
}
*/
// Q5--Write a C program to copy one array to another using pointers.
/*
#include <stdio.h>

int main()
{
    int arr1[100];
    int arr2[100];
    int *ptr1=arr1;
    int *ptr2=arr2;

    int i=0;
    for(i=0;i<5;i++){
        scanf("%d",ptr1+i);
    }

    int j=0;
    for(j=0;j<5;j++){
        *(ptr2+j)=*(ptr1+j);
    }

    int k=0;
    for(k=0;k<5;k++){
        printf("%d\n",*(ptr2+k));
    }

    return 0;
}
*/
// Q6--Write a C program to swap two arrays using pointers
/*
#include <stdio.h>

int main()
{
    int arr1[100];
    int arr2[100];
    int *ptr1=arr1;
    int *ptr2=arr2;

    
    for(int i=0;i<5;i++){
        scanf("%d",ptr1+i);  
    }

    printf("\n");

    for(int i=0;i<5;i++){
        scanf("%d",ptr2+i);
    }
    printf("\n");

    int temp[100];
    int j=0;
    for(j=0;j<5;j++){
        temp[j]=*(ptr1+j);
        *(ptr1+j)=*(ptr2+j);
        *(ptr2+j)=temp[j];

    }

    
    for(int k=0;k<5;k++){
        printf("%d\n",*(ptr1+k));
    }

    printf("\n");

    for(int k=0;k<5;k++){
        printf("%d\n",*(ptr2+k));
    }
    return 0;
}
*/

// Q7--Write a C program to reverse an array using pointers.
/*
#include <stdio.h>

void reverse_array(int *ptr,int n);

int main()
{
    int arr[100];
    int *ptr=arr;
    int n;
    printf("no of elements in array: ");
    scanf("%d",&n);

    int i=0;
    while(i<n){
        scanf("%d",ptr+i);
        i++;
    }
    printf("\n");
    reverse_array(ptr,n);

    return 0;
}

void reverse_array(int *ptr,int n){
    int i=0;
    while(i<n){
        printf("%d\n",*(ptr+i));
        i++;
    }
}
*/

// Q8--Write a C program to search an element in array using pointers

// #include <stdio.h>

// void search_element(int *ptr, int n, int a);

// int main()
// {
//     int arr[100];
//     int *ptr=arr;
//     int n,a;
//     printf("no of elements in array: ");
//     scanf("%d",&n);

//     int i=0;
//     while(i<n){
//         scanf("%d",ptr+i);
//         i++;
//     }

//     printf("\n");

//     printf("Enter element that you want to search: ");
//     scanf("%d",&a);

//     search_element(ptr,n,a);

//     return 0;
// }

// void search_element(int *ptr, int n, int a){
//     int found=0;
//     int i=0;
//     while(i<n){
//         if(*(ptr+i)==a){
//             found=1;
//             break;
//         }
//         i++;
//     }
//         if(found){
//             printf("element is present in array\n");
//         }
//         else{
//             printf("element is not present in array\n");
//         }
// }
/*

#include <stdio.h>

void search_element(int *ptr, int n, int a);

int main()
{
    int arr[100];
    int *ptr = arr;
    int n, a;
    printf("Number of elements in array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Enter the element that you want to search: ");
    scanf("%d", &a);

    search_element(ptr, n, a);

    return 0;
}

void search_element(int *ptr, int n, int a)
{
    int found = 0;
    int i = 0;
    while (i < n) {
        if (*(ptr + i) == a) {
            found = 1;
            break;
        }
        i++;
    }
    if (found) {
        printf("Element is present in the array.\n");
    } else {
        printf("Element is not present in the array.\n");
    }
}
*/
// Q9--Write a C program to access two dimensional array using pointers
/*
#include <stdio.h>

int main()
{
    int matrix[3][3];
    int (*ptr)[3] = matrix;

    printf("Enter the elements of the matrix:\n");
    int i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            scanf("%d", &(*(*(matrix + i) + j)));
            j++;
        }
        i++;
    }

    printf("Matrix:\n");
    int a = 0;
    while (a < 3) {
        int b = 0;
        while (b < 3) {
            printf("%d ", *(*(matrix + a) + b));
            b++;
        }
        printf("\n");
        a++;
    }

    return 0;
}
*/
// Q10--Write a C program to add two matrix using pointers
/*
#include <stdio.h>

int main()
{
    int matrix1[3][3], matrix2[3][3];
    int (*ptr1)[3] = matrix1, (*ptr2)[3] = matrix2;

    printf("Enter the elements of the matrix1:\n");
    int i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            scanf("%d", &(*(*(matrix1 + i) + j)));
            j++;
        }
        i++;
    }
    printf("\n");
    printf("Enter the elements of the matrix2:\n");
    int a = 0;
    while (a < 3) {
        int b = 0;
        while (b < 3) {
            scanf("%d", &(*(*(matrix2 + a) + b)));
            b++;
        }
        a++;
    }

    printf("Matrix:\n");
    int c = 0;
    while (c < 3) {
        int d = 0;
        while (d < 3) {
            printf("%d ", (*(*(matrix1 + c) + d)+(*(*(matrix2 + c) + d))));
            d++;
        }
        printf("\n");
        c++;
    }
    return 0;
}
*/

// Q11--Write a C program to multiply two matrix using pointers.
/*
#include <stdio.h>

int main()
{
    int matrix1[3][3], matrix2[3][3];
    int (*ptr1)[3] = matrix1, (*ptr2)[3] = matrix2;

    printf("Enter the elements of the matrix1:\n");
    int i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            scanf("%d", &(*(*(matrix1 + i) + j)));
            j++;
        }
        i++;
    }
    printf("\n");
    printf("Enter the elements of the matrix2:\n");
    int a = 0;
    while (a < 3) {
        int b = 0;
        while (b < 3) {
            scanf("%d", &(*(*(matrix2 + a) + b)));
            b++;
        }
        a++;
    }

    printf("Matrix:\n");
    int c = 0;
    while (c < 3) {
        int d = 0;
        while (d < 3) {
            printf("%d ", (*(*(matrix1 + c) + d)*(*(*(matrix2 + c) + d))));
            d++;
        }
        printf("\n");
        c++;
    }
    return 0;
}
*/
// Q12--Write a C program to find length of string using pointers
/*
#include <stdio.h>

int main()
{
    char str[100];
    char *ptr=str;

    printf("Enter string: ");
    scanf("%[^\n]",ptr);

    int i=0;
    int count=0;
    while(*(ptr+i)!='\0'){
        count++;
        i++;
    }
    printf("length = %d",count);
    return 0;
}
*/
// Q13--Write a C program to copy one string to another using pointers
/*
#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];
    char *ptr1=str1;
    char *ptr2=str2;

    printf("Enter string: ");
    scanf("%[^\n]",ptr1);

    int i=0;
    while(*(ptr1+i)!='\0'){
        *(ptr2+i)=*(ptr1+i);
        i++;
    }
    *(ptr2+i)='\0';

    printf("str2 = %s",str2);
    return 0;
}
*/

// Q14--Write a C program to concatenate two strings using pointers
/*
#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    char str3[200];

    char *ptr1 = str1;
    char *ptr2 = str2;
    char *ptr3 = str3;

    printf("Enter first string: ");
    scanf("%[^\n]", ptr1);

    getchar(); 

    printf("Enter second string: ");
    scanf("%[^\n]", ptr2);
    
    int i = 0, j = 0;
    
    while (*(ptr1 + i) != '\0') {
        *(ptr3 + i) = *(ptr1 + i);
        i++;
    }

    
    while (*(ptr2 + j) != '\0') {
        *(ptr3 + i) = *(ptr2 + j);
        i++;
        j++;
    }

    
    *(ptr3 + i) = '\0';

    printf("str3 = %s\n", str3);

    return 0;
}
*/

// Q15--Write a C program to compare two strings using pointers
/*
#include <string.h>
#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];

    char *ptr1=str1;
    char *ptr2=str2;

    printf("Enter first string: ");
    scanf("%[^\n]",ptr1);

    getchar();

    printf("Enter second string: ");
    scanf("%[^\n]",ptr2);

    int len1=strlen(str1);
    int len2=strlen(str2);

    int i=0,j=0;

    if(len1>=len2){
        while(*(ptr1+i)!='0'){
            if(*(ptr1+i)==*(ptr2+i)){
                i++;
            }
            else if(*(ptr1+i)>*(ptr2+i)){
                printf("str1 is greater string");
                break;
            }
            else{
                printf("str2 is graeter string");
                break;
            }
        }
    }

    else{
        while(*(ptr2+i)!='0'){
            if(*(ptr2+i)==*(ptr1+i)){
                i++;
            }
            else if(*(ptr2+i)>*(ptr1+i)){
                printf("str2 is greater string");
                break;
            }
            else{
                printf("str1 is graeter string");
                break;
            }
        }
    }



    return 0;
}
*/

// Q16--Write a C program to find reverse of a string using pointers
/*
#include <string.h>
#include <stdio.h>

int main()
{
    char str[100];
    char *ptr=str;

    printf("Enter string: ");
    scanf("%[^\n]",ptr);

    char first, second;
    int i=0;
    int len=strlen(str);

    while(i<len/2){
        first=*(ptr+i);
        second=*(ptr+len-i-1);
        *(ptr+i)=second;
        *(ptr+len-i-1)=first;
        i++;
    }

    printf("reverse string : %s",str);

    return 0;
}
*/

// Q17--Write a C program to sort array using pointers.
/*
#include <stdio.h>

int main()
{
    int num[100];
    int n;

    printf("size of array: ");
    scanf("%d",&n);

    printf("Original array: ");

    for(int i=0;i<n;i++){
        printf("%d index: ",i);
        scanf("%d",&num[i]);
    }

    int i=0,j=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(num[i]>num[j]){
                int temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }

    printf("reverse_array: ");
    for(int k=0;k<n;k++){
        printf("%d\t",num[k]);
    }

    return 0;
}
*/
// problem****
// Q18--proble***
