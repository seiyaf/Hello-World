/*
 * string_join.c
 *
 *  Created on: 2021/02/08
 *      Author: seiya
 */

#include <stdio.h>
#include <string.h>

#define SIZEA 10
#define SIZEB 10

void string_join(void){
    char s1[SIZEA];                        //  最大10文字まで入る文字列
    char s2[SIZEA];                        //  最大10文字まで入る文字列
    char s3[SIZEB];                        //  最大10文字まで入る文字列
    //文字列1の入力を待つ
    printf("一つ目の文字列を入力してください\n");
    fflush(stdout);
	scanf("%s",s1);
    //文字列2の入力を待つ
    printf("二つ目の文字列を入力してください\n");
    fflush(stdout);
	scanf("%s",s2);
    //文字列1,2を結合して文字列3に格納し表示
	strcpy(s3,s1);
	strcat(s3,s2);
    printf("文字列1:%s\n文字列2:%s\n結合した結果:%s",s1,s2,s3);

	}
