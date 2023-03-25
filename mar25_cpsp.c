#include<stdio.h.>
#include<conio.h.>
void main()
{
	int cp,sp;
	printf("enter cp,sp");
	scanf("%d%d",&cp,&sp);

	if(sp>cp)
		printf("there will be profit");
	else 
		printf("there will be loss");
	getch();
}