/*
 * scoretext.c
 *
 *  Created on: 2021/03/05
 *      Author: seiya
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE    256

void scoretext() {
    FILE *file;                                     // ファイルポインタ（出力用）
    char line[SIZE];                               //  読み込む行
    int i = 0;                                      //ループ用変数
    int highscore = 0;                              //最高点
    char name[10];
    char champ[10];
    int numberflag = 1;                             //数値文字判断
    char *ptr;

    file = fopen("C:\\work\\test\\score.txt", "r"); // ファイルを書き込み用にオープン
    if (file == NULL) {                             // オープンに失敗した場合
        printf("ファイルが開けません。¥n");         // エラーメッセージを出して
        exit(1);                                    // 異常終了
    }

    printf("プレイヤー 得点\n--------------------\n");
    //  ファイルのデータ読み込む
    while ( fgets(line, SIZE, file) != NULL ) {
        ptr = strtok(line,",");
        strcpy(name,line);
        printf("%s ", line);

        while(ptr != NULL) {
            numberflag = 1;
            // strtok関数により変更されたNULLのポインタが先頭
            ptr = strtok(NULL, ",");

            // ptrがNULLの場合エラーが発生するので対処
            if(ptr != NULL) {
                //文字列が数値かどうか調べる
                for (i=0; i<strlen(ptr)-1; i++) {
                    if (!isdigit(ptr[i])) {
                        numberflag = 0;
                    }
                }
                //文字列が数字ならハイスコアかどうか判定
                if(numberflag == 1){
                    if(highscore < atoi(ptr)){
                        highscore = atoi(ptr);
                        strcpy(champ,name);
                    }
                }
                else{
                    strcpy(name,ptr);
                }
                //文字列を表示
                printf("%s", ptr);
            }
        }

    }
    printf("\n最高得点： %s(%d点)",champ ,highscore);

    fclose(file);                       // ファイルをクローズ(閉じる)

}
