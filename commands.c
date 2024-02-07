/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:23:37 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/07 19:47:24 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_stack *b, t_stack *a)
{
	if (push(b, a))
		ft_printf("pa\n");
	else
		return (0);
	return (1);
}

int	pb(t_stack *a, t_stack *b)
{
	if (push(a, b))
		ft_printf("pb\n");
	else
		return (0);
	return (1);
}

int	sa(t_stack *a)
{
	if (swap(a))
		ft_printf("sa\n");
	else
		return (0);
	return (1);
}

int	sb(t_stack *b)
{
	if (swap(b))
		ft_printf("sb\n");
	else
		return (0);
	return (1);
}

int	ss(t_stack *a, t_stack *b)
{
	if (swap(a) && swap(b))
		ft_printf("ss\n");
	else
		return (0);
	return (1);
}
