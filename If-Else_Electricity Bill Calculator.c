#include <stdio.h>

int units;
double bill;
int flag = 1;
int main() {
    scanf("%d", &units);
    
    if(units<=100 && units>=0){
        bill =  units*5;
    }
    else if(units<=300 && units>100){
        bill = 500 + (units -100)*7 ;
        
    }
    else if (units>300 ){
        bill = 1900 + (units -300)*10 ;
    }
    else if(units<0){
        printf("Invalid Input!");
        flag = 0;
    }
    
    if(bill <= 1200 && bill>0){
        bill =  bill*0.9;
    }
   
    if(flag == 1){
        printf("The electricity bill is: %.2f.", bill);
    }    
    
     return 0;
}