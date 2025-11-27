/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:07:29 by ivan              #+#    #+#             */
/*   Updated: 2025/11/26 20:21:28 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_char(int charecter, t_count *count)
{
	if (count->error)
		return ;
	ft_putchar(charecter, count);
}
