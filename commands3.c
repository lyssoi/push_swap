/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:48:21 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/07 19:48:45 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rra(t_stack *a)
{
	if (reverse(a))
		ft_printf("rra\n");
	else
		return (0);
	return (1);
}

int	rrb(t_stack *b)
{
	if (reverse(b))
		ft_printf("rrb\n");
	else
		return (0);
	return (1);
}

int	rrr(t_stack *a, t_stack *b)
{
	if (reverse(a) && reverse(b))
		ft_printf("rrr\n");
	else
		return (0);
	return (1);
}
