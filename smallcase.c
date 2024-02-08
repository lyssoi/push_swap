/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallcase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:41:42 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/07 20:22:42 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// n = 3인경우. 하드코딩?!

void	simple_sort(t_stack *a, t_stack *b){
	int 	result;
	size_t	max;
	int		idx;
	t_stack_node	*curr;

	if (a->cnt > 3)
	{
		curr = a->first;
		idx = 0;
		max = 0;
		ft_printf("max  왜..?:%zu\n",max);
		while (curr){
			if (max < curr->idx)
				max = curr->idx;
			curr = curr->next;
		}
		curr = a->first;
		while (curr){
			if (max == curr->idx)
				break;
			idx++;
			curr = curr ->next;
		}
		if (idx >= (int)a->cnt / 2){
			while (idx < (int)a->cnt)
			{
				rra(a);
				idx++;
			}
			//뒤에 있다는 뜻이니까 rra
		}else{
			while (idx > 0)
			{
				ra(a);
				idx--;
			}
			//ra
		}
		ft_printf("idx:%d max :%zu \n",idx, max);
		pb(a,b);
		simple_sort(a,b);
		pa(b,a);
		rra(a);
		//4개인 경우 ? 가장 큰수 4를 맨 위로 올리고 pb,
		// 5개인 경우 가장 큰 수 5를 맨 위로 올림.
	}else{
	result = a->first->next->idx - a->first->idx;
	if (result == 2 || result == -1)
	{
		sa(a);
		if (a->cnt == 2)
			return ;
	}
	if (a->first->idx == 1)
		return ;
	if (a->first->idx == 2)
		rra(a);
	if (a->first->idx == 3)
		ra(a);
	}
}