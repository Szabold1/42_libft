#include <stddef.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *c_dest;
    char    *c_src;

    c_dest = (char *)dest;
    c_src = (char *)src;
    while (n > 0)
    {
        c_dest[n - 1] = c_src[n - 1];
        n--;
    }
    return (dest);
}

#include <stdio.h>
int main(void)
{
    double src_arr[5] = {1.8, 4.73, 2.8, 4.4, 9.9};
    double dest_arr[5];
    ft_memcpy(dest_arr, src_arr, sizeof(src_arr));
    for (int i = 0; i < 5; i++)
        printf("src: %f | dest: %f\n", src_arr[i], dest_arr[i]);
    return(0);
}
