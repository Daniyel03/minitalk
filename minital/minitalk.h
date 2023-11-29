#ifndef MINITALK_H
# define MINITALK_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <signal.h>

int		checker(const char *str, va_list arg);
long	ft_numlen(long res);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(long n, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_strlen(const char *str);
int		p(unsigned long long n);
int		x(unsigned long long n, int base);
int		xl(unsigned long n, int base);
int		s(char *s);
int		ft_printf(const char *str, ...);
int char_to_bin(char c, int pid);
void sig_handler(int signum, siginfo_t *info, void* context);


#endif