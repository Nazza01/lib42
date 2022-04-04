/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:19:58 by nervin            #+#    #+#             */
/*   Updated: 2022/04/04 16:10:05 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

/*
ft_numlen
	Calculates the length of a number using a number and the initial length
	Appends the null terminating character to the end of the string
*/
char	*ft_numlen(unsigned long num, int *len)
{
	char	*str;

	while (num > 15)
	{
		num = num / 16;
		*len += 1;
	}
	str = malloc(sizeof(char) * (*len + 1));
	if (str == NULL)
		return (NULL);
	str[*len] = '\0';
	return (str);
}

/*
Calculates the length of a positive number and returns the total length.
*/
int	ft_get_pos_num_length(int number)
{
	int	length;

	length = 1;
	while (number > 9)
	{
		length++;
		number /= 10;
	}
	return (length);
}

/*
Calculates the length of a negative number and returns the total length.
*/
int	ft_get_neg_num_len(int number)
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
