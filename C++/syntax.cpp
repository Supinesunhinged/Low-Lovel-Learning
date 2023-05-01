// Declaring Variables
int the_answer;
// Initializing a Variable's State
int the_answer = 42;

int lucky_number = the_answer / 6; // Operators addition +, subtraction -, Multiplication *, Modulo Division %

// Conditional Statements
    // Comparison Operators
    int main() {
        int x = 0;
        42 == x; // Equality
        42 != x; // Inequality
        100 > x; // Greater than
        123 >= x; // Greater than or equal to
        -10 < x; // Less than
        -99 <= x; // Less than or equal to
    }
    // if Statements
    if (boolean-expression) statement

    if (boolean-expression) {
        statement1;
        statement2;
        --snip--
    }

    if (boolean-expression-1) statement-1
    else if (boolean-expression-2) statement-2
    else statement-3
    //example
    #include <cstdio>

    int main() {
        int x = 0;
        if (x > 0) printf("Positive.");
        else if (x < 0) printf("Negative.");
        else printf("Zero.");
    } // output is "Zero."

// Functions
    //syntax
    return-type function_name(par-type1 par_name1, par-type2 par_name2) {
        --snip--
        return return-value;
    }
    //example
    int step_function(int x) {
        int result = 0;
        if (x < 0) {
            result = -1;
        } else if (x > 0) {
            result = 1;
        }
        return result;
    }
    // Calling Functions
    int step_function(int x) {
        --snip--
    }

    int main() {
        int value1 = step_function(100); // value1 is 1
        int value2 = step_function(0); // value2 is 0
        int value3 = step_function(-10); // value3 is -1
    }

// printf Format Specifiers
printf("Ten %d, Twenty %d, Thirty %d", 10, 20, 30);

#include <cstdio>

int step_function(int x) {
    --snip--
}

int main() {
    int num1 = 42;
    int result1 = step_function(num1);

    int num2 = 0;
    int result2 = step_function(num2);

    int num3 = -32767;
    int result3 = step_function(num3);

    printf("Num1: %d, Step: %d\n", num1, result1);
    printf("Num2: %d, Step: %d\n", num2, result2);
    printf("Num3L %d, Step: %d\n", num3, result3);

    return 0;
}

// Comments
    // This comment is on its own line
    int the_answer = 42l // This is an in-line comment

    /*
     *  This is a comment
     *  That lives on multiple lines
     *  Don't forget to close
     */