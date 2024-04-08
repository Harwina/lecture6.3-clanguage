// Write a Program to print the multiplication table of the number N using any type of loop.
//#include<stdio.h>
//main()
//{
//	int i=1,n;
//	
//	printf("enter any value");
//	scanf("%d",&n);
//	
//	for(i=1;i<=10;i++)
//	{
//		printf("%d*%d=%d\n",n,i,n*i);
//	}
//}
#include<stdio.h>
main()
//{
//	int i=1,n;
//	
//	printf("enter any value");
//	scanf("%d",&n);
//	
//	while(i<=10)
//	{
//		printf("%d*%d=%d\n",n,i,n*i);
//		i++;
//	}
//}
{
	int i=1,n;
	printf("enter any number=");
	scanf("%d",&n);
	
	do{
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}
	
	while(i<=10);
}



