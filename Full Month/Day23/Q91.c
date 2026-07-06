#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[100];
    int freq[256] = {0}, i, flag = 1;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if(strlen(str1) != strlen(str2)) 
    {
        flag = 0;
    } 
    else 
    {
        for(i = 0; str1[i] != '\0'; i++) 
        {
            freq[(unsigned char)str1[i]]++;
            freq[(unsigned char)str2[i]]--;
        }

        for(i = 0; i < 256; i++) 
        {
            if(freq[i] != 0) 
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Strings are Anagrams.");
    else
        printf("Strings are not Anagrams.");

    return 0;
}