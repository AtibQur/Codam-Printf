#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const	char *format, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putstr_fd(char *str, int fd);
int		ft_putunbr_fd(int n, int fd);
int		ft_pointer(unsigned long n, int up_low);
int		ft_print_hexadecimal(unsigned long n, int up_low);
int		ft_putpercentage_fd(char c, int fd);
size_t	ft_strlen(const char *str);
#endif
