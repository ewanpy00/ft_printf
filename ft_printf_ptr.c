/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:30:09 by ivan              #+#    #+#             */
/*   Updated: 2025/11/26 20:21:22 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long num, t_count *count)
{
	char	c;

	if (count->error)
		return ;
	if (num >= 16)
	{
		ft_putptr(num / 16, count);
		if (count->error)
			return ;
	}
	c = "0123456789abcdef"[num % 16];
	ft_putchar(c, count);
}

void	ft_printf_ptr(void *type, t_count *count)
{
	ssize_t			check_d;
	unsigned long	ptr;

	if (count->error)
		return ;
	ptr = (unsigned long)(type);
	check_d = write(1, "0x", 2);
	if (check_d == -1)
	{
		count->error = 1;
		return ;
	}
	count->size += 2;
	if (ptr == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	ft_putptr(ptr, count);
}
