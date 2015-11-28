//
//  main.c
//  code2-static
//
//  Created by leiquan on 15/9/17.
//  Copyright © 2015年 leiquan.me. All rights reserved.
//

#include <stdio.h>

/* 函数声明 */
void func(void);

static int count = 5; /* 全局变量 */

int main()
{
    while(count--)
    {
        func();
    }
    return 0;
}
/* 函数定义 */
void func( void )
{
    static int i = 5; /* 局部静态变量 */
    i++;
    
    printf("i is %d and count is %d\n", i, count);
}
