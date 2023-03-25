#include<stdio.h.>
#include<conio.h.>
void main()
{
	int a,b,c;
	printf("enter 3 values");
	scanf("%d%d%d",&a,&b,&c);

	if(a==b||b==c||a==c)
		printf("it is an isoscles triangle");
	else
		printf("it is not an isoscles triangle");
	getch();
}