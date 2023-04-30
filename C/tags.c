struct s {
    //---snip---
};

struct s v;     // instance of struct s
struct s *p;   // pointer to struct s

enum day { sun, mon, tue, wed, thu, fri, sat};
day today; // error
enum day tomorrow; // OK

enum status { ok, fail}; // enumeration
enum status status(void); // function

struct s s;

typedef struct s { int x; } t;
typedef struct { int x; } t;

struct tnode {
    int count;
    struct tnode *left;
    struct tnode *right;
};

typedef struct tnode {
    int count;
    struct tnode *left;
    struct tnode *right;
} tnode;

typedef struct tnode tnode;
struct tnode {
    int count;
    tnode *left;
    tnode *right;
} tnode;

typedef void fv(int), (*pfv)(int);
void (*signal(int, void (*)(int)))(int);
fv *signal(int, fv *);
pfv signal(int, pfv);