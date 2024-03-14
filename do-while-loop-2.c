#include<stdio.h>

main()
{
	// even numbers from 1 to N using a do-while loop.
	
	int i=2,n;
	
	printf("enter the number=");
	scanf("%d",&n);
	
	do{
		printf("%d",i);
		i+=2;
	}while(i<=n);
}