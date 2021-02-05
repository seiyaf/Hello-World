/*
 * main.c
 *
 *  Created on: 2021/01/16
 *      Author: seiya
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void dobleup(int*);

int main(){
	/*printf("Hello World.\n");

	int ar1[SIZE];
	char ar2[SIZE];
	int i;
	int* p1 = NULL;
	char* p2 = NULL;
	//  値を代入
	for(i = 0; i < SIZE; i++){
		ar1[i] = i;
		ar2[i] = 'A'+i;
	}
	//  ポインタにアドレスを代入
	p1 = &ar1[0];
	p2 = &ar2[0];
	//  値を出力
	for(i = 0; i < SIZE; i++){
		printf("ar1[%d]=%d *(p1+%d)=%d ",i,ar1[i],i,*(p1+i));
		printf("ar2[%d]=%c *(p2+%d)=%c¥n",i,ar2[i],i,*(p2+i));
	}

	return 0;*/

    //  サイズSIZEの配列を用意する。
    int nums[SIZE]  ;
    int *p = NULL;
    int i;

    for( i = 0 ; i < 5; i++){
    	nums[i] = rand() % 101;
    }

    p = nums; //  pにnumsのアドレスを入力
    dobleup(p);

}

void dobleup(int *p)
{
    int i;

	printf("発生した乱数\n");
    for( i = 0 ; i < SIZE; i++){
        printf("%d ",*(p + i) );
    }
    printf("\n");

	printf("二倍した値\n");
    for( i = 0 ; i < SIZE; i++){
        printf("%d ",*(p + i) * 2);
    }
    printf("\n");

}
