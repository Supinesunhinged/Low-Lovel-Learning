// Pointer Types
int *ip; // Pointer to int
char *cp; // Pointer to char
void *vp; // Pointer to void

int i = 17;
int *ip = &i; // Address-of operator

ip = &*ip; // Indirection operator *

// Arrays
int ia[11];
float *afp[17]; // Array Float Pointer

char str[11];
for (unsigned int i = 0; i < 10; ++i) {
    str[i] = '0' + i;
}
str[10] = '\0';

// Matrix
void func(int arr[5]);
int main(void) {
    unsigned int i = 0;
    unsigned int j = 0;
    int arr[3][5];
    func(arr[i]);
    int x = arr[i][j];
    return 0;
}

// Structures
struct sigrecord{
    int signum;
    char signame[20];
    char sigdesc[100];
}   sigline, *sigline_p;

sigline.signum = 5; // (.) operator refernces its members of an object structure type
strcpy(sigline.signame, "SIGINT");
strcpy(sigline.sigdesc, "Interrupt from keyboard");

sigline_p = &sigline;

sigline_p->signum = 5; // Refernces its members with the structure pointer
strcpy(sigline_p->signame, "SIGINT");
strcpy(sigline_p->sigdesc, "Interrupt from keyboard");

// Unions
union {
    struct {
        int type
    } n;
    struct {
        int type;
        int intnode;
    } ni;
    struct {
        int type;
        double doublenode;
    } nf;
} u;
u.nf.type = 1;
u.nf.doublenode = 3.14;