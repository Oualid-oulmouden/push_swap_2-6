/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:25:24 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/02 08:25:25 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	index_of_node(t_list *head, t_list *target_node)
{
	target_node->index = 0;
	if (head == NULL)
		return (0);
	if (head == target_node)
		return (0);
	while (head != target_node && head->next != NULL)
	{
		head = head->next;
		target_node->index++;
	}
	return (target_node->index);
}

int	number_of_moves(t_list *head, t_list *target)
{
	int	i;
	int	j;

	i = index_of_node(head, target);
	j = find_the_middel_of_stack(head);
	if (i <= j)
		return (i);
	if (i > j)
		return (lent_of_stack(head) - i);
	return (0);
}
