//Q1--Write a C program to read and print elements of array. � using recursion.
/*
#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        printf("%d index: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/
//M-2
/*
#include<stdio.h>
int main()
{
    int arr[5];
    int *ptr=arr;
    for(int i=0;i<5;i++){
        printf("%d index: ",i);
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<5;i++){
        printf("%d\t",*(ptr+i));
    }
    return 0;
}
*/
//M-3
/*
#include<stdio.h>

void printArrey(int arr[],int start,int len);

int main()
{
    int n;

    printf("Enter number of array elements: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("%d index: ",i);
        scanf("%d",&arr[i]);
    }
    printArrey(arr,0,n);
    return 0;
}

void printArrey(int arr[],int start,int len)
// TODO (ashut#1#): build and run
{
    if(start>=len){
        return;
    }
    printf("%d\t",arr[start]);
    printArrey(arr,start+1,len);
}
*/

//Q2--Write a C program to print all negative elements in an array.
//m--1
/*
#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);

    int arr[n];
    int *ptr=arr;
    for(int i=0;i<n;i++){
        printf("%d index: ",i);
        scanf("%d",(ptr+i));
    }

    for(int i=0;i<n;i++){
        if(*(ptr+i)<0){
            printf("%d\t",*(ptr+i));
        }
    }
    return 0;
}
*/
//M--2
/*
#include<stdio.h>

void print_Negative(int arr[],int start,int len);

int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);

    int arr[n];
    int *ptr=arr;
    for(int i=0;i<n;i++){
        printf("%d index: ",i);
        scanf("%d",(ptr+i));
    }

    print_Negative(arr,0,n);
    return 0;
}

void print_Negative(int arr[],int start,int len)
{
    if(start>=len){
        return;
    }
    if(arr[start]<0){
        printf("%d\t",arr[start]);
    }
    print_Negative(arr,start+1,len);
}
*/

//Q3--Write a C program to find sum of all array elements. � using recursion.
//m--1
/*
#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elemenets in array: ");
    scanf("%d",&n);

    int arr[n];
    int *ptr=arr;
    for(int i=0;i<n;i++){
        printf("%d index: ",i);
        scanf("%d",(ptr+i));
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=*(ptr+i);
    }
    printf("sum = %d",sum);
    return 0;
}
*/
//m--2-using recursion.
/*
#include<stdio.h>

int sum_of_array(int arr[],int start,int len);

int main()
{
    int n;
    printf("Enter numbers of elements is there in array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d index: ",i);
        scanf("%d",&arr[i]);
    }

    printf("sum : %d",sum_of_array(arr,0,n));
    return 0;
}

int sum_of_array(int arr[],int start,int len)
{
    if(start>=len){
        return 0;
    }
    return arr[start]+sum_of_array(arr,start+1,len);
}
*/

//Q4--Write a C program to find maximum and minimum element in an array. � using recursion.
//M-1
/*
#include<stdio.h>

int main()
{
    int n,max,min;
    printf("Enter total number of element is there in array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d index: ",i);
        scanf("%d",&arr[i]);
    }

    max=arr[0]; min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("max: %d\n",max);
    printf("min: %d\n",min);
    return 0;
}
*/

// Q5--Write a C program to find second largest element in an array.

#include <stdio.h>

int main()
{
    int arr[100];
    int n;

    printf("Enter length of string: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0];

    int i=0, j=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]>max){
                int temp=max;
                max=arr[j];
                arr[j]=temp;
            }
        }
        arr[i]=max;
    }

    printf("second maximum element in array is %d",arr[2]);
    return 0;
}