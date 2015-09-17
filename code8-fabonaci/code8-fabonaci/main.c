//
//  main.c
//  code8-fabonaci
//
//  Created by leiquan on 15/9/17.
//  Copyright © 2015年 leiquan.me. All rights reserved.
//

#include <stdio.h>

int fibonaci(int i)
{
    if(i == 0)
    {
        return 0;
    }
    if(i == 1)
    {
        return 1;
    }
    return fibonaci(i-1) + fibonaci(i-2);
}

int  main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", fibonaci(i));
    }
    return 0;
}
