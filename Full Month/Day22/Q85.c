#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, len, True = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            True = 0;
            break;
        }
    }

    if(True)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}