#include<stdio.h>
int main ()
{
    int matrix1[150][150],matrix2[150][150],r1,c1,r2,c2,n,b,c,e,sum=0,
    a[150][150],s[150][150],m[150][150],d[150][150],t1[150][150],t2[150][150],in[150][150],det1,det2,det3,det4;
    // Entering elements in the first matrix
    printf("\nEnter number of rows and columns of the first matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the elements in the first matrix: \n");
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("The given matrix is :\n");
    for (int i = 0; i < c1; i++)
    {
        printf("\n\n");
        for (int j = 0; j < r1; j++)
        {
            printf("%d\t",matrix1[i][j]);
        }
    }
    
    // Entering elements in the first matrix
    printf("\nEnter number of rows and elements of the first matrix:\n");
    scanf("%d %d",&r2,&c2);
    printf("Enter the elements in the second matrix: \n");
    for (int i = 0; i < c2; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("The given matrix is :\n");
    for (int i = 0; i < c2; i++)
    {
        printf("\n\n");
        for (int j = 0; j < r2; j++)
        {
            printf("%d\t",matrix2[i][j]);
        }
    }

    //Options 
    printf("\n\n\nChoose the operation you want to do:\n");
    printf("1.Addition of the matrices\t\t");
    printf("2.Substraction of the matrices\n");
    printf("3.Multiplication of the matrices\t");
    printf("4.Division of the matrices\n");
    printf("5.Transpose of the matrix\t\t");
    printf("6.Determinant of the matrix\n");
    printf("7.Inverse of the matrix\n");
    printf("8.Principal diagonal of the matrix\n\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        if ((r1=r2) && (c1=c2))
        {
            for (int i = 0; i < c2; i++)
            {
                for (int j = 0; j < r2; j++)
                {
                   a[i][j]=matrix1[i][j]+matrix2[i][j];
                }
            }
            printf("The matrix after the addition of the given two matrices is :\n");
            for (int i = 0; i < c2; i++)
            {
                printf("\n\n");
                for (int j = 0; j < r2; j++)
                {
                   printf("%d\t",a[i][j]);
                }
            }
        }
        else 
        printf("Operation not possible because number os rows and columns are different in both the matrices");
        break;
    
    case 2:
        if ((r1=r2) && (c1=c2))
        {
            for (int i = 0; i < c2; i++)
            {
                for (int j = 0; j < r2; j++)
                {
                   s[i][j]=matrix1[i][j]-matrix2[i][j];
                }
            }
            printf("The matrix after the substraction of the given two matrices is :\n");
            for (int i = 0; i < c2; i++)
            {
                printf("\n\n");
                for (int j = 0; j < r2; j++)
                {
                   printf("%d\t",s[i][j]);
                }
            }
        }
        else 
        printf("Operation not possible because number os rows and columns are different in both the matrices");
        break;

    case 3:
        if ((r1=r2) && (c1=c2))
        {
            for(int i=0;i<r1;i++)
            { for(int j=0;j<c1;j++)
                {
                  m[i][j]=0;
                   for(int i=0;i<r1;i++)    //row of first matrix
                      { 
                       for(int j=0;j<c1;j++)    //column of second matrix
                         {  
                          sum=0;
                          for(int k=0;k<c1;k++)
                          {
                           sum=sum+matrix1[i][k]*matrix2[k][j];
                           m[i][j]=sum;
                          }
                         }
                     }
                }
            }
                
                 
  printf("\nThe multiplication of two matrices is : \n");
  for(int i=0;i<r1;i++)
     {
        printf("\n");
        for(int j=0;j<c1;j++)
         {
           printf("%d\t",m[i][j]);
         }
     }
        }
        else 
        printf("Operation not possible because number os rows and columns are different in both the matrices");
        break;

    case 4:
        if ((r1=r2) && (c1=c2))
        {
            for (int i = 0; i < c2; i++)
            {
                for (int j = 0; j < r2; j++)
                {
                   d[i][j]=matrix1[i][j]/matrix2[i][j];
                }
            }
            printf("The matrix after the division of the given two matrices is :\n");
            for (int i = 0; i < c2; i++)
            {
                printf("\n\n");
                for (int j = 0; j < r2; j++)
                {
                   printf("%d\t",d[i][j]);
                }
            }
        }
        else 
        printf("Operation not possible because number os rows and columns are different in both the matrixes");
        break;

    case 5: 
        printf("\nChoose the matrix of which you want to find the transpose:\n");
        printf("1.First Matrix\t");
        printf("2.Second Matrix\n");
        scanf("%d",&b);
        switch (b)
        {
        case 1:
            for (int i = 0; i < c2; i++)
            {
                for (int j = 0; j < r2; j++)
                {
                   t1[i][j]=matrix1[j][i];
                }
            }
            printf("The transpose of the matrix is :\n");
            for (int i = 0; i < c2; i++)
            {
                printf("\n\n");
                for (int j = 0; j < r2; j++)
                {
                   printf("%d\t",t1[i][j]);
                }
            }
            break;
        
        case 2:
            for (int i = 0; i < c2; i++)
            {
                for (int j = 0; j < r2; j++)
                {
                   t2[i][j]=matrix2[j][i];
                }
            }
            printf("The transpose of the matrix is :\n");
            for (int i = 0; i < c2; i++)
            {
                printf("\n\n");
                for (int j = 0; j < r2; j++)
                {
                   printf("%d\t",t2[i][j]);
                }
            }
            break;
        default:
            break;
        }
        break;
    case 6:
        printf("\nChoose the matrix of which you want to find the determinant:\n");
        printf("1.First Matrix\t");
        printf("2.Second Matrix\n");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            if (r1==c1)
            {
                if (r1==2)
                {
                    det1= ((matrix1[0][0]*matrix1[1][1])-(matrix1[1][0]*matrix1[0][1]));
                    printf("\nThe determinant of the given matrix is %d.\n",det1);
                }

                else if (r1==3)
                {
                    det2= 
                    (
                (matrix1[0][0]*((matrix1[1][1])*(matrix1[2][2])-(matrix1[1][2])*(matrix1[2][1])))
            -   (matrix1[0][1]*((matrix1[1][2])*(matrix1[2][0])-(matrix1[1][0])*(matrix1[2][2])))
            +   (matrix1[0][2]*((matrix1[1][0])*(matrix1[2][1])-(matrix1[1][1])*(matrix1[2][0])))
                );
                    printf("\nThe determinant of the given matrix is %d.\n",det2);
                }
                
                else 
                printf("\nCalculation of determinant is not supported because the number of rows and columns is greater than 3.\n");
            }
            
            else
            printf("\nDeterminat is not possible for this matrix because this is not a square matrix.\n");
            break;
        
        case 2:
            if (r2==c2)
            {
                if (r2==2)
                {
                    det3= ((matrix2[0][0]*matrix2[1][1])-(matrix2[1][0]*matrix2[0][1]));
                    printf("\nThe determinant of the given matrix is %d.\n",det3);
                }

                else if (r1==3)
                {
                    det4= 
                    (
                (matrix2[0][0]*((matrix2[1][1])*(matrix2[2][2])-(matrix2[1][2])*(matrix2[2][1])))
            -   (matrix2[0][1]*((matrix2[1][2])*(matrix2[2][0])-(matrix2[1][0])*(matrix2[2][2])))
            +   (matrix2[0][2]*((matrix2[1][0])*(matrix2[2][1])-(matrix2[1][1])*(matrix2[2][0])))
                );
                    printf("\nThe determinant of the given matrix is %d.\n",det4);
                }
                
                else 
                printf("\nCalculation of determinant is not supported because the number of rows and columns is greater than 3.\n");
            }
            
            else
            printf("\nDeterminat is not possible for this matrix because this is not a square matrix.\n");
            break;
        default:
            break;
        }
        break;
    case 7:
        printf("\nChoose the matrix of which you want to find the transpose:\n");
        printf("1.First Matrix\t");
        printf("2.Second Matrix\n");
        scanf("%d",&e);
        switch (e)
        {
        case 1:
            if (r1==c1)
            {   
                if (r1==2)
                {
                   for (int i = 0; i < c1; i++)
                   {
                      for (int j = 0; j < r1; j++)
                      {
                         t1[i][j]=matrix1[j][i];
                      }
                   }
                   det1= ((matrix1[0][0]*matrix1[1][1])-(matrix1[1][0]*matrix1[0][1]));
                   printf("\nThe inverse of the matrix is:\n");
                   for (int i = 0; i < c1; i++)
                   {
                       printf("\n\n");
                       for (int j = 0; j < r1; j++)
                       {
                           printf("%d\t",(t1[i][j])/det1);
                       }
                       
                   }
                   
                }

                else if (r1==3)
                {
                   for (int i = 0; i < c1; i++)
                   {
                      for (int j = 0; j < r1; j++)
                      {
                         t1[i][j]=matrix1[j][i];
                      }
                   }
                   det2= 
                   (
                (matrix1[0][0]*((matrix1[1][1])*(matrix1[2][2])-(matrix1[1][2])*(matrix1[2][1])))
            -   (matrix1[0][1]*((matrix1[1][2])*(matrix1[2][0])-(matrix1[1][0])*(matrix1[2][2])))
            +   (matrix1[0][2]*((matrix1[1][0])*(matrix1[2][1])-(matrix1[1][1])*(matrix1[2][0])))
                );
                   printf("\nThe inverse of the matrix is:\n");
                   for (int i = 0; i < c1; i++)
                   {
                       printf("\n\n");
                       for (int j = 0; j < r1; j++)
                       {
                           printf("%d\t",(t1[i][j])/det2);
                       }
                       
                   }
                   
                }
                else
                printf("\nInverse is not possible for this matrix because this is not a square matrix.\n");

            }
            break;

        case 2:
            if (r2==c2)
            {   
                if (r2==2)
                {
                   for (int i = 0; i < c2; i++)
                   {
                      for (int j = 0; j < r2; j++)
                      {
                         t2[i][j]=matrix1[j][i];
                      }
                   }
                   det3= ((matrix2[0][0]*matrix2[1][1])-(matrix2[1][0]*matrix2[0][1]));

                   printf("\nThe inverse of the matrix is:\n");
                   for (int i = 0; i < c2; i++)
                   {
                       printf("\n\n");
                       for (int j = 0; j < r2; j++)
                       {
                           printf("%d\t",(t2[i][j])/det3);
                       }
                       
                   }
                   
                }

                else if (r2==3)
                {
                   for (int i = 0; i < c2; i++)
                   {
                      for (int j = 0; j < r2; j++)
                      {
                         t2[i][j]=matrix1[j][i];
                      }
                   }
                   det4= (
                (matrix2[0][0]*((matrix2[1][1])*(matrix2[2][2])-(matrix2[1][2])*(matrix2[2][1])))
            -   (matrix2[0][1]*((matrix2[1][2])*(matrix2[2][0])-(matrix2[1][0])*(matrix2[2][2])))
            +   (matrix2[0][2]*((matrix2[1][0])*(matrix2[2][1])-(matrix2[1][1])*(matrix2[2][0])))
                );
                   printf("\nThe inverse of the matrix is:\n");
                   for (int i = 0; i < c2; i++)
                   { 
                       printf("\n\n");
                       for (int j = 0; j < r2; j++)
                       {
                           printf("%d\t",(t2[i][j])/det4);
                       }
                       
                   }
                   
                }
                else
                printf("\nInverse is not possible for this matrix because this is not a square matrix.\n");

            }
            break;
        default:
            break;
        } 

        break;
    default:
        break;
    }

}
