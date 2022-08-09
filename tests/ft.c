/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:09:37 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/09 16:12:03 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

int	main(void)
{
	ft_putstr_fd("Absolute value of -1:\t", 1);
	ft_putnbr_fd(ft_abs(-1), 1);
	ft_putstr_fd("\n", 1);

	ft_putstr_fd("\n", 1);
	ft_putnbr_fd(ft_strlen("Hello"), 1);
	ft_putstr_fd("\n", 1);

	return (0);
}
