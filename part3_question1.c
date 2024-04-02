//Paddy Zheng SBUID 115765393
#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
	char str1[MAX];
	int i, j;
	int n = 0;
	printf("Input a string of about 10 characters:");
	gets(str1);
	for(i = 0; i < strlen(str1); i++)
	{
		printf("%s\n", str1+i);
	}
}
