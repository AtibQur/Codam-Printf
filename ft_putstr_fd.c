#include "ft_printf.h"

int	ft_putstr_fd(char *str, int fd)
{
	if (!str)
		return (ft_putstr_fd("(null)", fd));
	if (str)
		return (write(fd, str, ft_strlen(str)));
	return (0);
}
