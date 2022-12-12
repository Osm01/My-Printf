#include "libft_printf.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char *str = "Hello world";
    printf("\n%d\n",ft_printf("%c %d %u %x %X %p",'a',100,-5,1020,1020,str));
    printf("\n%d\n",printf("%c %d %u %x %X %p",'a',100,-5,1020,1020,str));
    return 0;
}
///105986F72
///105986f72