int gethostsex(void) {
    union {
        int i;
        char b;
    } u;

    u.i = 1;
    return u.b == 1 ? 1 : 0;
}
