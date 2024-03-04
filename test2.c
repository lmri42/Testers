/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luribero <luribero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:45:58 by luribero          #+#    #+#             */
/*   Updated: 2024/02/25 13:18:44 by luribero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h" 

int main() {
    char c = '!';
    char *str = "In the symphony of algorithms, where code weaves its verse, A dance of logic and language, a transformative universe. Binary whispers shaping dreams, in lines of syntax unfurled, Coding's embrace, a potent force to change the canvas of the world.";
    unsigned int x = LONG_MAX + INT_MAX;
    int d = LONG_MIN;
    unsigned int u = 0; 
    void *p = LONG_MIN;
    int i = INT_MAX;
    int test_number = 1;
    int mine = 0;
    int std = 0;

    // Testing %c
    printf("Test %d: Testing %%c with '%c'\n", test_number++, c);
    std += printf("Standard printf:\t%c\n", c);
    mine += ft_printf("Your ft_printf:\t\t%c\n", c);

    // Testing %s
    printf("Test %d: Testing %%s with \"%s\"\n", test_number++, str);
    std += printf("Standard printf:\t%s\n", str);
    mine += ft_printf("Your ft_printf:\t\t%s\n", str);

    // Testing %x and %X
    printf("Test %d: Testing %%x and %%X with %x\n", test_number++, x);
    std += printf("Standard printf:\t%x, %X\n", x, x);
    mine += ft_printf("Your ft_printf:\t\t%x, %X\n", x, x);

    // Testing %%
    printf("Test %d: Testing %%%%\n", test_number++);
    std += printf("Standard printf:\t%%\n");
    mine += ft_printf("Your ft_printf:\t\t%%\n");

    // Testing %u
    printf("Test %d: Testing %%u with %u\n", test_number++, u);
    std += printf("Standard printf:\t%u\n", u);
    mine += ft_printf("Your ft_printf:\t\t%u\n", u);

    // Testing %p
    printf("Test %d: Testing %%p with pointer\n", test_number++);
    std += printf("Standard printf:\t%p\n", p);
    mine += ft_printf("Your ft_printf:\t\t%p\n", p);

    // Testing %d and %i
    printf("Test %d: Testing %%d and %%i with %d, %i\n", test_number++, d, i);
    std += printf("Standard printf:\t%d, %i\n", d, i);
    mine += ft_printf("Your ft_printf:\t\t%d, %i\n", d, i);

    // Testing %u     
    printf("Test %d: Testing %%u precision\n", test_number++);
    std += printf("Standard printf:\t%u\n", u);
    mine += ft_printf("Your ft_printf:\t\t%u\n", u);

    // Extreme scenarios
    // Testing very long string
    printf("Test %d: Testing very long %%s\n", test_number++);
    std += printf("Standard printf:\t%s\n", "A very long string that exceeds normal usage scenarios to test the robustness of the ft_printf implementation.");
    mine += ft_printf("Your ft_printf:\t\t%s\n", "A very long string that exceeds normal usage scenarios to test the robustness of the ft_printf implementation.");

    // Testing edge case for %d and %i (Minimum int value)
    printf("Test %d: Testing %%d and %%i with INT_MIN\n", test_number++);
    std += printf("Standard printf:\t%d, %i\n", INT_MIN, INT_MIN);
    mine += ft_printf("Your ft_printf:\t\t%d, %i\n", INT_MIN, INT_MIN);

    // Testing edge case for %u (Maximum unsigned int value)
    printf("Test %d: Testing %%u with UINT_MAX\n", test_number++);
    std += printf("Standard printf:\t%u\n", UINT_MAX);
    mine += ft_printf("Your ft_printf:\t\t%u\n", UINT_MAX);

// Testing %c and %s together
    printf("Test %d: Testing %%c and %%s together with '%c' and \"%s\"\n", test_number++, c, str);
    std += printf("Standard printf:\t%c, %s\n", c, str);
    mine += ft_printf("Your ft_printf:\t\t%c, %s\n", c, str);

    // Testing %x, %X, and %%
    printf("Test %d: Testing %%x, %%X, and %%%%\n", test_number++);
    std += printf("Standard printf:\t%x, %X, %%\n", x, x);
    mine += ft_printf("Your ft_printf:\t\t%x, %X, %%\n", x, x);

    // Testing %u, %p, %d, and %i together
    printf("Test %d: Testing %%u, %%p, %%d, and %%i together with %u, %p, %d, %i\n", test_number++, u, p, d, i);
    std += printf("Standard printf:\t%u, %p, %d, %i\n", u, p, d, i);
    mine += ft_printf("Your ft_printf:\t\t%u, %p, %d, %i\n", u, p, d, i);

    // Testing %c, %s, %x, %X, %u, %p, %d, and %i together
    printf("Test %d: Testing multiple format specifiers together\n", test_number++);
    std += printf("Standard printf:\t%c, %s, %x, %X, %u, %p, %d, %i\n", c, str, x, x, u, p, d, i);
    mine += ft_printf("Your ft_printf:\t\t%c, %s, %x, %X, %u, %p, %d, %i\n", c, str, x, x, u, p, d, i);

        // Edge Cases for %c and %s

    // Null characters within strings
    printf("Test %d: Testing %%c with null character within string\n", test_number++);
    std += printf("Standard printf:\t%c\n", '\0');
    mine += ft_printf("Your ft_printf:\t\t%c\n", '\0');

    // Extremely long strings
    printf("Test %d: Testing %%s with extremely long string\n", test_number++);
    std += printf("Standard printf:\t%s\n", "Very long string...");
    mine += ft_printf("Your ft_printf:\t\t%s\n", "Very long string...");

    // Empty strings
    printf("Test %d: Testing %%s with empty string\n", test_number++);
    std += printf("Standard printf:\t%s\n", "");
    mine += ft_printf("Your ft_printf:\t\t%s\n", "");

    // Edge Cases for %d and %i

    // Maximum and minimum values for int
    printf("Test %d: Testing %%d and %%i with INT_MAX and INT_MIN\n", test_number++);
    std += printf("Standard printf:\t%d, %i\n", INT_MAX, INT_MIN);
    mine += ft_printf("Your ft_printf:\t\t%d, %i\n", INT_MAX, INT_MIN);

    // Signed integer overflow
    printf("Test %d: Testing %%d with signed integer overflow\n", test_number++);
    std += printf("Standard printf:\t%d\n", INT_MAX + 1);
    mine += ft_printf("Your ft_printf:\t\t%d\n", INT_MAX + 1);

    // Negative zero (if applicable)
    printf("Test %d: Testing %%d with negative zero\n", test_number++);
    std += printf("Standard printf:\t%d\n", -0);
    mine += ft_printf("Your ft_printf:\t\t%d\n", -0);

    // Edge Cases for %u

    // Maximum unsigned int value
    printf("Test %d: Testing %%u with UINT_MAX\n", test_number++);
    std += printf("Standard printf:\t%u\n", UINT_MAX);
    mine += ft_printf("Your ft_printf:\t\t%u\n", UINT_MAX);

    // Unsigned integer overflow
    printf("Test %d: Testing %%u with unsigned integer overflow\n", test_number++);
    std += printf("Standard printf:\t%u\n", UINT_MAX + 1);
    mine += ft_printf("Your ft_printf:\t\t%u\n", UINT_MAX + 1);

    // Edge Cases for %p

    // Null pointer
    printf("Test %d: Testing %%p with null pointer\n", test_number++);
    std += printf("Standard printf:\t%p\n", NULL);
    mine += ft_printf("Your ft_printf:\t\t%p\n", NULL);

    // Pointers to function addresses
    printf("Test %d: Testing %%p with pointer to function addresses\n", test_number++);
    std += printf("Standard printf:\t%p\n", (void*)&main);
    mine += ft_printf("Your ft_printf:\t\t%p\n", (void*)&main);

    // Edge Cases for %x and %X

    // Maximum unsigned int value
    printf("Test %d: Testing %%x and %%X with maximum unsigned int value\n", test_number++);
    std += printf("Standard printf:\t%x, %X\n", UINT_MAX, UINT_MAX);
    mine += ft_printf("Your ft_printf:\t\t%x, %X\n", UINT_MAX, UINT_MAX);

    // Zero value
    printf("Test %d: Testing %%x and %%X with zero value\n", test_number++);
    std += printf("Standard printf:\t%x, %X\n", 0, 0);
    mine += ft_printf("Your ft_printf:\t\t%x, %X\n", 0, 0);

    // Edge Cases for %%

    // Consecutive percent signs
    printf("Test %d: Testing consecutive percent signs\n", test_number++);
    std += printf("Standard printf:\t%%%%\n");
    mine += ft_printf("Your ft_printf:\t\t%%%%\n");

    // Percent sign at the end of a format string
    printf("Test %d: Testing percent sign at the end of a format string\n", test_number++);
    std += printf("Standard printf:\tEnd with percent %%\n");
    mine += ft_printf("Your ft_printf:\t\tEnd with percent %%\n");

    // Additional Tests

    // Mixed specifiers with edge cases
    printf("Test %d: Testing mixed specifiers with edge cases\n", test_number++);
    std += printf("Standard printf:\tMix: %d %s %x %%\n", INT_MIN, "edge case", UINT_MAX);
    mine += ft_printf("Your ft_printf:\t\tMix: %d %s %x %%\n", INT_MIN, "edge case", UINT_MAX);

    // Format specifiers with %d
    printf("Test %d: Testing format specifier %%d and %%u again!\n", test_number++);
    std += printf("Standard printf:\t%d, %u\n", INT_MAX, UINT_MAX);
    mine += ft_printf("Your ft_printf:\t\t%d, %u\n", INT_MAX, UINT_MAX);

    // Non-printable characters
    printf("Test %d: Testing non-printable character\n", test_number++);
    std += printf("Standard printf:\t%c\n", 0x07);
    mine += ft_printf("Your ft_printf:\t\t%c\n", 0x07);

    // Extreme Scenarios

    // Testing with a large number of arguments
    printf("Test %d: Testing with a large number of arguments\n", test_number++);
    std += printf("Standard printf:\t%d %s %x %% %c %p\n", INT_MIN, "edge case", UINT_MAX, 'A', (void*)&main);
    mine += ft_printf("Your ft_printf:\t\t%d %s %x %% %c %p\n", INT_MIN, "edge case", UINT_MAX, 'A', (void*)&main);

    // Testing with a combination of all specifiers in a single call
    printf("Test %d: Testing with a combination of all specifiers in a single call\n", test_number++);
    std += printf("Standard printf:\t%c %s %x %% %d %i %u %p\n", 'A', "edge case", UINT_MAX, INT_MIN, INT_MAX, UINT_MAX, (void*)&main);
    mine += ft_printf("Your ft_printf:\t\t%c %s %x %% %d %i %u %p\n", 'A', "edge case", UINT_MAX, INT_MIN, INT_MAX, UINT_MAX, (void*)&main);

    // Testing with format strings that have incorrect format specifiers
    printf("Test %d: Testing with incorrect format specifiers\n", test_number++);
    std += printf("Standard printf:\t%d %s %x %% %c %p\n", INT_MIN, "edge case", UINT_MAX, 'A', (void*)&main);
    mine += ft_printf("Your ft_printf:\t\t%d %s %x %% %c %p\n", INT_MIN, "edge case", UINT_MAX, 'A', (void*)&main);


 // Testing with problematic pointers
    printf("Test %d: Testing with problematic pointers \n", test_number++);
    std += printf("Standard printf:\t%p %p %p %p\n", (void *)9176321320103036665, (void *)-3817478719532721019, (void *)-793297641930942327, (void *) -14523);
    mine += ft_printf("Your ft_printf:\t\t%p %p %p %p\n", (void *)9176321320103036665, (void *)-3817478719532721019, (void *)-793297641930942327, (void *) -14523);


// Testing with problematic numbers
    printf("Test %d: Testing with problematic numberss \n", test_number++);
    std += printf("Standard printf:\t%x %X %x %X\n", 9176321320103036665, -3817478719532721019, -793297641930942327, -14523);
    mine += ft_printf("Your ft_printf:\t\t%x %X %x %X\n", 9176321320103036665, -3817478719532721019, -793297641930942327, -14523);

// Testing with problematic numbers
    printf("Test %d: Testing with problematic numberss \n", test_number++);
    printf("Standard printf:\t%ld %ld %ld %ld\n", 9176321320103036665, -3817478719532721019, -793297641930942327, -14523);

    printf("Standard function printed a total of: %d characters!\n", std);
    printf("Your function printed a total of: %d characters!\n", mine);

    return 0;
}
