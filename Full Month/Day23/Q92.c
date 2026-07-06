#include <stdio.h>
int main()
{
    char str[100];
    int freq[256] = {0}, i, max = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] != ' ' && str[i] != '\n')
            freq[(unsigned char)str[i]]++;
    }

    for(i = 0; i < 256; i++) 
    {
        if(freq[i] > max)
            max = freq[i];
    }

    printf("Maximum occurring character(s): ");
    for(i = 0; i < 256; i++) 
    {
        if(freq[i] == max)
            printf("%c ", i);
    }

    printf("\nFrequency = %d\n", max);

    return 0;
}