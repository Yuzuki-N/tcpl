//
//  ex1-8.c
//  C-Lang
//
//  Created by yuzuki on 2020/12/31.
//

#include <stdio.h>

int main()
{
    int c, cnt;
    cnt = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++cnt;
        if (c == '\t')
            ++cnt;
        if (c == '\n')
            ++cnt;
    }
    printf("%d\n", cnt);
}
