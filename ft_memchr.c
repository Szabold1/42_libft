#include <stddef.h>

void    *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char    *c_str;
    
    c_str = (unsigned char *)str;
    while (n > 0)
    {
        if (*c_str == (unsigned char)c)
            return (c_str);
        c_str++;
        n--;
    }
    return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "hello world";
    char *res1o = memchr(str, 'o', 11);
    char *res1 = ft_memchr(str, 'o', 11);
    char *res2o = memchr(str, 'w', 6);
    char *res2 = ft_memchr(str, 'w', 6);
    printf("%s | original\n", res1o);
    printf("%s\n", res1);
    printf("%s | original\n", res2o);
    printf("%s\n", res2);
    return (0);
}
