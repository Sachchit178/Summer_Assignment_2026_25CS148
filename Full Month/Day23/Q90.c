#include <stdio.h>
int main() 
{
    char str[100];
    int freq[256] = {0}, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] != ' ' && str[i] != '\n') 
        {
            freq[(unsigned char)str[i]]++;

            if(freq[(unsigned char)str[i]] == 2) 
            {
                printf("First repeating character = %c", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found.");

    return 0;
}