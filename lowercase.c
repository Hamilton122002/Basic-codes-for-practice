#include <stdio.h>
#include <string.h>
int main()
{
    char string[1000];
    printf("Enter the string");
    gets(string);
    printf("The characters in lower case are: %s",strlwr(string) );
}
