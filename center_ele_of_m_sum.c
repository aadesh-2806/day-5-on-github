#include<stdio.h>

void main()
{
	
	int i,a[50][50],j,d,s,r,p,t,n;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		j=0;		
		while(j<n)
		{
			printf("enter value %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
			j++;
		}					
		i++;
	}
	d=(n-1)/2;
	
	j=0;
	i=0;
	t=0;
	while(j<d)
	{
		t=t+a[i][j];
		j++;
		i++;
	}
	
	j=n-1;
	i=0;
	s=0;
	while(j>d)
	{
		s=s+a[i][j];
		j--;
		i++;
	}
	
	j=0;
	i=n-1;
	r=0;
	while(j<d)
	{
		r=r+a[i][j];
		j++;
		i--;
	}
	
	j=n-1;
	i=n-1;
	p=0;
	while(j>d)
	{
		p=p+a[i][j];
		j--;
		i--;
	}
	
	if(t==a[d][d] && p==a[d][d] && r==a[d][d] && s==a[d][d])
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	getch();
	
}	
