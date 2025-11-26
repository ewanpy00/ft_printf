#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int main(void)
{
    // char str[] = "World!";
    // char *nulls = NULL;
    // int r1, r2;

    // r1 = ft_printf("1) simple: Hello World\n");
    // r2 = printf("1) simple: Hello World\n");
    // printf("   ft=%d  std=%d\n\n", r1, r2);

    // r1 = ft_printf("2) string: %s\n", str);
    // r2 = printf("2) string: %s\n", str);
    // printf("   ft=%d  std=%d\n\n", r1, r2);

    // r1 = ft_printf("3) null string: %s\n", nulls);
    // r2 = printf("3) null string: %s\n", nulls);
    // printf("   ft=%d  std=%d\n\n", r1, r2);

    // r1 = ft_printf("4) char: %c\n", 'A');
    // r2 = printf("4) char: %c\n", 'A');
    // printf("   ft=%d  std=%d\n\n", r1, r2);

    // r1 = ft_printf("5) int/neg: %d %i\n", 42, -7);
    // r2 = printf("5) int/neg: %d %i\n", 42, -7);
    // printf("   ft=%d  std=%d\n\n", r1, r2);
    // // ft_printf("Testing negative int with ft_printf: %i\n", i);

    // r1 = ft_printf("6) unsigned: %u\n", 3000000000u);
    // r2 = printf("6) unsigned: %u\n", 3000000000u);
    // printf("   ft=%d  std=%d\n\n", r1, r2);

    // r1 = ft_printf("7) hex: %x %X\n", 3735928559u, 3735928559u);
    // r2 = printf("7) hex: %x %X\n", 3735928559u, 3735928559u);
    // printf("   ft=%d  std=%d\n\n", r1, r2);

    // r1 = ft_printf("8) pointer: %p\n", (void *)str);
    // r2 = printf("8) pointer: %p\n", (void *)str);
    // printf("   ft=%d  std=%d\n\n", r1, r2);

    // r1 = ft_printf("9) percent: %%\n");
    // r2 = printf("9) percent: %%\n");
    // printf("   ft=%d  std=%d\n\n", r1, r2);

    // r1 = ft_printf("10) mixed: %s %d %c %u %x %%\n", "mix", 7, 'Z', 42u, 255u);
    // r2 = printf("10) mixed: %s %d %c %u %x %%\n", "mix", 7, 'Z', 42u, 255u);
    // printf("   ft=%d  std=%d\n\n", r1, r2);

    // /* trailing percent: test ft_printf handling (printing/reading behavior may differ) */
    // r1 = ft_printf("11) trailing percent: %");
    // printf("\n   ft returned %d (trailing percent)\n", r1);

    // ft_printf("Negative unsigned: %d \n", -2147483647);
    // printf("Negative unsigned: %d\n", -2147483647);

    // void *num = (void *)(-2);
    // // int size = 0;
    // // ft_printf_int(num, &size);
    // // printf("\nSize: %d\n", size);
    // // ft_printf("\ntesting int with -2: %i\n", num);
    // return 0;
    // printf(" %ld\n ", LONG_MIN);
    // ft_printf(" %u ", LONG_MIN);
    // printf("%d\n", ft_printf("-\001\002\007\v\010\f\r\n-"));
    // printf("%d", printf("*\001\002\007\v\010\f\r\n*"));
    printf("%i\n", ft_printf("%s", "some string with %s hehe"));
    printf("%i", printf("%s", "some string with %s hehe"));
}