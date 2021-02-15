/*
 * student_struct.c
 *
 *  Created on: 2021/02/15
 *      Author: seiya
 */

#include <stdio.h>
#include <string.h>

#define STUDENT_NUM (5)

typedef struct{
  char name[256];    //  学生の名前
  int id;            //  学生番号
  int sex;           //  性別(性別 0:男 1:女)
  int grade;         //  学年
}student_data;

void student_struct(){
    int i;
    student_data student[STUDENT_NUM];
    //  名前の設定
    strcpy(student[0].name,"青木一");
    strcpy(student[1].name,"遠藤京子");
    strcpy(student[2].name,"加藤悟");
    strcpy(student[3].name,"佐々木八重子");
    strcpy(student[4].name,"田中徹");

    //  学生番号の設定
    student[0].id = 1001;
    student[1].id = 1002;
    student[2].id = 1003;
    student[3].id = 1004;
    student[4].id = 1005;
    //  性別の設定
    student[0].sex = 0;
    student[1].sex = 1;
    student[2].sex = 0;
    student[3].sex = 1;
    student[4].sex = 0;
    //  学年
    student[0].grade = 1;
    student[1].grade = 1;
    student[2].grade = 1;
    student[3].grade = 1;
    student[4].grade = 1;
    //  学生のデータの表示
    for(i = 0; i < STUDENT_NUM; i++){
        printf("名前:%s\n",student[i].name);
        printf("性別:");
        if(student[i].sex == 0){
            printf("男\n");
        }else{
            printf("女\n");
        }
        printf("学生番号:%d\n",student[i].id);
        printf("学年:%d\n\n",student[i].grade);
    }
}
