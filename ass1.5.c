//WAP to calculate the length of String using printf function.

#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i;

    printf("Enter a string: ");
    gets(s);
    for(i=0; s[i]!='\0'; i++);
    printf("length of '%s' = %d", s, i);

    return 0;
}