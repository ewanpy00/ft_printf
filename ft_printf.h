/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:50:03 by ivan              #+#    #+#             */
/*   Updated: 2025/11/25 15:45:03 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int printf_value(char format, void *type, int *size);
int	ft_printf(const char *format, ...);
void ft_printf_int(void *type, int *size);
void ft_printf_str(void *type, int *size);
void ft_printf_char(void *type, int *size);
void ft_printf_ptr(void *type, int *size);
void ft_printf_decimal(void *type, int *size);
void ft_printf_unsigned(void *type, int *size);
void ft_printf_hex_lower(void *type, int *size);
void ft_printf_hex_upper(void *type, int *size);
void ft_putnbr(long num, int *size);
void ft_putnbr_hex_lower(unsigned long num, int *size);
void ft_putnbr_hex_upper(unsigned long num, int *size);
int ft_strlen(const char *s);

#endif