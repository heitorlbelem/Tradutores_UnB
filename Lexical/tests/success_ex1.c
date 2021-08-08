int main() {
    int a;
    read(a);
    float b;
    read(b);

    if(a > b) {
        write("a > b");
    } else if(a < b) {
        write("a < b");
    } else {
        write("a = b");
    }

    return 0;
}