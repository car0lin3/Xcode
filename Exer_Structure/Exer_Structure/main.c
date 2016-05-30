//
//  main.c
//  Exer_Structure
//
//  Created by Gyuwon Lee on 5/30/16.
//  Copyright © 2016 Gyuwon Lee. All rights reserved.
//

#include <stdio.h>

typedef struct Data{
//    char name;
    int january;
    int february;
    int march;
}temp_data;

int main(int argc, const char * argv[]) {
    // insert code here...
    temp_data data[2];

    data[0].january=-5;
    data[0].february=-3;
    data[0].march=1;
    
    data[1].january=10;
    data[1].february=15;
    data[1].march=18;
    
    int i=0;
    while(i<2){
        printf("%d, %d, %d\n", data[i].january, data[i].february, data[i].march);
        i++;
    }
    
    
    return 0;
}
