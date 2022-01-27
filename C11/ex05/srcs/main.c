/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 03:13:49 by rfukuda           #+#    #+#             */
/*   Updated: 2020/02/24 03:13:50 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <ft_atoi.h>
#include <operator.h>
#include <ft_write.h>

#define INVALID -1

char	is_valid_operator(char *str)
{
	if (str[0] == '\0' || str[1] != '\0')
		return (INVALID);
	return (str[0]);
}

bool	is_zero(int b, char operator)
{
	if (operator == '/' && b == 0)
	{
		ft_str_write("Stop : division by zero\n");
		return (false);
	}
	if (operator == '%' && b == 0)
	{
		ft_str_write("Stop : modulo by zero\n");
		return (false);
	}
	return (true);
}

void	ft_do_operation(int a, int b, char operator)
{
	static char	operators[5] = { '+', '-', '/', '*', '%' };
	static	int	(*select_operator[5])(int, int) = {
			&ft_operation_add,
			&ft_operation_minus,
			&ft_operation_devide,
			&ft_operation_multiply,
			&ft_operation_modulo
	};
	int			result;
	int			index;

	result = 0;
	index = 0;
	while (index < 5)
	{
		if (operator == operators[index])
		{
			result = (select_operator[index])(a, b);
			break ;
		}
		index++;
	}
	ft_number_write(result);
	ft_str_write("\n");
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	operator;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		operator = is_valid_operator(argv[2]);
		if (is_zero(b, operator))
			ft_do_operation(a, b, operator);
	}
}
