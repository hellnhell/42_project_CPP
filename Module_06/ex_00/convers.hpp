#ifndef CONVERS_HPP
# define CONVERS_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <math.h>
# include <limits.h>
# include <cstring>
# include <iomanip>
# include <stdlib.h>
# include <float.h>

class   Convers
{
    private:
        Convers();
        std::string         _input;
        int                 _type;
        char                _c;
        int                 _i;
        float               _f;
        double              _d;
        int                 _decimals;
        bool                _intError;
        bool                _floatError;
        bool                _doubleError;
  
    public:
        Convers(std::string input);
        Convers(Convers const &c);
        virtual ~Convers();
        Convers &operator=(Convers const &c);

		class wrongInput: public std::exception{
			virtual const char *what() const throw();
		};

        void    fromInt();
        void    fromChar();
        void    fromDouble();
        void    fromFloat();
        void    fromOther();

};

std::ostream &operator<<(std::ostream &os, Convers const &c);

#endif