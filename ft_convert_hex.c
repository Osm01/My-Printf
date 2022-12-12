/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <ouidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:24:51 by ouidriss          #+#    #+#             */
/*   Updated: 2022/12/12 14:25:26 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

void	ft_convert_hex(unsigned int n, int *counter, int is_upper_case)
{
	char	*str;

	if (is_upper_case)
		str = "0123456789ABCDEF";
	else
		str = "0123456789abcdef";
	if (n >= 16)
		ft_convert_hex(n / 16, counter, is_upper_case);
	ft_putchar(str[n % 16], counter);
}
