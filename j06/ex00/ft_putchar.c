#ifndef __UNISTD_H__
#define __UNISTD_H__
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
#endif
