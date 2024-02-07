/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:57:53 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/07 19:59:13 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse(t_stack *stack, int argc, char *argv[])
{
	int		idx;
	char	**splited;

	idx = 1;
	while (idx < argc)
	{
		splited = ft_split(argv[idx], ' ');
		stack_init(stack, splited);
		if (splited)
			free(splited);
		idx++;
	}
	sort_check(stack);
	assign_idx(stack);
}

void	dup_check(t_stack_node *node, int num)
{
	if (!node)
		return ;
	while (node)
	{
		if (node->num == num)
			is_error();
		node = node->next;
	}
}

void	sort_check(t_stack *stack)
{
	t_stack_node	*prev;
	t_stack_node	*curr;
	int				sorted;

	prev = stack->first;
	sorted = 1;
	if (!(prev) || !(prev->next))
		exit(0);
	curr = prev->next;
	while (curr)
	{
		if (prev->num > curr->num)
		{
			sorted = 0;
			break ;
		}
		prev = curr;
		curr = curr->next;
	}
	if (sorted)
		exit(0);
}

void	assign_idx(t_stack *stack)
{
	t_stack_node	*curr;
	t_stack_node	*target;
	size_t			idx;

	curr = stack->first;
	while (curr)
	{
		target = stack->first;
		idx = 1;
		while (target)
		{
			if (target->num < curr->num)
				idx++;
			target = target->next;
		}
		curr->idx = idx;
		curr = curr->next;
	}
}

void	stack_init(t_stack *stack, char **splited)
{
	t_stack_node	*node;
	int				idx;
	int				num;

	idx = 0;
	if (splited[idx] == 0)
		is_error();
	while (splited[idx])
	{
		num = push_swap_atoi(splited[idx]);
		dup_check(stack->first, num);
		node = ft_stack_new_node(num);
		ft_enque_back(stack, node);
		idx++;
	}
	idx--;
	while (idx >= 0)
	{
		free(splited[idx]);
		idx--;
	}
}
