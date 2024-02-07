/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:53:20 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/07 19:54:01 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_stack *from, t_stack *to)
{
	t_stack_node	*node;

	if (from->cnt < 1)
		return (0);
	node = ft_deque_front(from);
	ft_enque_front(to, node);
	return (1);
}

int	swap(t_stack *stack)
{
	t_stack_node	*node1;
	t_stack_node	*node2;

	if (stack->cnt < 2)
		return (0);
	node1 = ft_deque_front(stack);
	node2 = ft_deque_front(stack);
	ft_enque_front(stack, node1);
	ft_enque_front(stack, node2);
	return (1);
}

int	rotate(t_stack *stack)
{
	t_stack_node	*node;

	if (stack->cnt < 1)
		return (0);
	node = ft_deque_front(stack);
	ft_enque_back(stack, node);
	return (1);
}

int	reverse(t_stack *stack)
{
	t_stack_node	*node;

	if (stack->cnt < 1)
		return (0);
	node = ft_deque_back(stack);
	ft_enque_front(stack, node);
	return (1);
}
