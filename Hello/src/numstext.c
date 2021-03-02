/*
 * numstext.c
 *
 *  Created on: 2021/03/03
 *      Author: seiya
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE    256

void numstext() {
    FILE *file;                                     // ファイルポインタ（出力用）
    int i = 0;                                      //ループ用変数
    int sum = 0;                                    //  文字列を変換した数値の合計
    char num[SIZE] = "\0";                          //  取り出された文字列
    file = fopen("C:\\work\\test\\nums.txt", "r"); // ファイルを書き込み用にオープン
    if (file == NULL) {                             // オープンに失敗した場合
        printf("ファイルが開けません。¥n");         // エラーメッセージを出して
        exit(1);                                    // 異常終了
    }
    //  ファイルのデータ読み込む
    while (1) {
        num[i] = (char)fgetc(file);
        if(num[i] == ','){
            num[i] = '\0';
            printf("%s\n",num);
            sum += atoi(num);
            i = 0;
        }
        else if(num[i] == EOF){
            num[i] = '\0';
            printf("%s\n",num);
            sum += atoi(num);
            break;
        }
        else{
            i++;
        }

    }
    printf("----------\n合計:%d",sum);

    fclose(file);                       // ファイルをクローズ(閉じる)
}
