/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:14:24 by junholee          #+#    #+#             */
/*   Updated: 2021/08/25 20:14:31 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(Stack *stack_a)
{
	int top_data;
	
	if (stack_a->size > 1)
	{
		top_data = stack_a->top->data;
		pop_Top(stack_a);
		push_Btm(stack_a,top_data);
	}
}
void	rotate_b(Stack *stack_b)
{
	int top_data;
	
	if (stack_b->size > 1)
	{
		top_data = stack_b->top->data;
		pop_Top(stack_b);
		push_Btm(stack_b,top_data);
	}
}
void	rotate_ab(Stack *stack_a, Stack *stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}