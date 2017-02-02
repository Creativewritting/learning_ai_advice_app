/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advice_ai.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <jamie.cone@piratefish4x4.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 12:42:50 by jcone             #+#    #+#             */
/*   Updated: 2017/02/01 17:20:57 by jcone            ###   ########.fr       */
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
	t_advice_link			*fourth;
	t_advice_link			*fifth;
	t_advice_link			*unranked;
}							t_select_advice;

typedef struct				s_key_term_link
{
	char					*key_term;
	t_advice_link			*start;
}							t_key_term_link;

t_advice_link				*create_new_advice(char **key_terms, t_advice_link **prev, t_advice_link **first, char *advice);
t_key_term_link     		*create_key_term_link(t_advice_link *start, char *key_term);
t_advice_link	 			**initalize_prev_null();
int					 	    check_term(t_key_term_link **key_index, char *term, int *index_value);
t_key_term_link				**initalize_key_term_index(int num);
# endif
