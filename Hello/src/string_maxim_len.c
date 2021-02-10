/*
 * string_maxim_len.c
 *
 *  Created on: 2021/02/11
 *      Author: seiya
 */

#include <stdio.h>
#include <string.h>

#define SIZE 10
#define MOJIRETU 4

void string_maxim_len(){
  int i;
    char str1[MOJIRETU][SIZE];         //最大[SIZE]文字まで入る文字列が[MOJIRETU]個
    int length[MOJIRETU];				//[MOJIRETU]個の文字列の長さを保持
    int maxim_flg = 0;                  //どの文字列が一番長いかフラグ

    for(i=0;i<MOJIRETU;i++){
      //[MOJIRETU]個の文字列の入力を待つ
      printf("%dつ目の文字列を入力してください\n",i+1);
      fflush(stdout);
      gets(str1[i]);
    }

    //[MOJIRETU]個の文字列を表示
    for(i=0;i<MOJIRETU;i++){
      printf("文字列%d:%s\n", i+1, str1[i]);
    }

    //何個目の文字列が一番長いか判定
    for(i=0;i<MOJIRETU;i++){
      length[i] = strlen(str1[i]);
      if(length[maxim_flg] < length[i]){
        maxim_flg = i;
      }
    }

    //一番長い文字列と同じ長さの文字列をすべて表示
    printf("最も長い文字列は\n");
    for(i=0;i<MOJIRETU;i++){
      if(length[i] == length[maxim_flg]){
        printf("%s\n",str1[i]);
      }
    }
}
