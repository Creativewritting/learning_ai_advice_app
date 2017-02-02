/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <jamie.cone@piratefish4x4.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 13:28:32 by jcone             #+#    #+#             */
/*   Updated: 2017/02/01 17:49:58 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "advice_ai.h"
t_advice_link	**dummy_links()
{
	t_advice_link	**link_array;
	int 			i;

	link_array 		= (t_advice_link **)malloc(sizeof(t_advice_link *) * (KEY_NUM + 1));
	i 				= -1;
	while (i++ < KEY_NUM)
		link_array[i] = NULL;
	return (link_array);
}

char	**set_dummy_terms()
{
	char **terms;
	char *term = "more";
	int i;

	terms = (char **)malloc(sizeof(char *) * (KEY_NUM + 1));
	i = -1;
	while (i++ < KEY_NUM - 1)
		terms[i] = term;
	terms[i] = NULL;
	return (terms);
}

int main(void)
{
	t_advice_link	**prev;
	t_advice_link	**dummy_first;
	t_advice_link	*current;
	t_key_term_link	*test_term;
	t_key_term_link	**key_term_index;
	char 			**dummy_key_terms;
	char 			*advice = "You should read more!";
	int				i;
	int				num;

	prev			= initalize_prev_null();
	dummy_first		= dummy_links();
	dummy_key_terms	= set_dummy_terms();
	key_term_index	= initalize_key_term_index(1);
	current 		= create_new_advice(dummy_key_terms, prev, dummy_first, advice);
	test_term		= create_key_term_link(current, dummy_key_terms[1]);
	key_term_index[0] = test_term;
	i 				= 0;
	num				= 0;
	ft_putendl("the advice was made");
	ft_putendl(current->advice);
	while (current->key_terms[i] != NULL)
	{
		ft_putendl(current->key_terms[i]);
		i++;
	}
	ft_putendl(test_term->key_term);
	ft_putendl(test_term->start->advice);
	i = 0;
	while (test_term->start->key_terms[i] != NULL)
	{
		ft_putendl(test_term->start->key_terms[i]);
		i++;
	}
	ft_putendl(key_term_index[0]->key_term);
	ft_putendl(key_term_index[0]->start->advice);
	i = 0;
	while (key_term_index[0]->start->key_terms[i] != NULL)
	{
		ft_putendl(key_term_index[0]->start->key_terms[i]);
		i++;
	}
	if (check_term(key_term_index, "more", &num))
		ft_putendl("Term located");
	else
		ft_putendl("error");
	num = 0;
	if (!check_term(key_term_index, "ativities", &num))
		ft_putendl("Term not located");
	else
		ft_putendl("error");
	return (0);
}
