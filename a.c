#include <stdio.h>

int add(int, int);

int main(int argc, char** argv)
{
    int a=1;
    int b=2;
    int c;
    c=add(a,b);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    
    return 0;
}
