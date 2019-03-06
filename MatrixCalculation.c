#include <stdio.h>
main(){
	int r1,r2,c1,c2,i,j,k,res[10][10],a[10][10],b[10][10];
	char opr;
	printf("Enter the number of row for matrix 1:");
	scanf("%d", &r1);
	printf("Enter the number of column for matrix 1:");
	scanf("%d", &c1);
	printf("Enter the number of row for matrix 2:");
	scanf("%d", &r2);
	printf("Enter the number of column for matrix 2:");
	scanf("%d", &c2);
	while (r1!=r2 || c1!=c2 || c1!=r2){
		printf("The matrix can not be calculation\n");
		printf("Enter the number of row for matrix 1:");
		scanf("%d", &r1);
		printf("Enter the number of column for matrix 1:");
		scanf("%d", &c1);
		printf("Enter the number of row for matrix 2:");
		scanf("%d", &r2);
		printf("Enter the number of column for matrix 2:");
		scanf("%d", &c2);
	}
	printf("Enter the number for matrix 1: \n");
	for (i=0; i<r1; i++)
	{
		for (j=0; j<c1; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0; i<r1; i++)
	{
		for (j=0; j<c1; j++)
		{
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the number for matrix 2: \n");
	for (i=0; i<r2; i++)
	{
		for (j=0; j<c2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (i=0; i<r2; i++)
	{
		for (j=0; j<c2; j++)
		{
			printf(" %d", b[i][j]);
		}
		printf("\n");
	}
	for (i=0; i<r1; i++)
	{
		for (j=0; j<c2; j++)
		{
			res[i][j]=0;
		}
	}
	printf("Enter + for addition\n");
	printf("Enter - for substraction\n");
	printf("Enter * for multiplication\n");
	fflush(stdin);
	scanf("%c", &opr);
	switch(opr){
		case'+':
			for(i=0; i<r1; i++)
				for (j=0; j<r1; j++)
					res[i][j]=a[i][j]+b[i][j];
			break;
		case'-':
			for(i=0; i<r1; i++)
				for (j=0; j<r1; j++)
					res[i][j]=a[i][j]-b[i][j];
			break;
		case'*':
			for (i=0; i<r1; i++)
				for (j=0; j<c2; j++)
					for (k=0; k<r2; k++)
						res[i][j]=res[i][j]+a[i][k]*b[k][j];
			break;
		default:
			printf("syntax Error!!");
	}
	printf("The result is:\n");
	for (i=0; i<r1; i++){
		for (j=0; j<c2; j++)
			printf(" %d", res[i][j]);
			printf("\n");
		}
}
