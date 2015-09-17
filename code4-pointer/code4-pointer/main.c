//
//  main.c
//  code4-pointer
//
//  Created by leiquan on 15/9/17.
//  Copyright © 2015年 leiquan.me. All rights reserved.
//

#include <stdio.h>

int main ()
{
    int  var = 20;   /* 实际变量的声明 */
    int  *ip;        /* 指针变量的声明 */
    
    ip = &var;  /* 在指针变量中存储 var 的地址 */
    
    printf("Address of var variable: %x\n", &var  );
    
    /* 在指针变量中存储的地址 */
    printf("Address stored in ip variable: %x\n", ip );
    
    /* 使用指针访问值 */
    printf("Value of *ip variable: %d\n", *ip );
    
    return 0;
}