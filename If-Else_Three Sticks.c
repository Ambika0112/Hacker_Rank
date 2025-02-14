#include <stdio.h>

int main() {
int a,b,c;
    scanf("%d", &a);
     scanf("%d", &b);
     scanf("%d", &c);
    if( a+b>c && a+c>b && b+c>a){
        if(a==b && a==c){
            printf("Lengths: [%d, %d, %d]\n",a,b,c);
            printf("Type: Equilateral\n");
            printf("All sides are of the same length.");
        }
        else if(a==b || b==c || a==c){
            printf("Lengths: [%d, %d, %d]\n",a,b,c);
            printf("Type: Isosceles\n");
            printf("Exactly two sides are equal.");

        }
        else{
            printf("Lengths: [%d, %d, %d]\n",a,b,c);
            printf("Type: Scalene\n");
            printf("All sides are of different lengths.");
        }
    }
    else {
           printf("Lengths: [%d, %d, %d]\n",a,b,c);
           printf("Type: Invalid\n");
           printf("Cannot form a valid shape.");
    }
    
}