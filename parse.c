#include "push_swap.h"

void	parse(t_stack **stack, int argc, char *argv[]){
	// argv돌면서 stack_a에 front로 넣기!!
	int	idx;
	int	num;
	t_stack_node	*node;

	idx = 1;
	while (idx < argc){
		num = ft_atoi(argv[idx]);
		node = ft_stack_new_node(num);
		ft_stackadd_back(stack,node);
		idx++;
	}
	//일단 넣었으니까... 중복체크해야하고, 유효값 체크 해야하고..
}

void	is_error(){
	printf("Error\n");
	exit(0);
}

void	ft_stackadd_front(t_stack **stack, t_stack_node *new){
	if (!*stack)
		return ;
	new->next = (*stack)->first;
	if((*stack)->first)
		(*stack)->first->prev = new;
	(*stack)->first = new;
	if (!(*stack)->last)
		(*stack)->last = new;
}

void	ft_stackadd_back(t_stack **stack, t_stack_node *new){
	if (!*stack)
		return ;
	if ((*stack)->last){
		(*stack)->last->next = new;
	}
	//new->prev는 *stack->last가 되어야함../.! 임시로 저장을 해놔야할듯
	new->prev = (*stack)->last;
	(*stack)->last = new;
	if (!(*stack)->first)
		(*stack)->first = new;
}

t_stack_node	*ft_deque_front(t_stack *stack){
	t_stack_node	*head;

	if (!stack)
		return (0);
	head = stack->first;
	stack->first = head->next;
	head->next = 0;
	//head free 해줘야하는지 생각해보기(릭이 나긴함)
	return (head);
}

t_stack_node	*ft_deque_back(t_stack *stack){
	t_stack_node	*tail;

	if (!stack)
		return (0);
	tail = stack->last;
	if (tail->prev){
		tail->prev->next = 0;
	}
	stack->last = tail->prev;
	//tail free해줘야하는지 생각해보기 (릭이 나긴함)
	return (tail);
}

t_stack_node	*ft_stack_new_node(int num){
	t_stack_node	*node;
	node = (t_stack_node *)malloc(sizeof(t_stack_node));
	if (!node)
		return (NULL);
	node -> prev = 0;
	node -> next = 0;
	node -> num = num;
	return (node);
}