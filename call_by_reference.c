#include<stdio.h>

int call_by_reference(int *,int *);
void main()
{
	int n,m;

	printf("hello aadesh agrawal(2019uec1660)\nenter values=");
	scanf("%d%d",&n,&m);
	
	call_by_reference(&n,&m);
	printf("%d,%d",n,m);

	getch();
}

int call_by_reference(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	return 1;
}
