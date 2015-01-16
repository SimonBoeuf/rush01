/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboeuf <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 15:46:08 by sboeuf            #+#    #+#             */
/*   Updated: 2015/01/16 17:07:41 by sboeuf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_ENTITY_HPP
# define GAME_ENTITY_HPP

# include "Pos.hpp"
# include "Size.hpp"
# include <exception>
# include <map>
# include <string>

class GameEntity
{
	public:
		/*Constructors*/
		GameEntity(Pos p, Size s, std::map<int, std::string> shape);
		GameEntity(GameEntity const & ge);
		//virtual ~GameEntity(void) = 0;
		~GameEntity(void);

		/*Operators*/
		GameEntity & operator=(GameEntity const & ge);

		/*Getters & Setters*/
		void								setPos(Pos p);
		Pos									getPos(void) const;

		void								setSize(Size s);
		Size								getSize(void) const;

		void								setShape(std::map<int, std::string> shape);
		std::map<int, std::string>			getShape(void) const;

		/*Exceptions*/
		class SizeException: public std::exception
		{
			public:
				SizeException(void);
				SizeException(SizeException const & ge);
				virtual ~SizeException(void) throw();
				SizeException & operator=(SizeException const & se);
				virtual const char	*what(void) const throw();
		};

		/*Static methods*/
		static std::map<int, std::string>	getMapFromString(std::string s)
		{
			std::map<int, std::string> rows;
			int		b = 0;
			int		i = 0;
			while (s[i])
			{
				if (b == 0)
					b = i;
				if (s[i] == '\n')
				{
					rows[i] = s.substr(b, i - 1);
					b = 0;
				}
				i++;
			}
			return rows;
		}

	private:
		GameEntity(void);
		Pos									_pos;
		Size								_size;
		std::map<int, std::string>			_shape;
};

#endif
