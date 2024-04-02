
// Paddy Zheng SBUID 115765393
#include <stdio.h>
#include <stdlib.h>
int my_isalpha(char c)
{
	if(c >= 'a' && c <= 'z' || c >= 'A' || c<= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
int my_isdigit(char c)
{
	if(c >= '0' && c <= '9')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
int my_is_upper(char c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
char my_to_upper(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		return(c-'a'+'A');
	}
	else
	{
		return(c);
	}
}
char my_to_lower(char c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return(c-'A'+'a');
	}
	else
	{
		return(c);
	}
}
int main()
{
	char character;
	while(1)
	{
		printf("\nInput a character: ");
		scanf("%c", &character);
		getchar();
		if(my_isalpha(character) == 1)
		{
			printf("Your input %c is a character\n", character);
		}
		else
		{
			printf("Your input %c is not a character\n", character);
		}
		if(my_isdigit(character) == 1)
		{
			printf("Your input %c is a digit\n", character);
		}
		else
		{
			printf("Your input %c is not a digit\n", character);
		}
		if(my_is_upper(character) == 1)
		{
			printf("Your input %c is a uppercase character\n", character);	
		}
		else
		{
			printf("Your input %c is not an unppercase character\n", character);
		}
		if(my_to_upper(character) != character)
		{
			printf("Your converted character is %c\n", my_to_upper(character));
		}
		else
		{
			printf("Your character %c is not lowercase\n", character);
		}
		if(my_to_lower(character) !
		= character)
		{
			printf("Your converted character is %c\n", my_to_lower(character));
		}
		else
		{
			printf("Your character %c is not uppercase\n", character);
		}
	}
}