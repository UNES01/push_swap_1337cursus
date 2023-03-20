/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap__push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <yoelansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:50:44 by yoelansa          #+#    #+#             */
/*   Updated: 2023/03/20 13:13:22 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

////// swap ////

void	sa(t_list *stack_a)
{
	int	tmp;

	if (stack_a->next)
	{
		tmp = stack_a->data;
		stack_a->data = stack_a->next->data;
		stack_a->next->data = tmp;
	}
}

void	sb(t_list *stack_b)
{
	int	tmp;

	if (stack_b->next)
	{
		tmp = stack_b->data;
		stack_b->data = stack_b->next->data;
		stack_b->next->data = tmp;
	}
}

////// push ////

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b)
	{
		tmp= (*stack_b)->next;
		(*stack_b)->next = *stack_a; 
		*stack_a = *stack_b;
		*stack_b = tmp;
	}
}

void	pb(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp;

	if (*stack_a)
	{
		tmp= (*stack_a)->next;
		(*stack_a)->next = *stack_b; 
		*stack_b = *stack_a;
		*stack_a = tmp;
	}
}