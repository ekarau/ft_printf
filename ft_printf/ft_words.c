/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaraurg <ekaraurg@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:54:21 by ekaraurg          #+#    #+#             */
/*   Updated: 2024/03/26 18:26:19 by ekaraurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putcharacter_len(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_string(char *args, int *len)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (args[i] != '\0')
	{
		ft_putcharacter_len(args[i], len);
		i++;
	}
}
