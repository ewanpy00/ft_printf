/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipykhtin <ipykhtin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:09:07 by ivan              #+#    #+#             */
/*   Updated: 2025/11/26 13:39:28 by ipykhtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf_str(char *str, t_count *count){
    int check_d;
    if(str == NULL){
        check_d = write(1, "(null)", 6);
        if(check_d == -1){
            count->error = 1;
            return;
        }
        count->size += 6;
        return;
    }
    ft_putstr(str, count);
}