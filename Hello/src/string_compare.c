/*
 * string_compare.c
 *
 *  Created on: 2021/02/10
 *      Author: seiya
 */

#include <stdio.h>
#include <string.h>

#define SIZE 10

void string_compare(void){
    char s1[SIZE];                        //  最大10文字まで入る文字列
    char s2[SIZE];                        //  最大10文字まで入る文字列
    //文字列1の入力を待つ
    printf("一つ目の文字列を入力してください\n");
    fflush(stdout);
  gets(s1);
    //文字列2の入力を待つ
    printf("二つ目の文字列を入力してください\n");
    fflush(stdout);
  gets(s2);
    //文字列1,2を表示
    printf("文字列1:%s\n文字列2:%s\n",s1,s2);
    if(strcmp(s1,s2) == 0){
        printf("二つの文字列は同じものです");
    }
    else{
        printf("二つの文字列は異なるものです");
    }
}

void string_compare2(void){
    char s1[SIZE];                        //  最大10文字まで入る文字列
    char s2[SIZE];                        //  最大10文字まで入る文字列
    char *ps1;
    char *ps2;
    int nonmatch = 0;
    //文字列1の入力を待つ
    printf("一つ目の文字列を入力してください\n");
    fflush(stdout);
    gets(s1);
    ps1 = &s1[0];
    //文字列2の入力を待つ
    printf("二つ目の文字列を入力してください\n");
    fflush(stdout);
    gets(s2);
    ps2 = &s2[0];
    //文字列1,2を表示
    printf("文字列1:%s\n文字列2:%s\n",s1,s2);
    //文字列1,2を一文字ずつ比較
    if(*ps1 == '\0' && *ps2 == '\0'){
      nonmatch = 1;
    }
    while(*ps1 != '\0' || *ps2 != '\0'){
        if(ps1 == ps2){
            ps1++;
            ps2++;
            nonmatch = 1;
        }
        else{
            nonmatch = 0;
            break;
        }
    }
    if(nonmatch){
        printf("二つの文字列は同じものです");
    }
    else{
        printf("二つの文字列は異なるものです");
    }

}
