#include <iostream>

unsigned char to_bcd(unsigned char c);
void print_bits ( unsigned char n);

int main() {
    to_bcd(49);
    to_bcd(37);
}

unsigned char to_bcd(unsigned char c){
    char y = 0;
    char x = 0;
    char bcd;
    y += c % 10;    //49 % 10 = 9
    x += c / 10;    //49 / 10 = 4
    x <<= 4;
    bcd = x|y;

    /*
    (0000xxxx << 4) | 0000yyyy
     xxxx0000 | 0000yyyy
     xxxxyyyy
    */

    printf("%d\n",bcd);
}

void print_bits ( unsigned char n)
{
    char i;
    for (i = 8 * sizeof ( unsigned char ) - 1; i >= 0 ; i --)
        printf ("%d", (1 << i & n) >> i);
}
