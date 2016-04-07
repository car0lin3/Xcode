//
//  main.c
//  0407_369 Game
//
//  Created by Gyuwon Lee on 4/7/16.
//  Copyright © 2016 Gyuwon Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Set interval. From: ");
    int begin, end;
    int countClap;
//    int i; // used inside the loop
    int copy;
    int temp=1;
    
    scanf("%d", &begin);
    printf("To: ");
    scanf("%d", &end);
    printf("\n");
    
    for (int i=begin; i<=end; i++){
        if(i%3==0){
            countClap++;
            printf("counted #1, current number:%d\n", i); //#1
            continue;
        }
        copy=i;
        while(copy>10){
            while(copy%10==!0){
                temp=0;
                copy--;
                temp++;
            }
            
            if(temp%3==0){
                countClap++;
                printf("counted #2, current number:%d\n", copy); //#2
                continue;
            }
            copy=(copy-temp)/10;
        }
        
        //for numbers between 1-10
        while(copy>0){
            temp=0;
            copy--;
            temp++;
        }
        if(temp%3==0){
            countClap++;
            printf("Counted #3, current number:%d\n", copy); //#3
            continue;
        }
    }
    
    printf("Clapping times: %d\n", countClap);
    return 0;
}
