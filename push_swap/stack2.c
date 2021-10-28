/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 03:33:37 by junholee          #+#    #+#             */
/*   Updated: 2021/08/25 20:48:29 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_Btm(Stack *stack ,int data)
{
	Node *newNode = initNode(data);

	if (isEmpty(stack) == 0)
		stack->top = stack->bottom = newNode;
	else
	{
		stack->bottom->next = newNode;
		newNode->prev = stack->bottom;
		stack->bottom = newNode;
	}
	stack->size++;
}

void pop_Btm(Stack *stack)
{
	if (stack->bottom == NULL)
		return;
	else if (stack->top->next == NULL)
		stack->top = NULL;
	else
		stack->bottom->prev->next = NULL;
	stack->bottom = stack->bottom->next;
	stack->size--;
}

void display(Stack *stack)
{
	Node *current;

	current = stack->top;
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}