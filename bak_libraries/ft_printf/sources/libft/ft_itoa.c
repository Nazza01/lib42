/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:32:11 by nervin            #+#    #+#             */
/*   Updated: 2022/08/09 16:20:23 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
ft_intlen(int n)
DESCRIPTION
	Takes in a number n, iterates through it by division.
RETURNS
	How long the number is (10 = 2)
*/
static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/*
pt_itoa(int n)
DESCRIPTION
	Allocates (with malloc(3)) and returns a string representing the integer
	received as an argument. Negative numbers must be handled.
RETURN VALUE
	The string representing the integer. NULL if the allocation fails.

BREAKDOWN
len	
	Get the length of the integer (by division until the last digit) 
malloc
	Assigns memory for the amount of digits are needed. 
str[len] = '\0'
	Assigns the null terminating character at the last string prevents null
	from being overwritten.
n < 0
	Handles n being a negative number by placing a '-' sign at the first element
	of the string (int n = -1000) returns "-1000"
n == 0
	If n is 0 then the first element of the string will be zero, returns 0
n != 0
	We want to go through the integer and get each individual digit to perform 
	abs on. Divide by 10 to get the next digit.
return str	
	Returns the result in string representation.
*/
char	*pt_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_intlen(n);
	str = malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = 48;
	while (n != 0)
	{
		--len;
		str[len] = pt_abs(n % 10) + 48;
		n /= 10;
	}
	return (str);
}
