//
//  main.c
//  Baseball game
//
//  Created by Gyuwon Lee on 3/3/16.
//  Copyright © 2016 Gyuwon Lee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // insert code here...
    int count=0;
    int gameSet=0;
    srand((unsigned)time(NULL));
    int numberOne, numberTwo, numberThree;
    int inputOne=0, inputTwo=0, inputThree=0;
    
    numberOne=rand()%10;
    numberTwo=rand()%10;
    numberThree=rand()%10;
    while (numberTwo==numberOne || numberThree==numberOne || numberTwo==numberThree){
        numberTwo=rand()%10;
        numberThree=rand()%10;
    }//Assign new numbers if there's a collision
    
    printf("%d %d %d\n", numberOne, numberTwo, numberThree);
    
    while(gameSet==0){
        printf("GIVE ME THREE NUMBERS BETWEEN 0~9.\n");
        scanf("%d %d %d", &inputOne, &inputTwo, &inputThree);
        while(inputOne==inputTwo || inputTwo==inputThree || inputOne==inputThree){
            printf("There are same numbers. Please Try again.\n");
            scanf("%d %d %d", &inputOne, &inputTwo, &inputThree);
        }//Input process
        
        while(1){
            int ball=0, strike=0;
            if(inputOne==numberOne) strike++;
            else if(inputOne==numberTwo) ball++;
            else if(inputOne==numberThree) ball++;
            else if(inputTwo==numberOne) ball++;
            else if(inputTwo==numberTwo) strike++;
            else if(inputTwo==numberThree) ball++;
            else if(inputThree==numberOne) ball++;
            else if(inputThree==numberTwo) ball++;
            else if(inputThree==numberThree) strike++;
            printf("%d strike, %d ball\n", strike, ball);
            break;
        }
        if(inputOne==numberOne || inputTwo==numberTwo || inputThree==numberThree){
            gameSet=1;
        }//Terminate game
        
        count++; //Count increased
    }
    
    printf("You tried %d times.\n", count);
    return 0;
}
