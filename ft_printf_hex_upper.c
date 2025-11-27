/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:19:17 by ivan              #+#    #+#             */
/*   Updated: 2025/11/26 20:18:07 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_hex_upper(unsigned int num, t_count *count)
{
	char	c;

	if (count->error)
		return ;
	if (num == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	else if (num >= 16)
	{
		ft_printf_hex_upper(num / 16, count);
		if (count->error)
			return ;
	}
	c = "0123456789ABCDEF"[num % 16];
	ft_putchar(c, count);
}
