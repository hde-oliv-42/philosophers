/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:06:29 by hde-oliv          #+#    #+#             */
/*   Updated: 2022/05/28 22:06:30 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	p_take_a_fork(size_t time, t_philo *philo)
{
	printf("%ld %d has taken a fork\n", (time - philo->start_time), \
		philo->number);
}

void	p_eat(size_t time, t_philo *philo)
{
	printf("%ld %d is eating\n", (time - philo->start_time), philo->number);
}

void	p_sleep(size_t time, t_philo *philo)
{
	printf("%ld %d is sleeping\n", (time - philo->start_time), philo->number);
}

void	p_think(size_t time, t_philo *philo)
{
	printf("%ld %d is thinking\n", (time - philo->start_time), philo->number);
}

void	p_die(size_t time, t_philo *philo)
{
	if (!philo->data->simulation)
		printf("%ld %d died\n", (time - philo->start_time), philo->number);
}
