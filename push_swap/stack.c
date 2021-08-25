/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:17:23 by junholee          #+#    #+#             */
/*   Updated: 2021/08/25 19:01:03 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void initStack(Stack **stack)
{
	(*stack) = (Stack *)malloc(sizeof(Stack));
	(*stack)->bottom = NULL;
	(*stack)->top = NULL;
	(*stack)->size = 0;
}

int isEmpty(Stack *stack)
{
	if (stack->top == NULL)
		return (0);
	return (1);
}

Node *initNode(int data)
{
	Node *newNode;

	newNode = (Node *)malloc(sizeof(Node));
	if (newNode == NULL)
		return (NULL);
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	return (newNode);
}

void push_Top(Stack *stack, int data)
{
	Node *newNode;

	newNode = initNode(data);
	if (isEmpty(stack) == 0)
		stack->top = stack->bottom = newNode;
	else
	{
		stack->top->prev = newNode;
		newNode->next = stack->top;
		stack->top = newNode;
	}
	stack->size++;
}

void pop_Top(Stack *stack)
{
	Node *tmpNode;

	if (stack->size == 0)
		tmpNode = NULL;
	else
	{
		tmpNode = stack->top;
		stack->top = stack->top->next;
		stack->top->prev = NULL;
		stack->size--;
	}
	free(tmpNode);
}