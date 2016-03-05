//
//  main.c
//  0303_2_Numbermerge
//
//  Created by Gyuwon Lee on 3/3/16.
//  Copyright © 2016 Gyuwon Lee. All rights reserved.
//

#include <stdio.h>

void dissecNumbers(int number);

int main(int argc, const char * argv[]) {
    unsigned int number=0;
    
    printf("Give me a number.\n");
    scanf("%d", &number);
    
    dissectNumbers(number);
    return 0;
}

int dissectNumbers(int number){
    
    int decimalPoint=1;
    int tempOne=0;
    int sum=0;
    
    if (number < 10)
        return 0; //job's finished.
    
    tempOne=number;
    
    while(tempOne>=10){
        tempOne=tempOne/10;
        decimalPoint++;
    } //find decimal point
    
    printf("decimal point: %d\n", decimalPoint);
    
    int array[decimalPoint];
    
    while (decimalPoint >=0){
        for (int j=0; j<decimalPoint; j++){
            int i=1;
            int temp=i*10^(decimalPoint-1);
            while(temp < number){
                i++;
                temp=i*10^(decimalPoint-1);
            }
            array[decimalPoint]=i;
            number=array
        }
        
    }
    
    dissectNumbers(number);

    return 0;
}