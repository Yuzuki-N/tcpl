#include <stdio.h>

#define MAXLEN 1000

void my_reverse(char s[]);

int main()
{
    int c, i;
    char line[MAXLEN];
    for (i = 0; (c = getchar()) != '\n'; ++i) {
        line[i] = c;
    }
    line[++i] = '\0';

    my_reverse(line);
    printf("%s\n", line);
}

void my_reverse(char s[])
{
    int i, j;
    char temp;
    i = j = 0;
    while (s[i] != '\0')
        ++i;
    --i;
    while (s[i] == '\n')
        --i;
    while(j < i) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        --i;
        ++j;
    }
}
