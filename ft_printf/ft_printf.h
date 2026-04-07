/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaraurg <ekaraurg@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:54:19 by ekaraurg          #+#    #+#             */
/*   Updated: 2026/04/07 11:17:25 by ekaraurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putcharacter_len(char character, int *len);
void	ft_string(char *args, int *len);

void	ft_number(int number, int *len);
void	ft_hexadecimal(unsigned int x, int *len, char x_or_x);
void	ft_unsigned_int(unsigned int u, int *len);
void	ft_pointer(size_t pointer, int *len);

int		ft_printf(const char *string, ...);

#endif
