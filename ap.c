//#include <stdio.h>
//#include <stdlib.h>
//#define R (3)
//
//int main()
//{
//	int *ap[R];
//	int i,j,c;
//	int size[R];
//	for(i=0; i<R; i++)
//	{
//		printf("Enter the no.of columns u need");
//		scanf("%d",&c);
//		size[i]=c;
//		ap[i]=(int *)malloc(c*sizeof(int));
//		for(j=0; j<c; j++)
//		{
//			printf("[%d][%d]=", i, j);
//			scanf("%d",&ap[i][j]);
//		}
//	}
//	for(i=0; i<R; i++)
//	{
//		for(j=0; j<size[i]; j++)
//		{
//			printf("%d\t", ap[i][j]);
//		}
//		printf("\n");
//	}
//	for(i=0; i<R; i++)
//	{
//		free(ap[i]);
//	}
//
//	return 0;
//}