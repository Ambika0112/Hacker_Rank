#include <stdio.h>
#include <string.h>

int main() {
  int y,m;
    scanf("%d",&m);
    scanf("%d",&y);
    if( y>0){
        if(((y%4 == 0 && y%100 != 0) || (y%400 == 0)) && m == 2){
        printf("29");  
            return 0;
    }
     switch(m){
            case 1: printf("31");
            break;
            case 2: printf("28");
            break;
            case 3: printf("31");
            break;
            case 4: printf("30");
            break;
            case 5: printf("31");
            break;
            case 6: printf("30");
            break;
            case 7: printf("31");
            break;
            case 8: printf("31");
            break;
            case 9: printf("30");
            break;
            case 10: printf("31");
            break;
            case 11: printf("30");
            break;
            case 12: printf("31");
            break;
            default : printf("Invalid Month\n");
                break;
    }
    }
    else if(m>0 && m<=12) {printf("Invalid Year");}
    else {printf("Invalid Month\nInvalid Year");}
    
}