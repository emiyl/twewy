#define ADDRESS_1 0x27ffdc4
#define ADDRESS_2 0x27ffda0

int read_int_from_table1(int index) {
    int *ptr = ADDRESS_1 + (index << 2);
    return *ptr;
}

int read_int_from_table2(int index) {
    int *ptr = ADDRESS_2 + (index << 2);
    return *ptr;
}