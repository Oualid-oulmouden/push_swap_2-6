/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate_revers_ab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:18:13 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/06/02 09:29:38 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	retate_ab(t_list *head1, t_list *head2)
{
	retate_a(&head1);
	retate_b(&head2);
}