/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:01:38 by Nathanael         #+#    #+#             */
/*   Updated: 2022/05/20 13:57:33 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

/**
 * @brief	Allows for a smooth exit to your program
 * @param	msg		The message to output
 * @param	code	The code to exit by
 * @return	Exits using system exit function
**/
void	ft_error(char *msg, int code)
{
	ft_printf("%s", msg);
	exit(code);
}
