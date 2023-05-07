#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "Physics Wallah";

    s1[0] = 'M'; // change first character to 'M'
    printf("%s \n", s1); // print the modified string
    return 0;
}
