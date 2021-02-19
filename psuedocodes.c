#include<stdio.h>
int main()
{
	int x=4,y=0;
	int z;
	z=(y++,y);
	printf("%d",z);
	return 0;
}
