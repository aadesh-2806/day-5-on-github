#include<stdio.h>

void call_by_value(int,int);
void main()
{
	int n,m;

	printf("hello aadesh agrawal(2019uec1660)\nenter values=");
	scanf("%d%d",&n,&m);
	
	call_by_value(n,m);
	
	getch();
}

void call_by_value(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("%d,%d",x,y);
	getch();
}
