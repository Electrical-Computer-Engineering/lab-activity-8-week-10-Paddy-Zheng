// Paddy Zheng SBUID 115765393
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int my_strcmp(char str1[], char str2[])
{
	int i = 0;
	for(i = 0;i<strlen(str1);i++)
	{
		if(str1[i] != str2[i])
			return (0);
	}
	return(1);
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
	while((str1[i] = str2[i])!= '\0')
	{
		i++;
	}
	return str1;
}
char *my_strcat(char str1[], char str2[])
{
	int j = 0;
	while(str1[j]!= '\0')
	{
		j++;
	}
	int i = 0;
	while(str2[i] != '\0')
	{
		str1[j++] = str2[i++];
	}
	str1[j] = '\0';
	return(str1);
}
char *my_reverse(char str1[], char str2[])
{
	int i, j = 0;
	for(i = strlen(str2) - 1;i >= 0; i--, j++)
	{
		str1[j]= str2[i];
	}
	str1[j] = '\0';
	return(str1);
}
int main()
{
	char str1[MAX] = "hello";
	char str2[MAX] = "hello";
	int n;
	printf("Input a value for n: ");
	scanf("%d", &n);
	if(my_strcmp(str1,str2) == 1)
	{
		printf("Your strings are equal\n");
	}
	else
	{
		printf("Your strings are not equal\n");
	}
	if(my_strncmp(str1,str2,n) == 1)
	{
		printf("Your string after %d terms are equal\n", n);
	}
	else
	{
		printf("Your string after %d terms are not equal\n", n);
	}
	printf("Your copied string is %s\n", my_strcpy(str1,str2));
	printf("Your appended string is %s\n", my_strcat(str1, str2));
	printf("Your reversed string is %s\n", my_reverse(str1, str2));
}