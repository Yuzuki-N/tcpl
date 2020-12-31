//
//  ex1-9.c
//  C-Lang
//
//  Created by yuzuki on 2020/12/31.
//

#include <stdio.h>

#define NONBLACK 'a'

int main()
{
    int c, lastc;
    

    while ((c = getchar()) != EOF) {
        if (c != ' ') 
            putchar(c);
        if (c == ' ')
            if (lastc != ' ')
                putchar(c);
        lastc = c;
    }
}
