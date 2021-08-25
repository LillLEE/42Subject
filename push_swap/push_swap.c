/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:01:01 by junholee          #+#    #+#             */
/*   Updated: 2021/08/25 22:14:40 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int argc, char **argv)
{
	int i;
	int size;
	Node *newNode;
	Stack *stack;
	Stack *stack_b;
	int stack_size;

	initStack(&stack);
	initStack(&stack_b);
	i = argc - 1;
	if (argc > 1)
	{
		
		while (i >= 1)
		{
			push_Top(stack,atoi(argv[i]));
			i--;
		}
		stack_size = stack->size;
		printf("stack a\n");
		display(stack);
		swap_a(stack);
		push_b(stack,stack_b);
		push_b(stack,stack_b);
		push_b(stack,stack_b);
		rotate_a(stack);
		rotate_b(stack_b);
		reverse_a(stack);
		reverse_b(stack_b);
		swap_a(stack);
		push_a(stack,stack_b);
		push_a(stack,stack_b);
		push_a(stack,stack_b);
		display(stack);
	}
	else
		printf("ERROR\n");
	return (0);
}