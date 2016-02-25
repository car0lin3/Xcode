//
//  main.c
//  0225_BubbleSort
//
//  Created by Gyuwon Lee on 2/25/16.
//  Copyright © 2016 Gyuwon Lee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int number=0;
    int statExchange=0;
    int statIteration=0;
    
    srand((unsigned)time(NULL));
    
    printf("How many? Input must be no greater than 100.\n");
    while(1){
        scanf("%d", &number);
        if(number<=100){
            break;
        }
        printf("Please try again.\n");
    }
    
    int array[number];
    
    printf("An array created.\n");
    for (int i=0; i<number; i++){
        array[i]=rand()%1000;
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    for (int i=0; i<number-1; i++){
        statIteration++;
        for (int j=0; j<number-1-i; j++){
            statIteration++;
            if(array[j]>=array[j+1]){
                statExchange++;
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
    
    printf("The array has sorted.\n");
    for (int i=0; i<number; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    printf("The # of Iterations: %d\nThe # of Exchange: %d\n", statIteration, statExchange);
    
    return 0;
}
