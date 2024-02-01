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

