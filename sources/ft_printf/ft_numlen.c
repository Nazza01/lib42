/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 22:05:08 by Nathanael         #+#    #+#             */
/*   Updated: 2022/05/03 22:07:44 by Nathanael        ###   ########.fr       */
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
