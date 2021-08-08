int main() {
    int k;
    k = 0;
    
    int _max;
    _max = 0;

    int sum_1;
    float mul_2;

    sum_1=0;
    mul_2=1.0;

    for(k = 0; k < _max; k++) {
        sum_1 += k;
        mul_2 *= k*.2;
    }

    if( !(sum_1 % 2) > 100) {
        write(sum_1);
    } else if(sum_1*2 < 20) {
        write(sum_1--);
    }

    if(mul_2 == 10) {
        write(mul_2/2);
    }

    return 0;
}