// Const
const int i = 1; // const-qualified int
i = 2; // error: i is const-qualified

const int i = 1; // object of const-qualified type
int *ip = (int *)&i;
*ip = 2; // undefined behavior

int i = 12;
const int j = 12;
const int *ip = &i;
const int *jp = &j;
*(int *)ip = 42; // ok
*(int *)jp = 42// undefined behavior

// volatile
volatile int port;
port = port;

// restrict
void f(unsigned int n, int * restrict p, int * restrict q) {
    while (n-- > 0) {
        *p++ = *q++;
    }
}