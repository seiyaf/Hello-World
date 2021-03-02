/*
 * sampletext.c
 *
 *  Created on: 2021/03/02
 *      Author: seiya
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE    256

void sampletext() {
    FILE *file;                                     // ファイルポインタ（出力用）
    char line[SIZE];                            //  読み込む行
    line[0] = '\0';                             //  初期化（空文字列）
    file = fopen("C:\\work\\test\\sample.txt", "r"); // ファイルを書き込み用にオープン
    if (file == NULL) {                             // オープンに失敗した場合
        printf("ファイルが開けません。¥n");         // エラーメッセージを出して
        exit(1);                                    // 異常終了
    }
    //  ファイルのデータ読み込む
    while ( fgets(line, SIZE, file) != NULL ) {
        printf("%s", line);
    }

    fclose(file);                       // ファイルをクローズ(閉じる)
}

void wordstext() {
    FILE *file;                                     // ファイルポインタ（出力用）
    int c;                                        //  読み込む文字のコード
    file = fopen("C:\\work\\test\\words.txt", "r"); // ファイルを書き込み用にオープン
    if (file == NULL) {                             // オープンに失敗した場合
        printf("ファイルが開けません。¥n");         // エラーメッセージを出して
        exit(1);                                    // 異常終了
    }
    //  ファイルのデータ読み込む
    while ( (c=fgetc(file)) != EOF ) {
      if((char)c == ','){
        printf("\n");
      }
      else{
        printf("%c",(char)c);
      }
    }

    fclose(file);                       // ファイルをクローズ(閉じる)
}
