/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <ouidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:34:29 by ouidriss          #+#    #+#             */
/*   Updated: 2022/12/12 14:10:38 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *counter);
void	ft_putstr(char *str, int *counter);
void	ft_putnbr(int n, int *counter);
void	ft_putnbr_unsigned(unsigned int n, int *counter);
void	ft_convert_hex(unsigned int n, int *counter, int is_upper_case);

#endif