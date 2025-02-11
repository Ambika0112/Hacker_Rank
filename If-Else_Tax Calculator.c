#include <stdio.h>
int main() {
float income;
    float tax=0;
    scanf("%f",&income);
    if(income<0){
        printf("INVALID");
    }
    else {
        if(income<=250000)           tax = 0;
        else if(income<=500000)      tax = (income - 250000)*0.05;
        else if(income<=1000000)     tax = (250000*0.05) + (income-500000)*0.2;
        else if(income>1000000)     tax = (250000*0.05) + (500000*0.2) + (income - 1000000)*0.3;
        printf("%.2f",tax);
        
    }
    return 0;
}