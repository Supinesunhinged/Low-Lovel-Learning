#include <stdio.h>
#include <stdlib.h>
#define PIE 3.14159265359 // macro allows constant values
/*
---- Variables ----
int | ex. int i = 10;
char | ex. char c = 'c'; (add [] to variable name to make it into string)
float | ex. float f = 3.14;
double | ex. double a = 123123123.00; (stores decimal numbers with double percision)
void = no value is present

*/

int main(){
    printf("Hello, World");
}

void sorting(){
    int integar = 10;
    float floatvar = 3.5;
    char string[] = "Hello, World";

    printf("%d is an integar\n", integar);
    printf("%f is a float\n", floatvar);
    printf("%s is a char\n", string);
}

void inputandoutput(){
    char *first; // Pointer (variable which stores the address of another variable)
    char *last;

    printf("Enter your first name: ");
    scanf("%ms", &first);
    printf("Enter your last name: ");
    scanf("%ms", &last);

    printf("Hello %s %s!\n", first, last);

    free(first);
    free(last);
}

void areaforcircle(){
    float radius;

    printf("Enter the radius of your circle: ");
    scanf("%f", &radius);
    float sum = PIE * radius * radius;

    printf("The area of your circle is %f", sum);
}

void timeconversion(){
  //initialize var
  float seconds;
  
  //get value for var
  printf("Enter the amount of seconds: ");
  scanf("%f", &seconds);

  //initialize our arithmetic vars
  float hours;
  float mins;
  float remaining_seconds;

  //make sure the hours value is a whole number that doesn't consider the decimal by using the (int) operation. 
  //for instance, 1.2 hours will be stored in hours as 1.0 here
  hours = (int)(seconds / 3600);
  
  //repeat for mins
  mins = (int)((seconds - (hours * 3600))/60);
  // (int) converts the float to int
  
  //remaining_seconds is simply what's leftover
  remaining_seconds = (seconds - (hours * 3600) - (mins * 60));
  printf("%0.0f seconds is equal to %0.0f hours, %0.0f minutes, and %0.0f seconds.", seconds, hours, mins, remaining_seconds);
 // %0.0f for float type
}

void remaindercheck(){

    int numerator, denominator; // initializing two variables

    printf("Enter a numberator: ");
    scanf("%d", &numerator);
    printf("Enter a denominator: ");
    scanf("%d", &denominator);

    if(numerator % denominator == 0){
        printf("There is a NOT remainder!");
    }
    
    else {
        printf("There is a remainder!");
    }
}