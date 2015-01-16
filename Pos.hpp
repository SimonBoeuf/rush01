/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pos.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboeuf <sboeuf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 15:37:54 by sboeuf            #+#    #+#             */
/*   Updated: 2015/01/16 17:13:20 by sboeuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POS_HPP
# define POS_HPP

class Pos
{
	public:
		/*Constructors*/
		Pos(int x, int y);
		Pos(Pos const & p);
		~Pos(void);
		Pos(void);

		/*Operators*/
		Pos & operator=(Pos const &p);

		/*Getters & Setters */
		void		setX(int x);
		int			getX(void) const;

		void		setY(int y);
		int			getY(void) const;
		void		setPos(int x, int y);

	private:
		int	_x;
		int	_y;
};

#endif
