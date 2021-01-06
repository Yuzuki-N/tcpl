#include <stdio.h>

#define MAXLINE 10000

int readline(char line[], int lim);
int my_remove(char line[]);

int main()
{
    int c;
    char line[MAXLINE];
    
    while ((c = readline(line, MAXLINE)) != EOF) {
        if (my_remove > 0)
            printf("%s", line);
    }
}


int readline(char s[], int lim)
{
    int c, i, j;
    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 2) {
            s[i] = c;
            ++j;
        }
    }
    if (c = '\n') {
        s[i] = c;
        ++i;
        ++j;
    }
    s[i] = '\0';
//    printf("i = %d\n", i);
//    printf("j = %d\n", j);
    return i;
}

int my_remove(char s[])
{
    int i = 0;
    while (s[i] != '\n')
        ++i;
    --i;
    while (i > 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    if (i > 0) {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}
