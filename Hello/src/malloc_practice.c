/*
 * malloc_practice.c
 *
 *  Created on: 2021/02/08
 *      Author: seiya
 */

#include <stdio.h>
#include <malloc.h>

#define SIZE 10

void malloc_practice(){
    //  数値配列代入用のポインタ変数
    int *array = NULL;
    int i;
    //  ①長さ10の配列の生成(mallocを使用）
    array = (int*)malloc(sizeof(int)*SIZE);
    for(i = 0; i < SIZE; i++){
        array[i] = i;   //  値の代入
    }
    //  値の表示
    for(i = 0; i < 10; i++){
        printf("%d ",array[i]); //  値の代入
    }
    printf("\n");
    //  ②生成したメモリの開放(free()を使用)
    free(array);
}

