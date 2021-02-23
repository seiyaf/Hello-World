/*
 * kakeibo.c
 *
 *  Created on: 2021/02/23
 *      Author: seiya
 */

#include <stdio.h>
#include <string.h>

#define MONTH_NUM (6)

typedef struct{
    int mon;         //  月
    int house;       //  住居費
    int eat;         //  食費
    int clothes;     //  被服費
    int rducation;   //  教育費
    int medical;     //  医療費
    int other;       //  その他
}kakeibo_data;

static int summ(kakeibo_data* data);

void kakeibo(void){
    int i;
    int goukei[MONTH_NUM];
    int maxim_flg = 0;        //どの月の医療費が一番多いかフラグ

    //家計簿データの構造体の配列を一気に宣言
    kakeibo_data kakeibo[MONTH_NUM] =
        {
            {1,86000,47000,3000,20000,9500,66000},
            {2,86000,43000,30000,15000,0,43000},
            {3,86000,38600,5000,65000,500,76000},
            {4,86000,39500,0,12000,0,75000},
            {5,86000,38600,28000,7000,5200,63500},
            {6,86000,37500,3000,5000,0,66000}
        };

    //月ごとに生活費を算出し配列に格納
    printf("各月：の出費の合計\n");
    printf("---------------------\n");
    for(i = 0; i < MONTH_NUM; i++){
      goukei[i] = summ(&kakeibo[i]);
      printf("%d月 %d\n",kakeibo[i].mon, goukei[i]);
    }

    //何月の医療費が一番多いか判定
    printf("\n医療費の最も多い月：");
    for(i = 0; i < MONTH_NUM; i++){
      if(kakeibo[maxim_flg].medical < kakeibo[i].medical){
        maxim_flg = i;
      }
    }
    printf("%d月\n",kakeibo[maxim_flg].mon);

    //何月の食費が一番多いか判定
    printf("食費の最も多い月と金額：");
    for(i = 0; i < MONTH_NUM; i++){
      if(kakeibo[maxim_flg].eat < kakeibo[i].eat){
        maxim_flg = i;
      }
    }
    printf("%d月、%d\n",kakeibo[maxim_flg].mon, kakeibo[maxim_flg].eat);

}

//生活費の合計を算出する関数
static int summ(kakeibo_data* data){
  int i;

      i = data->house +
      data->eat +
      data->clothes +
      data->rducation +
      data->medical +
      data->other;

  return i;
}
