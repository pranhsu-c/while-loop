#include<stdio.h>

main()
{
	int n,a=1;
	
	printf("enter value=");
	scanf("%d",&n);
	
	while(a<=10)
	{
		printf("%d*%d=%d\n",n,a,n*a);
		a++;
		
	}
}
