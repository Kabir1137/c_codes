#include<stdio.h.>
#include<conio.h.>
void main()
{
	int amt;
printf("enter an amount");
scanf("%d",&amt);

if(amt<1000)
{
	printf("\nlow balance");
}
if(amt>=1000)
{
	printf("\nyou can withdraw");
}
getch();
}