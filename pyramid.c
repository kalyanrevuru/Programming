#include<stdio.h>
#include<conio.h>

int main()
{
	int n=10;
	for(int i=1,x=n;i<6;i++,x=x-2)
	{
		printf("\n");
		for(int k=1;k<i;k++) printf(" ");
		
		for(int j=1;j<=x;j++) printf("%d",i);
	}
	printf("\n");
	for(int i=6,x=1,gap=5;i<10;i++,x=x*2,gap=(n-x)/2)
	{
		for(int k=gap;k>0;k--) printf(" ");
		
		for(int j=0;j<x;j++) printf("%d",i);
		
		printf("\n");	
	}
	int k=0;
	for(int i=0;i<n;i++) printf("%d",k);
	return 0;
}
