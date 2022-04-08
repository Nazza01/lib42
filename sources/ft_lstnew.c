/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:35:19 by nervin            #+#    #+#             */
/*   Updated: 2022/04/08 12:37:33 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

/*
NAME
	ft_lstnew
PARAMETERS
	1.	The content to create the new element with
DESCRIPTION
	Allocates (with malloc(3)) and returns a new element. The variable 'content'
	is initialized with the value of the parameter 'content'. The variable 
	'next' is initialized to NULL.
RETURN VALUES
	Returns the new element.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
