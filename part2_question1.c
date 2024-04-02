// Paddy Zheng SBUID 115765393
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int my_strcmp(char str1[], char str2[])
{
	if(str1 == str2)
	{
		return(1);
	}
	return(0);
}
int my_strncmp(char str1[], char str2[], int n)
{
	int i;
 	for(i = 0; i<n;i++)
 	{
 		if(str1[i] != str2[i])
 		{
 			return(0);
		}
	}
	return(1);
}
char *my_strcpy(char str1[], char str2[])
{
	int i = 0;
	while((str1[i] = str2[i]) != '/0')
	{
		i++;
	}
	return(str1);
}
char *my_strcat(char str1[], char str2[])
{
	int j = 0;
	while(str1[j]!= '/0')
	{
		j++;
	}
	int i = 0;
	while(str2[i] != '/0')
	{
		str1[j++] = str2[i++];
	}
	str1[j] = '/0';
	return(str1);
}
char *my_reverse(char str1[], char str2[])
{
	int i, j = 0;
	for(i = strlen(str2) - 1;i >= 0; i--, j++)
	{
		str1[j]= str2[i];
	}
	return(str1);
}
int main()
{
	char str1[MAX] = "";
	char str2[MAX] = "hello";
	int n;
	while(1)
	{
		printf("Input a value for n: ");
		scanf("%d", &n);
		if(my_strcmp(str1,str2) == 1)
		{
			printf("Your strings are equal");
		}
		else
		{
			printf("Your strings are not equal");
		}
		if(my_strncmp(str1,str2,n) == 1)
		{
			printf("Your %d terms are equal", n);
		}
		else
		{
			printf("Your %d terms are not equal", n);
		}
		printf("Your copied string is %s", my_strcpy(str1, str2));
		printf("Your appended string is %s", my_strcat(str1, str2));
		printf("Your reversed string is %s", my_reverse(str1, str2));
	}
}
