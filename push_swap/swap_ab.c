/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:15:40 by junholee          #+#    #+#             */
/*   Updated: 2021/08/25 21:24:19 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(Stack **a)
{
	int c;

	c = (*a)->top->data;
	(*a)->top->data = (*a)->top->next->data;
	(*a)->top->next->data = c;
}

void swap_a(Stack *stack)
{
	if (stack->size >= 2)
		swap(&stack);
	else
		return ;
}

void swap_b(Stack *stack)
{
	if (stack->size >= 2)
		swap(&stack);
	else
		return ;
}

void swap_ss(Stack *stack_a, Stack *stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}