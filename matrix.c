// Q1--Write a C program to add two matrices

/*
#include <stdio.h>

int main()
{
    int size, row, col;
    printf("Enter size of the matrix : ");
    scanf("%d",&size);

    int matrix1[size][size], matrix2[size][size], Resultant_matrix[size][size];

    printf("Enter 1st matrix : \n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d\t",&matrix1[row][col]);
        }
    }

    printf("Enter 2nd matrix : \n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix2[row][col]);
        }
    }

    
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            Resultant_matrix[row][col]=matrix1[row][col]+matrix2[row][col];
        }
    }

    printf("matrix after addition of 1st and 2nd : \n");
    
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            printf("%d\t",Resultant_matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
*/

// Q2--Write a C program to subtract two matrices
/*
#include <stdio.h>

int main()
{
    int size, row, col;

    printf("Enter size of matrix : ");
    scanf("%d",&size);

    int matrix1[size][size], matrix2[size][size], resultant_matrix[size][size];

    printf("Enter elements of first matrix : \n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix1[row][col]);
        }
    }

    printf("Enter elements of second matrix : \n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix2[row][col]);
        }
    }

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            resultant_matrix[row][col]=matrix1[row][col]-matrix2[row][col];
        }
    }

    printf("resultant matrix after substraction : \n");
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            printf("%d\t",resultant_matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
*/

// Q3--Write a C program to perform Scalar matrix multiplication
/*
#include <stdio.h>

int main()
{
    int size, row, col, num;

    printf("Enter size of matrix : ");
    scanf("%d",&size);

    printf("num : ");
    scanf("%d",&num);

    int matrix[size][size];

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    printf("Matrix after scalar matrix multiplication :\n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            printf("%d\t",num*matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
*/

// Q4--Write a C program to multiply two matrices
/*
#include <stdio.h>

int main()
{
    int size, row, col, i, sum;

    printf("Enter size of array : ");
    scanf("%d",&size);

    int matrix1[size][size], matrix2[size][size], resultant_matrix[size][size]; 

    printf("Enter elements of first matrix :\n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix1[row][col]);
        }
        printf("\n");
    }

    printf("Enter elements of second matrix : \n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix2[row][col]);
        }
        printf("\n");
    }

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            sum =0;
            for(i=0;i<size;i++){
                sum+=matrix1[row][i]*matrix2[i][col];
            }
            resultant_matrix[row][col]=sum;
            printf("%d\t",resultant_matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
*/

// Q5--Write a C program to check whether two matrices are equal or not
/*
#include <stdio.h>

int main()
{
    int size, row, col, is_equal;

    printf("Enter size of matrix : ");
    scanf("%d",&size);

    int matrix1[size][size], matrix2[size][size];

    printf("Enter elements of first matrix : \n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix1[row][col]);
        }
        printf("\n");
    }

    printf("Enter elements of second matrix : \n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix2[row][col]);
        }
        printf("\n");
    }

    is_equal=1;

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            if(matrix1[row][col]!=matrix2[row][col]){
                is_equal=0;
                break;
            }
        }
    }

    if(is_equal==1){
        printf("\nmatrix1 and matrix2 is equal");
    }
    else{
        printf("\nmatrix1 and matrix2 is not equal");
    }
    return 0;
}
*/

// Q6--Write a C program to find sum of main diagonal elements of a matrix
/*
#include <stdio.h>

int main()
{
    int size, row, col, sum;

    printf("enter size of matrix : ");
    scanf("%d",&size);
    
    int matrix[size][size];

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    sum=0;

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            if(row==col){
                sum=sum+matrix[row][col];
            }
        }
    }

    printf("sum of the diagonal elements : %d",sum);
    return 0;
}
*/

// Q7--Write a C program to find sum of minor diagonal elements of a matrix
/*
#include <stdio.h>

int main()
{
    int size, row, col;

    printf("size of matrix : ");
    scanf("%d",&size);

    int matrix[size][size];

    printf("Enter elements for matrix : \n");
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    int sum=0;

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            if((row+col)==(size-1)){
                sum = sum + matrix[row][col];
            }
        }
    }

    printf("sum of minor diagonal is : %d",sum);
    return 0;
}
*/

// Q8--Write a C program to find sum of each row and column of a matrix.
/*
#include <stdio.h>

int main()
{
    int size, row, col, sum;

    printf("Enter size of matrix : ");
    scanf("%d",&size);

    int matrix[size][size];

    printf("Enter elements of matrix: \n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    for(row=0;row<size;row++){
        sum=0;
        for(col=0;col<size;col++){
            
            sum=sum+matrix[row][col];
        }
        printf("sum of row %d is %d\n",row+1,sum);
    }

    printf("\n");

    for(row=0;row<size;row++){
        sum=0;
        for(col=0;col<size;col++){
            
            sum=sum+matrix[col][row];
        }
        printf("sum of col %d is %d\n",row+1,sum);
    }
    return 0;
}
*/

// Q9--Write a C program to interchange diagonals of a matrix
/*
#include <stdio.h>

int main()
{
    int size, row, col;

    printf("Enter size of the matrix : ");
    scanf("%d",&size);

    int matrix[size][size];

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            if(row==col){
                int temp=matrix[row][col];
                matrix[row][col]=matrix[row][size-1-row];
                matrix[row][size-1-row]=temp;
            }
        }
    }

    printf("\nmatrix after diagonals interchanged : \n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            printf("%d\t",matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
*/

// Q10--Write a C program to find upper triangular matrix
/*
#include <stdio.h>

int main()
{
    int size, row, col;

    printf("Enter size of matrix : ");
    scanf("%d",&size);

    printf("Enter elements of matrix : \n");

    int matrix[size][size];

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    int Isupper=1;

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            if((row>col) && matrix[row][col]!=0){
                Isupper=0;
                break;
            }
        }
    }


    if(Isupper==1){
        printf("Input matrix is upper triangular matrix.");
    }
    else{
        printf("Input matrix is not upper triangular matrix.");
    }


    return 0;
}
*/

// Q11-Write a C program to find lower triangular matrix
/*
#include <stdio.h>

int main()
{
    int size, row, col;

    printf("Enter size of matrix : ");
    scanf("%d",&size);

    printf("Enter elements of matrix : \n");

    int matrix[size][size];

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    int Islower=1;

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            if((row<col) && matrix[row][col]!=0){
                Islower=0;
                break;
            }
        }
    }


    if(Islower==1){
        printf("Input matrix is lower triangular matrix.");
    }
    else{
        printf("Input matrix is not lower triangular matrix.");
    }


    return 0;
}
*/

// Q12--Write a C program to find sum of upper triangular matrix
/*
#include <stdio.h>

int main()
{
    int size, row, col;

    printf("Enter size of matrix : ");
    scanf("%d",&size);

    int matrix[size][size];

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    int sum = 0;

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            if(row<col){
                sum+=matrix[row][col];
            }
        }
    }

    printf("\nsum of upper triangular matrix = %d",sum);
    return 0;
}
*/

// Q13--Write a C program to find sum of lower triangular matrix
/*
#include <stdio.h>

int main()
{
    int size, row, col;

    printf("Enter size of matrix : ");
    scanf("%d",&size);

    int matrix[size][size];

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    int sum = 0;

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            if(row>col){
                sum+=matrix[row][col];
            }
        }
    }

    printf("\nsum of lower triangular matrix = %d",sum);
    return 0;
}
*/

// Q14--Write a C program to find transpose of a matrix
/*
#include <stdio.h>

int main()
{
    int size, row, col;

    printf("Enter size of matrix : ");
    scanf("%d",&size);

    int Original_matrix[size][size], Transpose_matrix[size][size];

    printf("Enter elements of matrix :\n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&Original_matrix[row][col]);
        }
        printf("\n");
    }

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            Transpose_matrix[row][col]=Original_matrix[col][row];
        }
    }

    printf("Transpose matrix :\n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            printf("%d\t",Transpose_matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
*/

// Q15--Write a C program to find determinant of a matrix
/*
#include <stdio.h>

int main()
{
    int matrix[3][3], row, col;

    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    int a, b, c, d, e, f, g, h, i;
    a=matrix[0][0];
    b=matrix[0][1];
    c=matrix[0][2];
    d=matrix[1][0];
    e=matrix[1][1];
    f=matrix[1][2];
    g=matrix[2][0];
    h=matrix[2][1];
    i=matrix[2][2];

    printf("Determinant = %d",a*(e*i-f*h)-b*(d*i-f*g)+c*(d*h-e*g));
    return 0;
}
*/

// Q16--Write a C program to check Identity matrix
/*
#include <stdio.h>

int main()
{
    int size, row, col;

    printf("Enter size of matrix: ");
    scanf("%d",&size);

    int matrix[size][size];

    printf("Enter elements of matrix : \n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    int Is_identity=1;
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            if(row==col){
                if(matrix[row][col]!=1){
                    Is_identity=0;
                    break;
                }
            }
            else{
                if(matrix[row][col]!=0){
                    Is_identity=0;
                    break;
                }
            }
        }
    }

    if(Is_identity==1){
        printf("\nGiven matrix is an Identity matrix\n");
        for(row=0;row<size;row++){
            for(col=0;col<size;col++){
                printf("%d\t",matrix[row][col]);
            }
            printf("\n");
        }
    }
    else{
        printf("\nGiven matrix is not an Identity matrix\n");
    }
    return 0;
}
*/

// Q17--Write a C program to check Sparse matrix
/*
#include <stdio.h>

int main()
{
    int i, j, row, col;

    printf("Enter number of rows: ");
    scanf("%d",&row);

    printf("Enter number of column: ");
    scanf("%d",&col);

    int matrix[row][col];

    printf("Enter elements of (%d * %d)matrix\n",row,col);

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }

    int total=0;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(matrix[i][j]==0){
                total++;
            }
        }
    }

    if(total>((row*col)/2)){
        printf("\nGiven matrix is sparse matrix:\n");
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                printf("%d\t",matrix[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Given matrix is not sparse matrix:\n");
    }
    return 0;
}
*/

// Q18--Write a C program to check Symmetric matrix

/*
#include <stdio.h>

int main()
{
    int size, row, col;

    printf("Enter size of matrix: ");
    scanf("%d",&size);

    int matrix1[size][size], matrix2[size][size];

    printf("Enter enlements of matrix:\n");

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            scanf("%d",&matrix1[row][col]);
        }
        printf("\n");
    }

    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            matrix2[row][col]=matrix1[col][row];
        }
    }

    int Is_symmetric = 1;
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            if(matrix1[row][col]!=matrix2[row][col]){
                Is_symmetric=0;
                break;
            }
        }
    }

    if(Is_symmetric==1){
        printf("\nGiven matrix is symmetric\n");
        for(row=0;row<size;row++){
            for(col=0;col<size;col++){
                printf("%d\t",matrix1[row][col]);
            }
            printf("\n");
        }
    }
    else{
        printf("\nGiven matrix is not symmetric\n");
    }
    return 0;
}
*/


