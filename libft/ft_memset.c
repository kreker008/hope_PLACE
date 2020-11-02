
#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    int i;

    i = 0;
    while (len--)
    {
        *((char*)b + i) = c;
        ++i;
    }
    return b;
}