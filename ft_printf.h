/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:50:03 by ivan              #+#    #+#             */
/*   Updated: 2025/11/26 13:44:56 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct t_count
{
    int	size;
    int error;
}				t_count;

void printf_value(char format, va_list *args, t_count *size);
int	ft_printf(const char *format, ...);
void ft_printf_str(char *str, t_count *size);
void ft_printf_char(int charecter, t_count *size);
void ft_printf_ptr(void *ptr, t_count *size);
void ft_printf_decimal(int num, t_count *size);
void ft_printf_unsigned(unsigned int num, t_count *size);
void ft_printf_hex_lower(unsigned int num, t_count *size);
void ft_printf_hex_upper(unsigned int num, t_count *size);
void ft_putchar(char c, t_count *count);
void ft_putstr(char *str, t_count *count);
void ft_putnbr(long num, t_count *count);

#endif