/*
 * helleworld.c
 *
 *  Created on: 2021/02/23
 *      Author: seiya
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE    256

void helleworld() {
    FILE *file;                                     // ファイルポインタ（出力用）
    file = fopen("C:\\work\\test\\helloworld.txt", "w"); // ファイルを書き込み用にオープン
    if (file == NULL) {                             // オープンに失敗した場合
        printf("ファイルが開けません。¥n");         // エラーメッセージを出して
        exit(1);                                    // 異常終了
    }
    //  ファイルにデータを書き込む
    fprintf(file,"Hello World.¥r¥n");       // ファイルに書く
    fprintf(file,"ABCDEF¥r¥n");
    fclose(file);                       // ファイルをクローズ(閉じる)
}
