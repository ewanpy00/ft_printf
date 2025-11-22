/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:50:03 by ivan              #+#    #+#             */
/*   Updated: 2025/11/22 22:41:25 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int printf_value(char format, void *type);
int	ft_printf(const char *format, ...);
void ft_printf_int(void *type);
void ft_printf_str(void *type);
void ft_printf_char(void *type);
void ft_printf_ptr(void *type);
void ft_printf_decimal(void *type);
void ft_putnbr_unsigned(void *type);
void ft_printf_hex_lower(void *type);
void ft_printf_hex_upper(void *type);
void ft_putnbr(long num);
void ft_putnbr_hex_lower(unsigned long num);
void ft_putnbr_hex_upper(unsigned long num);

#endif