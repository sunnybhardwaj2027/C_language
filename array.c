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
/*
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

    int i=0, j=0;
    for(i=0;i<n;i++){
        int max=arr[i];
        for(j=i+1;j<n;j++){
            if(arr[j]>max){
                int temp=max;
                max=arr[j];
      
                arr[j]=temp;
            }
        }
        arr[i]=max;
    }

    printf("\n");

    printf("second maximum element of the array is %d",arr[1]);

    return 0;
}
*/

// Q6--Write a C program to count total number of even and odd elements in an array
/*
#include <stdio.h>

int main()
{
    int n, count_Even=0, count_Odd=0;
    int arr[100];

    printf("Enter length of array: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("'%d' index elements: ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count_Even++;
        }

        else{
            count_Odd++;
        }
    }

    printf("number of Odd elements in the array: %d\n",count_Odd);
    printf("number of Even elements in the array: %d\n",count_Even);

    return 0;
}
*/

// Q7--Write a C program to count total number of negative elements in an array.
/*
#include <stdio.h>

int main()
{
    int n, count_Negative=0, count_positive=0;
    int arr[100];

    printf("Enter length of array: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("'%d' index elements: ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            count_Negative++;
        }

        else{
            count_positive++;
        }
    }

    printf("number of positive elements in the array: %d\n",count_positive);
    printf("number of Negative elements in the array: %d\n",count_Negative);

    return 0;
}
*/

// Q8--Write a C program to copy all elements from an array to another array
/*
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int n;

    printf("Enter length of array: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("'%d' index elements: ",i);
        scanf("%d",&arr1[i]);
    }

    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}
*/

//  Q9--C program to insert an element in array at specified position
/*
#include <stdio.h>

int main()
{
    int arr[100];
    int i, size, num, pos;

    printf("Enter size of the array : ");
    scanf("%d", &size);

    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);

    if(pos > size+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
        arr[pos-1] = num;
        size++; 

        printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
*/

// Q10--Write a C program to delete an element from an array at specified position
/*
#include <stdio.h>

int main()
{
    int arr[100];
    int i, size, num, pod;

    printf("Enter size of the array : ");
    scanf("%d", &size);

    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete : ");
    scanf("%d",&pod);

    if(pod > size+1 || pod <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else{
        for(int i=pod-1;i<size;i++){
            arr[i]=arr[i+1];
        }

        printf("Deleted array : ");
    for(int i=0;i<size-1;i++){
        printf("%d\t",arr[i]);
    }
    }


    return 0;
}
*/

// *****Q11--Write a C program to count frequency of each element in an array
/*
#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int i, j, count, size;

    printf("Enter size of the array : ");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }

    for(i=0;i<size;i++){
        count=1;
        for(j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }

    printf("\nFrequency of all elements of array : \n");

    for(i=0;i<size;i++){
        if(freq[i]!=0){
            printf("%d occurs %d times\n",arr[i],freq[i]);
        }
    }
    return 0;
}
*/

// Q12--Write a C program to print all unique elements in the array
/*
#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int i, j, size, count;

    printf("Enter size of an array : ");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }

    for(i=0;i<size;i++){
        count=1;
        for(j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }

    printf("\nall unique elements : \n");

    for(i=0;i<size;i++){
        if(freq[i]==1){
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}
*/
// Q13--Write a C program to count total number of duplicate elements in an array.
/*
#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int i, j, size, count, duplicate;

    printf("Enter size of an array : ");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }

    for(i=0;i<size;i++){
        count=1;
        for(j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }

    printf("\ntotal duplicate elements :");
    duplicate=0;

    for(i=0;i<size;i++){
        if(freq[i]==0){
            duplicate++;
        }
    }

    printf("%d",duplicate);

    return 0;
}
*/

// Q14--Write a C program to delete all duplicate elements from an array

// #include <stdio.h>

// int main()
// {
//     int arr[100], freq[100];
//     int i, j, size, count, duplicate;

//     printf("Enter size of an array : ");
//     scanf("%d",&size);

//     for(i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//         freq[i]=-1;
//     }

//     for(i=0;i<size;i++){
//         count=1;
//         for(j=i+1;j<size;j++){
//             if(arr[j]==arr[i]){
//                 count++;
//                 freq[j]=0;
//             }
//         }
//         if(freq[i]!=0){
//             freq[i]=count;
//         }
//     }

//     printf("\ntotal duplicate elements :");
//     duplicate=0;

//     for(i=0;i<size;i++){
//         if(freq[i]==0){
//             duplicate++;
//         }
//     }

//     printf("%d\n",duplicate);

//     printf("\narray after deleting duplicate elements :");

//     for(i=0;i<size;i++){
//         if(freq[i]==0){
//             for(j=i;j<size;j++){
//                 arr[j]=arr[j+1];
//             }
//         }
//     }

//     for(i=0;i<(size-duplicate);i++){
//         printf("%d\t",arr[i]);
//     }

//     return 0;
// }

/*
#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int i, j, size, count, duplicate;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (i = 0; i < size; i++) {
        count = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("\nTotal duplicate elements: ");
    duplicate = 0;

    for (i = 0; i < size; i++) {
        if (freq[i] == 0) {
            duplicate++;
        }
    }

    printf("%d\n", duplicate);

    printf("\nArray after deleting duplicate elements: ");

    for (i = 0; i < size; i++) {
        if (freq[i] != 0) {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}

*/

// Q15--Write a C program to merge two array to third array
/*
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int i, j, size1, size2;

    printf("Enter size of arr1 : ");
    scanf("%d", &size1);

    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of arr2 : ");
    scanf("%d", &size2);

    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }

    
    i = size1;
    
    for (j = 0; j < size2; j++) {
        arr3[i] = arr2[j];
        i++;
    }

    int size3 = size1 + size2;

    
    for (i = 0; i < size3; i++) {
        int max = arr3[i];
        for (j = i + 1; j < size3; j++) {
            if (arr3[j] > max) {
                int temp = max;
                max = arr3[j];
                arr3[j] = temp;
            }
        }
        arr3[i] = max;
    }

    printf("Merged sorted array in descending order:\n");

    for (i = 0; i < size3; i++) {
        printf("%d\t", arr3[i]);
    }

    return 0;
}
*/

// Q16--Write a C program to find reverse of an array
/*
#include <stdio.h>

int main()
{
    int arr[100];
    int first, second, size;

    printf("Enter size of the loop: ");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size/2;i++){
        first=arr[i];
        second=arr[size-i-1];
        arr[i]=second;
        arr[size-i-1]=first;
    }

    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/

// Q17--Write a C program to put even and odd elements of array in two separate array
/*
#include <stdio.h>

int main()
{
    int arr[100], Odd[100], Even[100], size, i;

    printf("Enter size of the array: ");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        Odd[i]=-1;
        Even[i]=-1;
    }

    for(i=0;i<size;i++){
        if(arr[i]%2==0){
            Even[i]=arr[i];
        }
        else {
            Odd[i]=arr[i];
        }
    }

    printf("Even numbers:\t ");
    for(i=0;i<size;i++){
        if(Even[i]!=-1){
            printf("%d\t",Even[i]);
        }
    }
    printf("\n");
    printf("Odd numbers:\t ");
    for(i=0;i<size;i++){
        if(Odd[i]!=-1){
            printf("%d\t",Odd[i]);
        }
    }
    
    return 0;
}

*/

// Q18--Write a C program to search an element in an array
/*
#include <stdio.h>

int main()
{
    int arr[100], search, i, size;

    printf("Enter size of the array: ");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&search);

    int found=0;

    for(i=0;i<size;i++){
        if(arr[i]==search){
            found=1;
            break;
        }
    }

    if(found==0){
        printf("%d is not available in array",search);
    }
    else{
        printf("%d occur at %d index in array",search, i);
    }

    return 0;
}
*/

// Q19--Write a C program to sort array elements in ascending or descending order
/*
#include <stdio.h>

int main()
{
    int arr[100], size, i, j;

    printf("Enter size of the array: ");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++){
        int min=arr[i];
        for(j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("sorted array in ascending order:\t");

    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/

// Q20--Write a C program to sort even and odd elements of array separately
/*
#include <stdio.h>

int main()
{
    int arr[100], Odd[100], Even[100], size, i, j;

    printf("Enter size of the array: ");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        Odd[i]=-1;
        Even[i]=-1;
    }

    for(i=0;i<size;i++){
        if(arr[i]%2==0){
            Even[i]=arr[i];
        }
        else {
            Odd[i]=arr[i];
        }
    }

    printf("Even numbers:\t ");
    for(i=0;i<size;i++){
        if(Even[i]!=-1){
            printf("%d\t",Even[i]);
        }
    }
    printf("\n");
    printf("Odd numbers:\t ");
    for(i=0;i<size;i++){
        if(Odd[i]!=-1){
            printf("%d\t",Odd[i]);
        }
    }

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(Even[j]>Even[i]){
                int temp = Even[i];
                Even[i]=Even[j];
                Even[j]=temp;
            }
        }
    }
    printf("\n");
    printf("sorted Even numbers:\t");
    for(i=0;i<size;i++){
        if(Even[i]!=-1){
            printf("%d\t",Even[i]);
        }
    }

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(Odd[j]>Odd[i]){
                int temp = Odd[i];
                Odd[i]=Odd[j];
                Odd[j]=temp;
            }
        }
    }

    printf("\n");
    printf("sorted Odd numbers:\t");
    for(i=0;i<size;i++){
        if(Odd[i]!=-1){
            printf("%d\t",Odd[i]);
        }
    }
    
    return 0;
}

*/

// Q21--Write a C program to left rotate an array.
/*
#include <stdio.h>

void rotate_Left(int arr[],int size);

int main()
{
    int arr[100], n, i, size;

    printf("Enter size of the array : ");
    scanf("%d",&size);

    printf("Enter elements of the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("input number of times array to roate : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    rotate_Left(arr,size);
    }

    printf("array after %d rotation: ",n);
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

void rotate_Left(int arr[],int size){
    int first=arr[0];

    int i;

    for(i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }

    arr[size-1]=first;
}
*/

// Q22--Write a C program to right rotate an array
/*
#include <stdio.h>

void rotate_Right(int arr[],int size);

int main()
{
    int arr[100], n, i, size;

    printf("Enter size of the array : ");
    scanf("%d",&size);

    printf("Enter elements of the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("input number of times array to roate : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    rotate_Right(arr,size);
    }

    printf("array after %d rotation: ",n);
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

void rotate_Right(int arr[],int size){
    int last=arr[size-1];

    int i;

    for(i=size-1;i>=1;i--){
        arr[i]=arr[i-1];
    }

    arr[0]=last;
}
*/
