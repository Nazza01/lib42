/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:01:38 by Nathanael         #+#    #+#             */
/*   Updated: 2022/03/27 14:07:12 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

/*
Prints an error using ft_printf then uses exit to return/exit the program
Message format: <message>\n
*/
void	ft_error(char *message)
{
	ft_printf("%s\n", message);
	exit (EXIT_FAILURE);
}
