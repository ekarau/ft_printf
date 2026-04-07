#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ft_ret;
    int orig_ret;
    char *str = "42 Istanbul";
    int num = -2147483648; // INT_MIN test

    printf("========== STARTING TESTS ==========\n\n");

    // 1. Character Test (%c)
    printf("--- %%c Test ---\n");
    ft_ret = ft_printf("ft_printf : %c\n", 'E');
    orig_ret = printf("printf    : %c\n", 'E');
    printf("Return Values -> ft_printf: %d | printf: %d\n\n", ft_ret, orig_ret);

    // 2. String Test (%s)
    printf("--- %%s Test ---\n");
    ft_ret = ft_printf("ft_printf : %s\n", str);
    orig_ret = printf("printf    : %s\n", str);
    printf("Return Values -> ft_printf: %d | printf: %d\n\n", ft_ret, orig_ret);

    // 3. Pointer Test (%p)
    printf("--- %%p Test ---\n");
    ft_ret = ft_printf("ft_printf : %p\n", (void *)str);
    orig_ret = printf("printf    : %p\n", (void *)str);
    printf("Return Values -> ft_printf: %d | printf: %d\n\n", ft_ret, orig_ret);

    // 4. Decimal and Integer Test (%d and %i)
    printf("--- %%d and %%i Test ---\n");
    ft_ret = ft_printf("ft_printf : %d, %i\n", num, 42);
    orig_ret = printf("printf    : %d, %i\n", num, 42);
    printf("Return Values -> ft_printf: %d | printf: %d\n\n", ft_ret, orig_ret);

    // 5. Unsigned Integer Test (%u)
    printf("--- %%u Test ---\n");
    ft_ret = ft_printf("ft_printf : %u\n", 4294967295U); // UINT_MAX
    orig_ret = printf("printf    : %u\n", 4294967295U);
    printf("Return Values -> ft_printf: %d | printf: %d\n\n", ft_ret, orig_ret);

    // 6. Hexadecimal Tests (%x and %X)
    printf("--- %%x and %%X Tests ---\n");
    ft_ret = ft_printf("ft_printf : %x, %X\n", 255, 255);
    orig_ret = printf("printf    : %x, %X\n", 255, 255);
    printf("Return Values -> ft_printf: %d | printf: %d\n\n", ft_ret, orig_ret);

    // 7. Percent Sign Test (%%)
    printf("--- %%%% Test ---\n");
    ft_ret = ft_printf("ft_printf : %%\n");
    orig_ret = printf("printf    : %%\n");
    printf("Return Values -> ft_printf: %d | printf: %d\n\n", ft_ret, orig_ret);

    // 8. Null String Test (Edge Case)
    printf("--- Null String Edge Case ---\n");
    char *null_str = NULL;
    
    ft_ret = ft_printf("ft_printf : %s\n", null_str);
    orig_ret = printf("printf    : %s\n", null_str);
    printf("Return Values -> ft_printf: %d | printf: %d\n\n", ft_ret, orig_ret);

    printf("========== TESTS COMPLETED ==========\n");

    ft_printf("Merhaba %");
    printf("Merhaba %");

    return (0);
}