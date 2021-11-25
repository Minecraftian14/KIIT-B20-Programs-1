#include<stdio.h>
int main()
{
	int a,b;
	float c;
	char op;
	printf("Enter the two digits to be operated on: ");
	scanf("%d %d",&a,&b);
	printf("Enter the operation to be initiated: ");
	getchar();
	scanf(" %c",&op);
	if (op=='+')
		printf("%d\n",a+b);
	else if (op=='-')
		printf("%d\n",a-b);
	else if (op=='*')
		printf("%d\n",a*b);
	else if (op=='/')
		printf("%f\n",(float)a/b);
	else if (op=='%')
		printf("%d\n",a%b);
	else
		printf("Invalid");
	return 0;
}