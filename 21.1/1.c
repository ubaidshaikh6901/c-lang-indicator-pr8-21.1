#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    ptr = str;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("The length of a string is: %d", length);

    return 0;
}