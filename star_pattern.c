// Q1--Square star pattern
/*
****
****
****
****
*/
/*
#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&N);

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q2--hollow square star pattern
/*
*****
*   *
*   *
*   *
*****
*/
/*
#include <stdio.h>

int main()
{
    int N, i , j, k;

    printf("Enter number of rows : ");
    scanf("%d",&N);

    for(i=0;i<N;i++){
        if (i==0 || i==N-1){
            for(j=0;j<N;j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(k=0;k<N-2;k++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q3--

// Q4--Rhombus star pattern
/*
    *****
   *****
  *****
 *****
*****
*/
/*
#include <stdio.h>

int main()
{
    int N, i, j, k;
    printf("Enter number of rows: ");
    scanf("%d",&N);

    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            printf(" ");
        }

        for(k=0;k<N;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q5--hollow rhombus star pattern

#include <stdio.h>

int main()
{
    int N, i, j, k;
    printf("Enter number of rows: ");
    scanf("%d",&N);

    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            printf(" ");
        }

        if(i==0 || i==N-1){
            for(k=0;k<N;k++){
                printf("*");
        }
        }
        else{
            printf("*");
            for(k=0;k<(N-2);k++){
                printf(" ");
            }
            printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

