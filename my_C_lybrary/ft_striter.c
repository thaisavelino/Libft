/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 16:54:53 by tavelino          #+#    #+#             */
/*   Updated: 2018/04/27 18:20:44 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	char *ptr;

	if (!s || !f)
		return ;
	ptr = s;
	while (*ptr)
		f(ptr++);
}