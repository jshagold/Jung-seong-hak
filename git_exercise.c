#include<stdio.h>

int main(void)
{
	int in;
	
	printf("input number 1\n");
	scanf("%d", &in);
	
	if(in == 1)
	{
		printf("my name is 'Seong Hak Jung'");
	}
	else
	{
		printf("number isn't 1");
	}
	return 0;
}
