// square number pattern.
// Q1--
/*
11111
11111
11111
11111
11111
*/
/*
#include <stdio.h>

int main()
{
    int row, column, i, j;

    printf("Enter numbers of rows : ");
    scanf("%d",&row);

    printf("Enter number of column : ");
    scanf("%d",&column);

    for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q2--
/*
11111
00000
11111
00000
11111
*/
/*
#include <stdio.h>

int main()
{
    int row, column, i, j;

    printf("Enter numbers of rows : ");
    scanf("%d",&row);

    printf("Enter number of column : ");
    scanf("%d",&column);

    for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            if(i%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

// Q3--
/*
01010
01010
01010
01010
01010
*/
/*
#include <stdio.h>

int main()
{
    int row, column, i, j;

    printf("Enter numbers of rows : ");
    scanf("%d",&row);

    printf("Enter number of column : ");
    scanf("%d",&column);

    for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            if(j%2==0){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

// Q4--
/*
11111
10001
10001
10001
11111
*/
/*
#include <stdio.h>

int main()
{
    int row, column, i, j;

    printf("Enter numbers of rows : ");
    scanf("%d",&row);

    printf("Enter number of column : ");
    scanf("%d",&column);

    for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            if(i==1 || i==row || j==1 || j==column){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

// Q5--
/*
#include <stdio.h>

int main()
{
    int row, col, i, j;

    printf("Enter numbers of rows : ");
    scanf("%d",&row);

    printf("Enter number of column : ");
    scanf("%d",&col);

    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(i == (row/2+1) && j == (col/2)+1){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}*/

// Q6--
/*
#include <stdio.h>

int main()
{
    int row, col, i, j;

    printf("Enter numbers of rows : ");
    scanf("%d",&row);

    printf("Enter number of column : ");
    scanf("%d",&col);

    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(i%2==0 && j%2 != 0){
                printf("0");
            }
            else if(i%2!=0 && j%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/**
 * C program to print box number pattern of 1's with 0 as center
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int centerRow, centerCol;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    /* Find center row and column */
    centerRow = (rows + 1) / 2;
    centerCol = (cols + 1) / 2;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            if(centerCol == j && centerRow == i)
            {
                printf("0");
            }
            else if(cols%2 == 0 && centerCol+1 == j)
            {
                if(centerRow == i || (rows%2 == 0 && centerRow+1 == i))
                    printf("0");
                else
                    printf("1");
            }
            else if(rows%2 == 0 && centerRow+1 == i)
            {
                if(centerCol == j || (cols%2 == 0 && centerCol+1 == j))
                    printf("0");
                else
                    printf("1");
            }
            else
            {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}