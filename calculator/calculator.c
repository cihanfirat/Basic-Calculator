#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char operator;
    printf("Choose An Operator [+, -, *, /]");
    scanf("%c",&operator);
    
    double num1, num2;
    printf("Enter First Number:");
    scanf("%lf", &num1);
    printf("Enter Second Number:");
    scanf("%lf", &num2);
    
    double result;
    switch(operator) {
        case '+' :
            result = num1 + num2;
            break;
        case '-' :
            result = num1 - num2;
            break;
        case '*' :
            result = num1 * num2;
            break;
        case '/' :
            result = num1 / num2;
            break;
        
        
    }
    printf("%.2lf", result);
  
    return 0;
}

