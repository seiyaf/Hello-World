/*
 * main.c
 *
 *  Created on: 2021/01/16
 *      Author: seiya
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void dobleup(int*);

int main(){

    //  サイズSIZEの配列を用意する。
    int nums[SIZE]  ;
    int *p = NULL;
    int i;

    for( i = 0 ; i < 5; i++){
    	nums[i] = rand() % 101;
    }

    p = nums; //  pにnumsのアドレスを入力
    dobleup(p);

}

void dobleup(int *p)
{
    int i;

	printf("発生した乱数\n");
    for( i = 0 ; i < SIZE; i++){
        printf("%d ",*(p + i) );
    }
    printf("\n");

	printf("二倍した値\n");
    for( i = 0 ; i < SIZE; i++){
        printf("%d ",*(p + i) * 2);
    }
    printf("\n");

}
