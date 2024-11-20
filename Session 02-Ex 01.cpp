#include <stdio.h>

int main() {
    // Kieu so ngyen
    int a = 10; 

    // Kieu so thuc
    float b = 3.14f; 

    // Kieu so thuc kep
    double c = 3.14159265359; 

    // Kieu ki tu
    char d = 'A';

    // Kieu so nguyen khong dau
    unsigned int f = 100; 

    // Kieu so nguyen ngan
    short g = -32768;

    // Kieu so nguyen dai
    long h = 123456789; 

    // Kieu so nguyen sieu dai
    long long i = 9223372036854775807; 

    // in cac gia tri bien ra man hinh
    printf("int: %d\n", a);
    printf("float: %.2f\n", b);
    printf("double: %.10f\n", c);
    printf("char: %c\n", d);
    printf("unsigned int: %u\n", f);
    printf("short: %d\n", g);
    printf("long: %ld\n", h);
    printf("long long: %lld\n", i);

    return 0;
}


