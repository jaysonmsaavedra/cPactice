#include <stdio.h>

float conversion(float x);

int main() {
    float numToConvert;
    float firstNum;
    float result;
    
    printf("Enter your celsius temperature here: \n");
    while((firstNum=getchar()) != '\n'){
        numToConvert = firstNum - '0';
    }
    
    result = conversion(numToConvert);
    printf("%f", result);
    return 0;
}

float conversion(float cel){
    return ((cel*(9.0/5.0))+32.0);
}