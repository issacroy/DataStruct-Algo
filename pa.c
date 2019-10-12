//#include <stdio.h>
//#include <stdlib.h>
//#define c (3)
//
//int main()
//{
//	int (*pa)[c];
//	int i,j,r;
//	printf("enter the no.of rows u need");
//	scanf("%d",&r);
//	pa=(int(*)[c])malloc(r*sizeof(int[c]));
//	for(i=0; i<r; i++)
//	{
//		for(j=0; j<c; j++)
//		{
//			printf("a[%d][%d]=",i,j);
//			//scanf("%d",&pa[i][j]);
//			scanf("%d",(pa[i]+j));
//		}
//	}
//	for(i=0; i<r; i++)
//	{
//		for(j=0; j<c; j++)
//		{
//			printf("%d\t",pa[i][j]);
//		}
//		printf("\n");
//	}
//	free(pa);
//return 0;
//}