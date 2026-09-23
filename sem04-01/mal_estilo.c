#include <stdio.h>
int main() {
    int a=3,b=4;
    
    int r=(a>0 ? a : -a) + (b>0 ? b: -b)*2 - (a+b)/2;
    
    printf("%d",r);
    return 0;
}