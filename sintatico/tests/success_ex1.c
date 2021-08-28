int funcA() {
    return 0;
}

int funcB() {
    return 1;
}

int funcC(int a) {
    return a + 1;
}

int funcD(int a, int b) {
    int c;
    int d;
    d = a + b;
    c = d*10;
    return c;
}

int main() {
    int a;
    int b;
    int c;
    
    write("Digite o valor de a: ");
    read(a);
    write("Digite o valor de b: ");
    read(b);

    if(c = a >= b) {
        return a;
    } else {
        return b;
    }

    return 0;
}