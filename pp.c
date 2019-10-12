//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int **pp;
//	int *size;
//	int i, j, row,col;
//
//	printf("Enter number of rows");
//	scanf("%d", &row);
//	size=(int *)malloc(row*sizeof(int));
//	/*	for (int i = 0; i < row; i++)
//	{*/
//		
//
//	pp=(int **)malloc(row*sizeof(int*));
//
//	for(i=0; i<row; i++)
//	{		
//		printf("Enter number of columns");
//		scanf("%d", &col);
//		size[i]=col;
//		pp[i]=(int *)malloc(col*sizeof(int));
//		for(j=0; j<col; j++)
//		{
//			printf("a[%d][%d]=",i,j);
//			scanf("%d", &pp[i][j]);
//		}
//	}
//
//
//	for(i=0; i<row; i++)
//	{ 
//		for(j=0; j<size[i]; j++)
//		{
//			printf("%d", pp[i][j]);
//		}
//		printf("\n");
//
//	}
//	for(i=0; i<row; i++)
//	{ 
//		free(pp[i]);
//	}
//
//
//	return 0;
//}
