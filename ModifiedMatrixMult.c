// C program to multiply two square matrices.
#include <stdio.h>
#include <time.h>
#define N 512
 
// This function multiplies mat1[][] and mat2[][],
// and stores the result in res[][]



void multiply(int mat1[][N], int mat2[][N], int res[][N])
{
    int i, j, k;
    for (j=0 ; j<N ; j++){
         for (i=0 ; i<N ; i++){
            res[i][j] = 0;
         }
         for (k=0 ; k<N ; k++){
            for (i=0 ; i<N ; i++){
            res[i][j] += mat1[i][k] * mat2[k][j];
         }
         }
    }
}


 
int main()
{
    int n=512;
    int mat1[n][n];
    int mat2[n][n];
    
    int row, col;
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            // Checking if row is equal to column 
            if (row == col)
                mat1[row][col]=1;
            else
                mat1[row][col]=0;;
        } 
    }   
    
        
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            // Checking if row is equal to column 
            if (row == col)
                mat2[row][col]=1;
            else
                mat2[row][col]=0;;
        } 
    }  
    
    

 
    int res[N][N]; // To store result
    int i, j;
    
    clock_t tic = clock();
    multiply(mat1, mat2, res);
    clock_t toc = clock();
    
 
    printf("Result matrix is \n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
    printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
 
    return 0;
    



}