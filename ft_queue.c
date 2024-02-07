/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:00:37 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/07 19:52:25 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_enque_front(t_stack *stack, t_stack_node *new)
{
	if (!stack)
		return ;
	new->next = (stack)->first;
	if ((stack)->first)
		(stack)->first->prev = new;
	(stack)->first = new;
	if (!(stack)->last)
		(stack)->last = new;
	(stack)->cnt += 1;
}

void	ft_enque_back(t_stack *stack, t_stack_node *new)
{
	if (!stack)
		return ;
	if ((stack)->last)
		(stack)->last->next = new;
	new->prev = (stack)->last;
	(stack)->last = new;
	if (!(stack)->first)
		(stack)->first = new;
	(stack)->cnt += 1;
}

t_stack_node	*ft_deque_front(t_stack *stack)
{
	t_stack_node	*head;

	if (!stack)
		return (0);
	head = stack->first;
	if (head->next)
		head->next->prev = 0;
	stack->first = head->next;
	stack->cnt -= 1;
	return (head);
}

t_stack_node	*ft_deque_back(t_stack *stack)
{
	t_stack_node	*tail;

	if (!stack)
		return (0);
	tail = stack->last;
	if (tail->prev)
		tail->prev->next = 0;
	stack->last = tail->prev;
	stack->cnt -= 1;
	return (tail);
}

t_stack_node	*ft_stack_new_node(int num)
{
	t_stack_node	*node;

	node = (t_stack_node *)malloc(sizeof(t_stack_node));
	if (!node)
		return (NULL);
	node -> prev = NULL;
	node -> next = NULL;
	node -> idx = 0;
	node -> num = num;
	return (node);
}
