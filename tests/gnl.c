/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:22:33 by Nathanael         #+#    #+#             */
/*   Updated: 2022/08/09 21:58:17 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/get_next_line.h"
#include <stdlib.h>

int	main(void)
{
	char	*buffer;
	size_t	ch;
	int		fd;

	buffer = malloc(BUFFER_SIZE * sizeof(char));
	if (buffer == NULL)
	{
		write(1, "Error", 5);
		exit (1);
	}
	fd = open("gnl_testfiles/characters.txt", O_RDONLY);
	
	return (0);
}
