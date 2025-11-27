/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:14:40 by ivan              #+#    #+#             */
/*   Updated: 2025/11/26 20:20:44 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_unsigned(unsigned int num, t_count *count)
{
	char	c;

	if (count->error)
		return ;
	if (num > 9)
	{
		ft_printf_unsigned(num / 10, count);
		if (count->error)
			return ;
	}
	c = (num % 10) + '0';
	ft_putchar(c, count);
}
