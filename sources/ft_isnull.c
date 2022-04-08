/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnull.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:02:36 by Nathanael         #+#    #+#             */
/*   Updated: 2022/04/04 17:51:47 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

/*
Checks if a parameter is null or not. 
Returns EXIT_FAILURE if the data is NULL.
Returns EXIT_SUCCESS if the data is not NULL.
Returns -1 if either of these conditions are not met.
*/
int	ft_isnull(void *data)
{
	if (data == NULL)
		return (EXIT_FAILURE);
	else if (data != NULL)
		return (EXIT_SUCCESS);
	else
		return (-1);
}
