#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

static void doubleup_main(int *p);

void doubleup(void){
//  サイズSIZEの配列を用意する。
int nums[SIZE];
int *p = NULL;
int i;

for( i = 0 ; i < 5; i++){
	nums[i] = rand() % 101;
}

p = nums; //  pにnumsのアドレスを入力
doubleup_main(p);
}

static void doubleup_main(int *p){
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
