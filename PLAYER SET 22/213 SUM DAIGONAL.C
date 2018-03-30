#include <stdio.h>
void main()
{
	int a[10][10],i,j,sum=0,r,c;
	scanf("%d%d",&r,&c);
	for(i=0;i < r;i++)
	{
		for(j=0;j < c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i < r;i++)
	{
		for(j=0;j < c;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}
		}
	}
	printf("\nThe sum of diagonal elements is %d",sum);
}
