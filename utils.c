/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:12:22 by bguzel            #+#    #+#             */
/*   Updated: 2023/09/14 19:16:44 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "cub3d.h"

int is_true(char c)
{
	if(c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return (0);
}