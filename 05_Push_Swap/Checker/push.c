/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alepinto <alepinto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:30:28 by alepinto          #+#    #+#             */
/*   Updated: 2023/10/08 19:36:16 by alepinto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_pushtob_bonus(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*aux;

	if (*stack_a == NULL)
		ft_error();
	aux = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_a != NULL)
		(*stack_a)->prev = NULL;
	aux->next = *stack_b;
	aux->prev = NULL;
	if (*stack_b != NULL)
		(*stack_b)->prev = aux;
	*stack_b = aux;
}

void	ft_pushtoa_bonus(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*aux;

	if (*stack_b == NULL)
		ft_error();
	aux = *stack_b;
	*stack_b = (*stack_b)->next;
	if (*stack_b != NULL)
		(*stack_b)->prev = NULL;
	aux->next = *stack_a;
	aux->prev = NULL;
	if (*stack_a != NULL)
		(*stack_a)->prev = aux;
	*stack_a = aux;
}
