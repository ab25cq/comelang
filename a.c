#define type_tag(x) _Generic((x), \
    int: 1, \
    unsigned: 2, \
    long: 3, \
    unsigned long: 4, \
    float: 5, \
    double: 6, \
    default: 0)


int main(int argc, char** argv) {
    int ti = type_tag((int)0);
    int tu = type_tag((unsigned)0);
    int tl = type_tag((long)0);
    int tdl = type_tag((double)0);

    return 0;
}
