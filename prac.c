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
        //if we hit a format specifier
        if (*mandarg == '%')
        {
            mandarg++;
            //if we hit a char format specifier
            if (*mandarg == 'c')
            {
                ft_putchar_fd(va_arg(extraargs, int), 1);
                extraargschars++;
            }
            //if we hit a string format specifier
            else if (*mandarg == 's')
            {
                char *word = va_arg(extraargs, char *);
                ft_putstr_fd(word, 1);
                extraargschars +=  ft_strlen(word);
            }
            //if we hit a pointer format specifier
            else if (*mandarg == 'p')
            {
                write(1, "0x", 2);
                extraargschars += 2;
                unsigned long ma = va_arg(extraargs, unsigned long);
                extraargschars += ft_putnbr_hex(ma, 1);
            }
            //if we hit a decimal or integer specifier
            else if (*mandarg == 'd' || *mandarg == 'i')
            {
                int num = va_arg(extraargs, int);
                ft_putnbr_fd(num, 1);
                extraargschars +=  ft_strlen(ft_itoa(num));
            }
            //if we hit a unsigned integer specifier
            else if (*mandarg == 'u')
            {
                unsigned int uinum = va_arg(extraargs, unsigned int);
                extraargschars += ft_putnbrui_fd(uinum, 1);
            }
            // else if (*mandarg == 'X')
            // {
            //     unsigned int uinum = va_arg(extraargs, unsigned int);
            //     ft_putnbr_upperhex(unsigned long n, int fd)
            // }
        }
        // this is to handle the chars in the mandatory argument
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






int main(void)
{
    unsigned int num =  4294967295;

    int result = ftprintf("The %c appears in %s %u times. No, %x times.\n", 'e', "letter", num, 140721120898156);
    ftprintf("%d\n",result);

    /*
    int num = 4;
    printf("%p & %lu\n", &num, (unsigned long)&num);
    */
}