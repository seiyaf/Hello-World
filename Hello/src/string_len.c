/*
 * string_len.c
 *
 *  Created on: 2021/02/09
 *      Author: seiya
 */

#include <stdio.h>
#include <string.h>

#define SIZE 100

void string_len(void){
	size_t num;
    char s1[SIZE];                        //  最大100文字まで入る文字列
    //文字列の入力を待つ
    printf("文字列を入力してください\n");
    fflush(stdout);
	scanf("%s",s1);
	num = strlen(s1);
    printf("文字列:%s\n文字列の長さ:%d",s1,(int)num);

}

void string_len2(void){
	int num = 0;
    char s1[SIZE];                        //  最大100文字まで入る文字列
    //文字列の入力を待つ
    printf("文字列を入力してください\n");
    fflush(stdout);
	scanf("%s",s1);
	while(s1[num] != '\0'){
		num++;
	}
    printf("文字列:%s\n文字列の長さ:%d",s1,num);

}
