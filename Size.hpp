/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Size.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Bw: sboeuf <sboeuf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 15:37:54 by sboeuf            #+#    #+#             */
/*   Updated: 2015/01/16 17:19:48 by sboeuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIZE_HPP
# define SIZE_HPP

class Size
{
	public:
		/*Constructors*/
		Size(int h, int w);
		Size(Size const & p);
		~Size(void);
		Size(void);

		/*Operators*/
		Size & operator=(Size const &p);

		/*Getters & Setters */
		void					setH(int h);
		unsigned int			getH(void) const;

		void					setW(unsigned int w);
		unsigned int			getW(void) const;
		void					setSize(unsigned int h, int w);

	private:
		unsigned int	_h;
		unsigned int	_w;
};

#endif
