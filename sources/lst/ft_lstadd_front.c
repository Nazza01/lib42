/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:34:56 by nervin            #+#    #+#             */
/*   Updated: 2022/04/02 12:30:51 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

/*
NAME
	ft_lstadd_front
PARAMETERS
	1.	The address of a pointer to the first link of a list.
	2.	The address of a pointer to the element to be added to the list.
DESCRIPTION
	Adds the element 'new' at the beginning of the list.
RETURN VALUES
	None.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
