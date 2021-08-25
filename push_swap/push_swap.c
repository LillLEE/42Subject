/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:01:01 by junholee          #+#    #+#             */
/*   Updated: 2021/08/25 19:15:57 by junholee         ###   ########.fr       */
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
		printf("stack a\n");
		display(stack);
		newNode = stack->top;
		printf("top : %d\n",newNode->data);
		newNode = stack->bottom;
		printf("bottom : %d\n",newNode->data);
		printf("size : %d\n",stack->size);
		// swap_a(stack);
	}
	else
		printf("ERROR\n");
	return (0);
}