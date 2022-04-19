/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:03:03 by Nathanael         #+#    #+#             */
/*   Updated: 2022/04/19 13:26:57 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

/**
 * ft_arg_print
 * @brief Uses ft_printf to print an argument list av
 * @param ac Argument count (int)
 * @param av Argument list (string of strings)
**/
void	ft_arg_print(int ac, char **av)
{
	int	index;

	index = 1;
	ft_printf("Program Arguments: ");
	while (index <= ac && ac > 1)
	{
		ft_printf("%s ", av[index]);
		index++;
	}
	ft_printf("\n");
}
