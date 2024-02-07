/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:47:34 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/07 19:47:59 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ra(t_stack *a)
{
	if (rotate(a))
		ft_printf("ra\n");
	else
		return (0);
	return (1);
}

int	rb(t_stack *b)
{
	if (rotate(b))
		ft_printf("rb\n");
	else
		return (0);
	return (1);
}

int	rr(t_stack *a, t_stack *b)
{
	if (rotate(a) && rotate(b))
		ft_printf("rr\n");
	else
		return (0);
	return (1);
}
