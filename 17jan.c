//xap sep tang dan mot day so cho truoc
#include<stdio.h>
void main()
{
	int n;
	int i;
	int a[n];
	int tang;
	int j;
	printf("Co bao nhieu so nguyen?:");
	scanf("%d",&n);
	printf("\nInput gia tri cac so nguyen:");
	for (i=1;i<=n;i++)
			{
				printf("\na[%d]= ",i);
				scanf("%d",&a[i]);
			}
	
	for(j=1;j<n;j++)
		{
			tang=a[1];
			for(i=1;i<n;i++)
				{
					if (a[i]>a[i+1])
						{
							a[i]=a[i+1];
							a[i+1]=tang;
							tang=a[i+1];
						}
					else tang=a[i+1];
				}
			
		}
			
		
	printf("Thu tu tang dan:");	
	for(i=1;i<=n;i++)
		{
			printf("\na[%d]= %d",i,a[i]);
		}
}
