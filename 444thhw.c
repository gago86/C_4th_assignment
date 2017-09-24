#include <stdio.h>


int main()
{
	int a[10][10], transpose[10][10], r, c, i, j;

	printf("Enter rows and colums of matrix:");
	scanf("%d %d", &r, &c);

	
	printf("Enter elements of matrix:\n");

	for(i=0;i<r;++i)
	
		for (j = 0; j < c; ++j) {
			printf("Enter element a%d%d:", i + 1, j + 1);

			scanf("%d",& a[i][j]);
		
	}

	printf("Entered matrix:\n");

	for(i=0;i<r;++i){
	
		for (j = 0; j < c; ++j)
		{
			printf("%d", a[i][j]);
			if (j == c - 1)
				puts("");
		}
	}

	printf("\nTranspose of matrix:\n");

	for (i = 0; i < c; ++i)
	{
		for (j = 0; j < r; ++j) {
			printf("%d", transpose[i][j]);
			if (j == r - 1)
				puts("");
		}		
		}
	
    return 0;
}
