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
    int row, i, j;
    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=i+1;j<row;j++){
            printf(" ");
        }
        if(i == 0 || i == (row-1)){
            for(j=0;j<row;j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(j=0;j<(row-2);j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
// Q6--mirrored rhombus star pattern
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
    int row, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }

        for(j=0;j<row;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q7--hollow mirrored rhombus star pattern
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
    int row, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }

        if(i == 0 || i == (row-1)){
            for(j=0;j<row;j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(j=0;j<(row-2);j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q8--right triangle star pattern
/*
*
**
***
****
*****
*/
/*
#include <stdio.h>

int main()
{
    int row, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q9--hollow triangle star pattern
/*
*
**
* *
*  *
*****
*/
/*
#include <stdio.h>

int main()
{
    int row, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i = 0;i<row;i++){
        if(i == 0 || i == 1 || i == (row-1)){
            for(j=0;j<=i;j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(j=0;j<=(i-2);j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q10--mirrored right triangle star pattern
/*
    *
   **
  ***
 ****
*****
*/
/*
#include <stdio.h>

int main()
{
    int row, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=i+1;j<row;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q11--hollow mirrored right triangle star pattern
/*
    *
   **
  * *
 *  *
*****
*/
/*
#include <stdio.h>

int main()
{
    int row, i , j;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=i+1;j<row;j++){
            printf(" ");
        }
        if(i == 0 || i == 1 || i == (row-1)){
            for(j=0;j<=i;j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(j=0;j<=(i-2);j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q12--inverted right triangle star patter
/*
*****
****
***
**
*
*/
/*
#include <stdio.h>

int main()
{
    int row, i, j;

    printf("number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=i;j<row;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q13--hollow inverted right triangle star pattern
/*
*****
*  *
* *
**
*
*/
/*
#include <stdio.h>

int main()
{
    int row, i, j;

    printf("Enter numbers of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        if(i == 0 || i == (row-2) || i == (row-1)){
            for(j=i;j<row;j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(j=i;j<(row-2);j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q14--inverted mirrored right triangle star pattern
/*
*****
 ****
  ***
   **
    *
*/
/*
#include <stdio.h>

int main()
{
    int row, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(j=i;j<row;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q15--hollow inverted mirrored right triangle star pattern
/*
*****
 *  *
  * *
   **
    *
*/
/*
#include <stdio.h>

int main()
{
    int row, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }

        if(i == 0 || i == (row-1) || i == (row-2)){
            for(j=i;j<row;j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(j=i;j<(row-2);j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q16--pyramid star pattern
/*
     *     
    ***    
   *****   
  *******  
 ********* 
 */
/*
#include <stdio.h>

int main()
{
    int row, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=i;j<row;j++){
            printf(" ");
        }

        for(j=0;j<(2*i+1);j++){
            printf("*");
        }

        for(j=i;j<row;j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q17--hollow pyramid star pattern
/*
    *
   * *
  *   *
 *     *
*********
*/
/*
#include <stdio.h>

int main()
{
    int row, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=i+1;j<row;j++){
            printf(" ");
        }

        if(i == 0 || i == (row-1)){
            for(j=0;j<(2*i+1);j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(j=0;j<(2*i-1);j++){
                printf(" ");
            }
            printf("*");
        }

        for(j=i+1;j<row;j++){
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}
*/

// Q18--inverted pyramid star pattern
/*
*********
 *******
  *****
   ***   
    *
*/
/*
#include <stdio.h>

int main()
{
    int row, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }

        for(j=0;j<((2*row)-(2*i+1));j++){
            printf("*");
        }

        for(j=0;j<i;j++){
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}
*/

// Q19--hollow inverted pyramid star pattern
/*
*********
 *     *
  *   *
   * *
    *
*/
/*
#include <stdio.h>

int main()
{
    int row, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=0;i<row;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }

        if(i == 0 || i == (row-1)){
            for(j=2*i+1;j<=((2*row)-1);j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(j=0;j<((2*row)-(2*i+3));j++){
                printf(" ");
            }
            printf("*");
        }

        for(j=0;j<i;j++){
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}
*/

// Q20-half diamond star pattern
/*
*
**
***
****
*****
****
***
**
*
*/
/*
#include <stdio.h>

int main()
{
    int rows, column, i, j;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    column=1;

    for(i=1;i<2*rows;i++){
        for(j=1;j<=column;j++){
            printf("*");
        }

        if(i<rows){
            column++;
        }

        else{
            column--;
        }

        printf("\n");
    }
    return 0;
}
*/

// Q21--mirrored half diamond star pattern
/*
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
*/
/*
#include <stdio.h>

int main()
{
    int rows, column, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    column = 1;
    for(i=1;i<2*rows;i++){
        for(j=column;j<rows;j++){
            printf(" ");
        }

        for(j=1;j<=column;j++){
            printf("*");
        }

        if(i<rows){
            column++;
        }

        else{
            column--;
        }

        printf("\n");
    }
    
    return 0;
}
*/

// Q22--diamond star pattern
/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
/*
#include <stdio.h>

int main()
{
    int rows, column, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    column = 1;

    for(i=1;i<2*rows;i++){
        for(j=column;j<rows;j++){
            printf(" ");
        }

        for(j=1;j <= (2 * column - 1);j++){
            printf("*");
        }

        if(i<rows){
            column++;
        }
        else{
            column--;
        }

        printf("\n");
    }
    return 0;
}
*/

// Q23--hollow diamond star pattern
/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
/*
#include <stdio.h>

int main()
{
    int rows, column, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(j=i;j<=rows;j++){
            printf("*");
        }
        for(j=1;j<i;j++){
            printf(" ");
        }

        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=i;j<=rows;j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=i;j<rows;j++){
            printf(" ");
        }

        for(j=i;j<rows;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

// Q24--right arrow star pattern
/*
*****
  ****
    ***
      **
        *
      **
    ***
  ****
*****
*/
/*
#include <stdio.h>

int main()
{
    int rows, column, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    column=1;

    for(i=1;i<2*rows;i++){
        for(j=2;j<(2*column);j++){
            printf(" ");
        }

        for(j=column;j<=rows;j++){
            printf("*");
        }

        if(i<rows){
            column++;
        }
        else{
            column--;
        }

        printf("\n");
        
    }
    return 0;
}
*/

// Q25--left arrow star pattern
/*
    *****
   ****
  ***
 **
*
 **
  ***
   ****
    *****
*/
/*
#include <stdio.h>

int main()
{
    int rows, column, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    column=1;

    for(i=1;i<2*rows;i++){
        for(j=column;j<rows;j++){
            printf(" ");
        }

        for(j=column;j<=rows;j++){
            printf("*");
        }

        if(i<rows){
            column++;
        }
        else{
            column--;
        }

        printf("\n");
    }
    return 0;
}
*/

// Q26--plus star pattern
/*
    +
    +
    +
    +
+++++++++
    +
    +
    +
    +
*/
/*
#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    for(i=1;i<2*rows;i++){
        if(i==rows){
            for(j=1;j<2*rows;j++){
                printf("+");
            }
        }
        else{
            for(j=1;j<rows;j++){
                printf(" ");
            }
            printf("+");
        }

        printf("\n");
    }
    return 0;
}
*/

// Q27--X star pattern
/*
#include <stdio.h>

int main()
{
    int rows, column, i , j;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    column=1;

    for(i=1;i<2*rows;i++){
        for(j=1;j<column;j++){
            printf(" ");
        }
        printf("*");

        for(j=column;j<rows;j++){
            printf(" ");
        }

        for(j=column;j<rows;j++){
            printf(" ");
        }
        printf("*");

        if(i<rows){
            column++;
        }
        else{
            column--;
        }

        printf("\n");

    }
    return 0;
}
*/
/*
*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *
*/
/*
#include <stdio.h>

int main()
{
    int rows, i , j;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    for(i=1;i<2*rows;i++){
        for(j=1;j<2*rows;j++){
            if(j==i || j==(2*rows-i)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

// Q28--Eight star pattern
/*
 ***
*   *
*   *
*   *
 ***
*   *
*   *
*   *
 ***
*/
/*
#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    for(i=1;i<2*rows;i++){
        if(i==1 || i==rows || i==(2*rows-1)){
            printf(" ");
            for(j=1;j<(rows-1);j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(j=1;j<(rows-1);j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

