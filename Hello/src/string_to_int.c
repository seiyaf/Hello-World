/*
 * string_to_int.c
 *
 *  Created on: 2021/02/11
 *      Author: seiya
 */

#include <stdio.h>
#include <stdlib.h>

void string_to_int(){
    char numString[] = "100";   //  数値の文字列
    int num;    //  numStringの数値を入れる変数
    num = atoi(numString);
    printf("%d\n",num);
}
