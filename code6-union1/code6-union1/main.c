//
//  main.c
//  code6-union1
//
//  Created by leiquan on 15/9/17.
//  Copyright © 2015年 leiquan.me. All rights reserved.
//

#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char  str[20];
};

int main( )
{
    union Data data;
    
    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");
    
    printf( "data.i : %d\n", data.i);
    printf( "data.f : %f\n", data.f);
    printf( "data.str : %s\n", data.str);
    
    return 0;
}