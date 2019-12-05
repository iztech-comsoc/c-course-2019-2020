/*
    The series, 1^1 + 2^2 + 3^3 + ... + 10^10 = 10405071317.
    Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.
*/
typedef unsigned long long int ullong;

ullong pow_mod(int x, int y, ullong z) {
    ullong result = 1;

    for(int i = 0; i < y; i++) {
        result = (result * x) % z;
    }

    return result;
}

ullong self_power() {
    ullong result = 0;

    for (int i = 1; i < 1001; i++) {
        result = (result + pow_mod(i, i, 10000000000)) % 10000000000;
    }

    return result;
}

