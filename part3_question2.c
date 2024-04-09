//Paddy Zheng SBUID 115765393
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char *removechar (char arr1[], char arr2[])
{
    int i,j,n;
    int length = strlen(arr1);
    for(i = 0; i < length; i++)
    {
        for(j = 0; j < strlen(arr2); j++)
        {
            if(arr1[i] == arr2[j])
            {
            	for(n = i; n<length;n++)
                {
                    arr1[n] = arr1[n+1];
                }
            }
        }
    }
    return arr1;
}

int main()
{
    char arr1[MAX];
    char arr2[MAX];
    printf("Input first string: ");
    gets(arr1);
    printf("\nInput second string: ");
    gets(arr2);
    printf("Your outputted string is: \n%s", removechar(arr1, arr2));
}

