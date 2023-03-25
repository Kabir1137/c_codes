#include<stdio.h.>
#include<conio.h.>
void main()
{
	int a,b,c;
	printf("enter 3 values");
	scanf("%d%d%d",&a,&b,&c);

	if(a+b+c==180)
		printf("triangle will be formed");
	else 
		printf("triangle will not be formed");
	getch();
}