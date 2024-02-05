/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:23:37 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/05 18:37:59 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *b, t_stack *a){
	if (!push(b,a))
		is_error();
	ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b){
	if (!push(a,b))
		is_error();
	ft_printf("pb\n");
}

void	sa(t_stack *a){
	if (!swap(a))
		is_error();
	ft_printf("sa\n");
}

void	sb(t_stack *b){
	if (!swap(b))
		is_error();
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b){
	if (!swap(a))
		is_error();
	if (!swap(b))
		is_error();
	ft_printf("ss\n");
}
