#include<stdio.h>

main()
{
	// the fibonacci series up to N numbers using for loop.
	
	int f=0,s=1,sum,n,i;
	
	printf("enter eny number=");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{   
	    printf("%d",f);
		sum=f+s;
		f=s;
		s=sum;
	}
}