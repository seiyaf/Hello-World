/*
 * kimatu_test.c
 *
 *  Created on: 2021/02/16
 *      Author: seiya
 */

#include <stdio.h>
#include <string.h>

#define STUDENT_NUM (5)

typedef struct{
    int id;         //  学生番号
    int kokugo;     //  国語の点数
    int sansu;      //  算数の点数
    int rika;       //  理科の点数
    int shakai;     //  社会の点数
    int eigo;       //  英語の点数
}student_data;

static int summ(student_data* data);
void sort(int* goukei, student_data* data);

void kimatu_test(void){
    int i;
    int goukei;
    //学生データの構造体の配列を一気に宣言
    student_data student[STUDENT_NUM] =
        {
            {1001,82,43,53,84,45},
            {1002,92,83,88,79,99},
            {1003,43,32,53,45,66},
            {1004,72,73,71,68,59},
            {1005,99,72,82,91,94}
        };

    //教科ごとに平均点を計算
    for(i = 0, goukei = 0; i < STUDENT_NUM; i++){
      goukei += student[i].kokugo;
    }
    printf("国語　平均:%.2f\n",(float)goukei / STUDENT_NUM);

    for(i = 0, goukei = 0; i < STUDENT_NUM; i++){
      goukei += student[i].sansu;
    }
    printf("算数　平均:%.2f\n",(float)goukei / STUDENT_NUM);

    for(i = 0, goukei = 0; i < STUDENT_NUM; i++){
      goukei += student[i].rika;
    }
    printf("理科　平均:%.2f\n",(float)goukei / STUDENT_NUM);

    for(i = 0, goukei = 0; i < STUDENT_NUM; i++){
      goukei += student[i].shakai;
    }
    printf("社会　平均:%.2f\n",(float)goukei / STUDENT_NUM);

    for(i = 0, goukei = 0; i < STUDENT_NUM; i++){
      goukei += student[i].eigo;
    }
    printf("英語　平均:%.2f\n",(float)goukei / STUDENT_NUM);

}

void kimatu_test2(void){
    int i;
    int goukei[STUDENT_NUM];
    //学生データの構造体の配列を一気に宣言
    student_data student[STUDENT_NUM] =
        {
            {1001,82,43,53,84,45},
            {1002,92,83,88,79,99},
            {1003,43,32,53,45,66},
            {1004,72,73,71,68,59},
            {1005,99,72,82,91,94}
        };

    //生徒ごとにの全教科合計点を算出し配列に格納
    for(i = 0; i < STUDENT_NUM; i++){
      goukei[i] = summ(&student[i]);
    }

    //合計点の高い順にソート
    sort(&goukei[0], &student[0]);

    //ソートした順に出力
    printf("番号      国語    数学    理科    社会    英語    合計\n");
    for(i = 0; i < STUDENT_NUM; i++){
      printf("%d        %d      %d      %d      %d      %d      %d\n",
        student[i].id,
        student[i].kokugo,
        student[i].sansu,
        student[i].rika,
        student[i].shakai,
        student[i].eigo,
        goukei[i]
      );
    }
}

//教科の合計点を算出する関数
static int summ(student_data* data){

  return data->kokugo + data->sansu + data->rika + data->shakai + data->eigo;
}

//合計点が高い生徒順にソートする関数
void sort(int* goukei, student_data* data){
  int i;
  int j;
  int temp = 0;
  student_data tempdata;
  for(i = 0; i < STUDENT_NUM; i++){
    for(j = i; j < STUDENT_NUM; j++){
      if (goukei[i] < goukei[j]){
        temp = goukei[i];
        goukei[i] = goukei[j];
        goukei[j] = temp;
        tempdata = data[i];
        data[i] = data[j];
        data[j] = tempdata;
      }
    }
  }
}
