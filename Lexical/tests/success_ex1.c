int main(int i, float j) {
    int k;
    read(k);
    write(k);
    int _result1;
    int res_2_b;
    if(i < j){
        j = 1.2;
        i = 2;
        _result1 = j - i;
        write(k);
    } else {
        i = 1;
        j = .5;
        res_2_b = i + j;
        write(k);
    }

    write(res_2_b - _result1);
    return 0;
}