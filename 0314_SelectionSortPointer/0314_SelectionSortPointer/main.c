//
//  main.c
//  0314_SelectionSort
//
//  Created by Gyuwon Lee on 3/14/16.
//  Copyright © 2016 Gyuwon Lee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define true 1;
#define false 0;

void swap(int *a, int *b);

int main(int argc, const char * argv[]) {
    int size;
    printf("Size of number array?\n");
    scanf("%d", &size);
    int array[size];
    srand((unsigned)time(NULL));
    
    for(int i=0; i<size; i++){
        array[i]=rand()%100;
    }
    
    int temp_min;
    int indicator;
    int found=0;
    
    for(int i=0; i<size; i++){
        temp_min=array[i];
        found=0;
        for(int j=i; j<size; j++){
            if(array[j]<temp_min) {
                indicator=j;
                found=1;
            }
        }
        if(found==1){
            swap(&array[i], &array[indicator]);
        }
    }
    
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("Sorting completed.\n");
    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}