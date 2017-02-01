/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advice_ai.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <jamie.cone@piratefish4x4.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 12:42:50 by jcone             #+#    #+#             */
/*   Updated: 2017/02/01 13:41:28 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ADVICE_AI_H
# define ADVICE_AI_H

# include "./libft/libft.h"
# define KEY_NUM 10
# define DAY 1
# define MONTH 2

typedef struct				s_advice_link
{
	char					**key_terms;
	int						*term_ranks;
	int						*pending_ranks;
	struct s_advice_link	**next;
	struct s_advice_link	**prev;
	struct s_advice_link	**first;
	int 					sassy_rank;
	int						day;
	int						month;
	char					*advice;
}							t_advice_link;

typedef struct				s_select_advice
{
	t_advice_link			*first;
	t_advice_link			*second;
	t_advice_link			*third;
	t_advice_link			*fourht;
	t_advice_link			*fith;
	t_advice_link			*unranked;
}							t_select_advice;

typedef struct				s_key_term_link
{
	char					*key_term;
	t_advice_link			*start;
}							t_key_term_link;

# endif
