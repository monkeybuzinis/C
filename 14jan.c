/*//Tim so lon nhat trong 2 so
#include<stdio.h>
void main()
{
	int a,b;
	printf("Nhap 2 so a & b theo thu tu: ");scanf("%d",&a);scanf("%d",&b);
	if(a==b)
	printf("hai so bang nhau");
	else{
	
	if(a>b)
	printf("so lon hon la: %d",a);
	else
	printf("so lon hon la: %d",b);
}
	
}*/


//Tinh x luy thua y
#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	int y;
	int i;
	float m = 1;
	int z;
	printf("Gia tri cua z = %d",z);
//int x,y,i; float m=1; (khong khai bao nhu vay, ng doc se kho hiu)

//clrscr();// undefined reference to `clrscr'
    printf("input x và y: ");
	scanf("%d%d",&x,&y);
	
	if(y==0)
	{
		m=1;
	}
	else
	{
		if(y>0)
		{
			for (i=0;i<y;i++)
			{
				m=x*m;
			}
		}
		else
		{
			for (i=0;i<-y;i++)
			{
				m=m/x;
			}
	    }
	}
	printf("x mu y = %0.3f",m);
	scanf("%d",&x);
}




