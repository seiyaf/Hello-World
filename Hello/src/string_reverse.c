/*
 * string_reverse.c
 *
 *  Created on: 2021/02/12
 *      Author: seiya
 */

#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define SIZE 16

void string_reverse(void){

    char str1[SIZE];         //最大[SIZE]文字まで入る文字列
    char *strrv = NULL;     //反転文字列
    int len = 0;                //文字列の長さ
    int i = 0;                  //ループ変数

    //文字列の入力を待つ
    printf("文字列を入力してください\n");
    fflush(stdout);
    gets(str1);

    len = (int)strlen(str1);

    //文字列のポインタ配列の長さ確保
    strrv = (char*)malloc(sizeof(char)*len +1);

    //ポインタ配列に文字列の逆側から順に文字を格納
    for(i = 0; i < len; i++){
      *(strrv + i) = str1[len - i - 1];
    }

    printf("入力した文字は%s\n反転文字は%s",str1,strrv);

    free(strrv);
}
