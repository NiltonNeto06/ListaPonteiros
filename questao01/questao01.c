#include <stdio.h>
// Os valores das expressoes abaixo sao:
// 1
// -2
// 3
// 10

int main(){
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;
    printf("%d \n", p == &i);
    printf("%d \n", *p - *q);
    printf("%d \n", **&p);
    printf("%d \n", 3 - *p / (*q) + 7);
    return(0);
}
