#include "ftprintf.h"


int	ftprintf(const char *mandarg, ...)
{
    va_list extraargs;
    int mandargchars;
    int extraargschars;

    mandargchars = 0;
    extraargschars = 0;
    va_start(extraargs, mandarg);
    while(*mandarg)
    {
        if (*mandarg == '%')
        {
            mandarg++;
            if (*mandarg == 'c')
            {
                ft_putchar_fd(va_arg(extraargs, int), 1);
                extraargschars++;
            }
            else if (*mandarg == 's')
            {
                char *word = va_arg(extraargs, char *);
                ft_putstr_fd(word, 1);
                extraargschars +=  ft_strlen(word);
            }
            else if (*mandarg == 'p')
            {
                unsigned long ma = va_arg(extraargs, unsigned long);
                extraargschars += ft_putnbr_ma(ma, 1);
            }
            else if (*mandarg == 'd' || *mandarg == 'i')
            {
                int num = va_arg(extraargs, int);
                ft_putnbr_fd(num, 1);
                extraargschars +=  ft_strlen(ft_itoa(num));
            }
            else if (*mandarg == 'u')
            {
                unsigned int uinum = va_arg(extraargs, unsigned int);
                extraargschars += ft_putnbrui_fd(uinum, 1);
            }
            else if (*mandarg == 'X')
            {
                unsigned int uitouhnum = va_arg(extraargs, unsigned int);
                extraargschars += ft_putnbr_upperhex(uitouhnum, 1);
            }
            else if (*mandarg == 'x')
            {
                unsigned int uitolhnum = va_arg(extraargs, unsigned int);
                extraargschars += ft_putnbr_lowerhex(uitolhnum, 1);
            }
            else if (*mandarg == '%')
            {
                char percent = '%';
                write(1, &percent, 1);
                extraargschars++;
            }
        }
        else
        {
            write(1, &(*mandarg), 1);
            mandargchars++;
        }
        mandarg++;
    }
    va_end(extraargs);
    return (mandargchars + extraargschars);
}


// int main(void)
// {
//     unsigned int num =  4294967295;

//     int result = ftprintf("The %c appears in %s %u times. No, %x times.\n", 'e', "letter", num, 140721120898156);
//     ftprintf("%d\n",result);

//     /*
//     int num = 4;
//     printf("%p & %lu\n", &num, (unsigned long)&num);
//     */
// }


int main(void)
{
    char character = 'E';
    char *string = "xample";
    int decimal = 42;
    int integer = 1977;
    unsigned int unsigned_int = 15000;
    void *pointer = &unsigned_int; // Get the address of a variable
    int hex_lower = 255;
    int hex_upper = 255;

    // The single printf call using all specifiers:
    printf("--- Test Case ---\n");
    printf("Char: %c | String: %s | Pointer: %p | Decimal: %d | Integer: %i | Unsigned: %u | Hex_l: %x | Hex_U: %X | Percent: %%\n",
           character,
           string,
           pointer,
           decimal,
           integer,
           unsigned_int,
           hex_lower,
           hex_upper);
    ftprintf("Char: %c | String: %s | Pointer: %p | Decimal: %d | Integer: %i | Unsigned: %u | Hex_l: %x | Hex_U: %X | Percent: %%",
    character,
    string,
    pointer,
    decimal,
    integer,
    unsigned_int,
    hex_lower,
    hex_upper);
    write(1, "\n", 1);
    printf("--- End Test ---\n");

    return 0;
}
