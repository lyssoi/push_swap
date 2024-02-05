/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:57:12 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/05 13:41:45 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

static int	ft_isspace(int c);
static long long	ft_atoi_return(unsigned long long num, int flag, int start, int i);

long long	push_swap_atoi(const char *str)
{
	unsigned long long	num;
	int					flag;
	int					i;
	int					start;

	i = 0;
	num = 0;
	flag = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{	
		if (str[i++] == '-')
		flag = 1;
	}
	while (str[i] == '0')
		i++;
	start = i;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			is_error();
		num *= 10;
		num += str[i++] - '0';
	}
	return (ft_atoi_return(num, flag, start, i));
}

static int	ft_isspace(int c)
{
	if (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

static long long	ft_atoi_return(unsigned long long num, int flag, int start, int i)
{
	if ((i - start > 10 && flag) || (num > 2147483648 && flag) || (num > 2147483647 && !flag))
		is_error();
	if (flag)
		return (num * -1);
	return (num);
}
