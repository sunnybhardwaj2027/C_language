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



