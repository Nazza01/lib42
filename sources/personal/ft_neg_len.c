/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_neg_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:19:58 by nervin            #+#    #+#             */
/*   Updated: 2022/05/03 22:07:11 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

/*
Calculates the length of a negative number and returns the total length.
*/
int	ft_get_neg_len(int number)
{
	int	length;

	length = !number;
	while (number)
	{
		length++;
		number /= 10;
	}
	return (length);
}
