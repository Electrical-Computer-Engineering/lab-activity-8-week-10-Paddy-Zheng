//Paddy Zheng SBUID 115765393
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int firstisvowel(char str[])
{
    if(str[0] == 'e'||str[0] == 'i'||str[0] == 'o'||str[0] == 'a')
    {
        return(1);
    }
    return(0);
}
int isvowel(char str[])
{
    if(str[0] == 'e'||str[0] == 'i'||str[0] == 'o'||str[0] == 'a'||str[0] == 'y')
    {
        return(1);
    }
    return(0);
}
char *ToPigLatin(char str[])
{
	char temp;
    int i, j, l;
    int flag = 0;
    if(str[0] >= 'A' && str[0] <= 'Z')
    {
        str[0] = str[0] - 'A' + 'a';
        flag = 1;
    }
    if(firstisvowel(str) == 1)
    {
        l = strlen(str);
        str[l] = 'w';
        str[l + 1] = 'a';
        str[l +2] = 'y';
        str[l+3] = '\0';
        if(flag == 1)
        {
            str[0] = str[0] - 'a' + 'A';
        }
        return(str);
    }
    l=strlen(str);
    for(i = 0;i<strlen(str);i++)
    {
        if(isvowel(str) == 1)
        {
            str[l] = 'a';
            str[l+1] = 'y';
            str[l+2] = '\0';
            break;
        }
        temp = str[0];
        for(j = 0;j<strlen(str);j++)
        {
            str[j] = str[j+1];
        }
        str[l-1] = temp;
    }
    if(flag == 1)
    {
        str[0] = str[0] - 'a' + 'A';
    }
    return(str);
}

int main()
{
    int i;
    char str[MAX];
    printf("Input 5 words:");
    for(i = 0; i != 5;i++)
    {
    printf("\nInput the %d word: ", i+1);
    gets(str);
    printf("The pig latin representation of that word is:\n%s", ToPigLatin(str));
    }
}
