/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:36:24 by nervin            #+#    #+#             */
/*   Updated: 2022/04/29 14:21:28 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

/*
DESCRIPTION
	Fills the first n bytes of the memory area pointed to by s with the constant
	byte c
RETURN VALUES
	Returns a pointer to the memory area s
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem;

	mem = s;
	while (n > 0)
	{
		*mem = c;
		mem++;
		n--;
	}
	return (s);
}
