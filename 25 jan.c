//find the first negative value in an array
//using break
#include<stdio.h>

float a[3][4]=	{
				{15,46,-3.5,6.3},
				{34,0,25,35},
				{1,13,46,38}
				};
int i;
int j;
void main()

{

	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if (a[i][j]<0)
				break;
				
		}
		if (a[i][j]<0)
			break;
			
	}
if (a[i][j]>0){
	printf("there is no negative value inside");
	}	
else{
	printf ("the first negative value is :a[%d][%d]= %4.1f",i+1,j+1,a[i][j]);
	}		


}

