#include<stdio.h>
void main()
{
	int num1,num2,num3,num4;
	printf("ENTER THE FOUR NUMBERS\n");
	scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
	if (num1>num2 && num1>num3 && num1>num4)
	{
		printf("%d largest number",num1);
	}
	else if(num1>num3 && num1>num4)
	{
		printf("%d largest number",num2);
	}
}
