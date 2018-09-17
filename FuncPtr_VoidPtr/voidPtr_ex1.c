int main(void) {
    char c = 'a';
    int n = 10;

    void* vp;
    vp = &c;
    vp = &n;
    // void pointer can store any kind of data. But only can store data, and cannot operate.

    *((int*) vp) = 20;
    // void pointer needs explicit type conversion to be used. It's useful in dynamic memory allocation.

    return 0;
}