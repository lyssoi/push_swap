#include "push_swap.h"
long long	push_swap_atoi(const char *str);

void	parse(t_stack *stack, int argc, char *argv[]){
	int	idx;
	char	**splited;

	idx = 1;
	while (idx < argc){
		splited = ft_split(argv[idx], ' ');
		stack_init(stack,splited);
		free(splited);
		idx++;
	}
}

void	dup_check(t_stack_node *node, int num){
	if (!node)
		return ;
	while (node){
		if (node->num == num)
			is_error();
		node = node->next;
	}
}

void	stack_init(t_stack *stack, char **splited){
	t_stack_node	*node;
	int				idx;
	int		num;

	idx = 0;
	if (splited[idx] == 0)
		is_error();
	while(splited[idx]){
		num = push_swap_atoi(splited[idx]);
		free(splited[idx]);
		dup_check(stack->first, num);
		node = ft_stack_new_node(num);
		ft_enque_back(stack, node);
		idx++;
	}
}

void	stack_init_ordinal(t_stack *stack, t_stack_node *current){
	t_stack_node	*node;
	int				idx;

	node = stack->first;
	idx = 0;
	while(idx < stack->cnt){

//그냥 while문으로 돌면서
//그 전에 있던것 중 현재 노드보다 큰것은 +1하고,
// 작은 것은 냅둠.
// 그중에서 현재노드의 위치를 찾으려면...
/// 1 3 7 6 2 8 4   일때 5가 들어간다면
//  1 3 6 5 2 7 4 일것임 여기서 5가 들어간다면
//  1 3 7 6
// 이때 6을 저장을 하는데, 여기서 6이되면 다시 5로 저장 (6을 뺏겼으니..)
// 이런식으로 하면..
	}
}

void	is_error(){
	ft_printf("Error\n");
	exit(0);
}