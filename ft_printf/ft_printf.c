/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaraurg <ekaraurg@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:54:17 by ekaraurg          #+#    #+#             */
/*   Updated: 2024/04/24 14:58:22 by ekaraurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_checker(char s, va_list *args, int *len, int *i)
{
	if (s == 's')
		ft_string(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_number(va_arg(*args, int), len);
	else if (s == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'X');
	else if (s == 'p')
		ft_pointer(va_arg(*args, size_t), len);
	else if (s == 'c')
		ft_putcharacter_len(va_arg(*args, int), len);
	else if (s == '%')
		ft_putcharacter_len('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			ft_printf_checker(string[i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_putcharacter_len((char)string[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}
