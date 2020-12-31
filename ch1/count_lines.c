//
//  count_lines.c
//  C-Lang
//
//  Created by yuzuki on 2020/12/31.
//

#include <stdio.h>

int main()
{
    int c, nl;
    nl = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
    }
    printf("%d\n", nl);
}
