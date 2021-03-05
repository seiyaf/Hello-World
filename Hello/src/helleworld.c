/*
 * helleworld.c
 *
 *  Created on: 2021/02/23
 *      Author: seiya
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE    256

void helleworld() {
    FILE *file;                                     // ファイルポインタ（出力用）
    file = fopen("C:\\work\\test\\helloworld.txt", "w"); // ファイルを書き込み用にオープン
    if (file == NULL) {                             // オープンに失敗した場合
        printf("ファイルが開けません。¥n");         // エラーメッセージを出して
        exit(1);                                    // 異常終了
    }
    //  ファイルにデータを書き込む
    fprintf(file,"Hello World.\n");       // ファイルに書く
    fprintf(file,"ABCDEF\n");
    fclose(file);                       // ファイルをクローズ(閉じる)
}

void datasave() {
    FILE *file;                                     // ファイルポインタ（出力用）
    char s1[SIZE];

    file = fopen("C:\\work\\test\\data.txt", "w"); // ファイルを書き込み用にオープン
    if (file == NULL) {                             // オープンに失敗した場合
        printf("ファイルが開けません。¥n");         // エラーメッセージを出して
        exit(1);                                    // 異常終了
    }

    while(1){
      //文字列の入力を待つ
      printf("文字列を入力してください\n");
      fflush(stdout);
      scanf("%s",s1);

      //qが入力されたら終了
      if(strcmp(s1,"q") == 0){
        break;
      }
      //  ファイルにデータを書き込む
      fprintf(file,s1);       // ファイルに書く
      fprintf(file,"\n");
    }

    fclose(file);                       // ファイルをクローズ(閉じる)

}

void displaya() {
    FILE *file;                                     // ファイルポインタ（出力用）
    int i = 0;                                      //ループ用変数
    char num[SIZE] = "\0";                          //  取り出された文字列

    file = fopen("C:\\work\\test\\words.txt", "r"); // ファイルを書き込み用にオープン
    if (file == NULL) {                             // オープンに失敗した場合
        printf("ファイルが開けません。¥n");         // エラーメッセージを出して
        exit(1);                                    // 異常終了
    }

    //  ファイルのデータ読み込む
    while (1) {
        num[i] = (char)fgetc(file);
        if(num[i] == ','){
            num[i] = '\0';
            if(num[0] == 'a'){
                printf("%s\n",num);
            }
            i = 0;
        }
        else if(num[i] == EOF){
            num[i] = '\0';
            if(num[0] == 'a'){
                printf("%s\n",num);
            }
            break;
        }
        else{
            i++;
        }

    }
    fclose(file);                       // ファイルをクローズ(閉じる)

}
