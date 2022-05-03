/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isperc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:59:05 by nervin            #+#    #+#             */
/*   Updated: 2022/03/23 21:52:22 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

/*
ft_isperc
	Outputs a percent symbol to the standard output
	Increments the argument counter
*/
void	ft_isperc(t_print *argcount)
{
	ft_putchar_fd('%', 1);
	argcount->total++;
}
