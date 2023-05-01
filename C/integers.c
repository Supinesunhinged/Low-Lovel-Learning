unsigned int ui; // unsigned is required
unsigned u; // int can be omitted
unsigned long long ull2; // int can be omitted
unsigned char uc; //unsigned is required

int i; // signed can be ommited
long long int sll; // signed can be ommited
long long sll2; // signed and int can be ommited
signed char sc; // signed is required

// Wraparound
    // Unsigned integer wraparound
    unsigned int ui = UINT_MAX; // 4,294,967,295 on x86
    ui++;
    prinf("ui = %u\n", ui); // ui is 0
    ui--;
    printf("ui = %u\n". ui); // ui is 4,294,967,295

    // example
    extern unsigned int ui, sum;
    // assign values to ui and sum
    if (ui > UNINT_MAX - sum)
        too_big();
    else
        sum = sum + ui;

    // example
    if (j > i) // correct
        negative();
    else
        i = i - j;