//
//  main.c
//  NLP assignment
//
//  Created by Gyuwon Lee on 5/17/16.
//  Copyright © 2016 Gyuwon Lee. All rights reserved.
//

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[10];
    int january;
    int february;
    int march;
    int april;
    int may;
    int june;
    int july;
    int august;
    int september;
    int october;
    int november;
    int december;
}temp_data;

int main(int argc, const char * argv[]) {
    
    FILE *f;
    f=fopen("/Users/Juan/Documents/Xcode/NLP assignment/NLP assignment/mean_temperature.csv", "r");
    if(f==NULL){
        printf("File open failure\n");
        return -1;
    } //CHECK FILE OPENING
    
    temp_data data[5];
    int k=0;
    
    /* 분할할 문자열을 담을 버퍼를 할당합니다. */
    char string[256] = {0};
    fgets(string, 256, f);
    /* 분할 기준 문자를 지정합니다. */
    char delimiters[1] = ",";
    /* 연속해서 분할 작업을 할 것이므로, strtok가 반환하는 문자 위치를 보관합니다. */
    char * pointer = NULL;
    /* 예시 문자열을 버퍼에 복사합니다.
    strtok을 처음 호출할 때는 분할할 문자열을 첫 번째 인자에 전달합니다. */
    pointer = strtok(string, delimiters);
    /* 무한루프 */
    while(pointer != NULL){
        /* strtok가 NULL을 반환했다면 루프 종료합니다. */
        printf("%s\n", pointer);
        /* 계속해서 문자열을 분할할 때는 첫 번째 인자를 NULL로 지정합니다.
        string 문자열을 분할하던 중이었음을 strtok 함수가 이미 기억하고 있기 때문입니다. */
        pointer = strtok(NULL, delimiters);
        }
    fclose(f);
    return 0;
}
