#include "convers.hpp"

// type:
// 0 error
// 1 int
// 2 float
// 3 double
// 4 char
// 5 cosasRaras


int check_type(std::string input)
{
    int numDots = 0;
    int j = 0;
    std::string nonDigit[] = {"inf", "+inf", "-inf", "nan", "inff", "+inff",
		"-inff", "nanf"};
    for (int i = 0; i < 8; i++)
    {
        if (input == nonDigit[i])
            return 5;
    }
    if (input.length() == 1 && !std::isdigit(input[0]))
        return 4;
    for(int i = 0; i < input[i]; i++)
    {
        if (input[i] == '.')
        {
            if (numDots)
                return 0;
            numDots++;
        }
        if (input[i] == 'f' && numDots > 0)
        {
            if (numDots > 1)
                return 0;
            numDots++;
        }
    }
    if (numDots)
    {
        if (numDots == 1)
            return 3;
        return 2;
    }
    while (input[j] == '+' || input[j] == '-')
        j++;
    if (!input[j])
        return 0;
    for (int i = j; input[i]; i++)
    {
        if (!std::isdigit(input[i]))
            return 0;
    }
    return 1;
}

void    Convers::fromChar()
{
    this->_c = this->_input[0];
    this->_i = static_cast<int>(this->_input[0]);
    this->_f = static_cast<float>(this->_input[0]);
    this->_d = static_cast<double>(this->_input[0]);
}

void    Convers::fromInt()
{
    long double tmp = std::stold(this->_input);
    if (tmp < -1 * __INT32_MAX__ - 1 || tmp > __INT32_MAX__)
        this->_intError = 1;
    this->_c = static_cast<char>(tmp);
    this->_i = static_cast<int>(tmp);
    this->_f = static_cast<float>(tmp);
    this->_d = static_cast<double>(tmp);
}

void    Convers::fromFloat()
{
    long double tmp = std::atof(this->_input.c_str());

    if (tmp < -1 * __INT32_MAX__ - 1 || tmp > __INT32_MAX__)
        this->_intError = 1;
    if (tmp < -1 * __FLT_MAX__ - 1 || tmp > __FLT_MAX__)
        this->_floatError = 1;
    this->_c = static_cast<char>(tmp);
    this->_i = static_cast<int>(tmp);
    this->_f = static_cast<float>(tmp);
    this->_d = static_cast<double>(tmp);
}


void    Convers::fromDouble()
{
    long double tmp = std::atof(this->_input.c_str());
    
    if (tmp < -1 * __INT32_MAX__ - 1 || tmp > __INT32_MAX__)
        this->_intError = 1;
    if (tmp < -1 * __FLT_MAX__ - 1 || tmp > __FLT_MAX__)
        this->_floatError = 1;
    if (tmp < -1 * __DBL_MAX__ - 1 || tmp > __DBL_MAX__)
        this->_doubleError = 1;

    this->_c = static_cast<char>(tmp);
    this->_i = static_cast<int>(tmp);
    this->_f = static_cast<float>(tmp);
    this->_d = static_cast<double>(tmp);
}

void    Convers::fromOther()
{
    std::string nonDigit[] = {"inf", "+inf", "-inf", "nan", "inff", "+inff",
		"-inff", "nanf"};
    if (this->_input == nonDigit[0] || this->_input == nonDigit[1] || this->_input == nonDigit[4] || this->_input == nonDigit[5])
        this->_f = INFINITY;
    else if (this->_input == nonDigit[2] || this->_input == nonDigit[6])
        this->_f = -1.0 / 0.0;
    else if (this->_input == nonDigit[3] || this->_input == nonDigit[7])
        this->_f = -1.0 * (0.0 / 0.0);
    
    this->_intError = 1;
    this->_c = static_cast<char>(this->_f);
    this->_i = static_cast<int>(this->_f);
    this->_d = static_cast<double>(this->_f);
}

const char *Convers::wrongInput::what() const throw()
{
	return ("Wrong input");
}

Convers::Convers(std::string input): _input(input)
{
	this->_decimals = 0;
    if (!(this->_type = check_type(input)))
        throw (wrongInput());
    if (this->_decimals == 0)
        this->_decimals = 1;
    std::cout << std::setprecision(this->_decimals) << std::fixed;

    switch (this->_type)
    {
        case 1:
            std::cout << "type: int" << std::endl;
            fromInt();
            break;
        case 2:
           std::cout << "type: float" << std::endl;
           fromFloat();
           break;    
        case 3:
          std::cout << "type: double" << std::endl;
          fromDouble();
          break;
        case 4:
          std::cout << "type: char" << std::endl;
          fromChar();
          break;
        case 5:
            std::cout << "type: other" << std::endl;
            fromOther();
            break;
        }

        std::cout << "char " << std::endl;
        if(std::isprint(this->_c))
          std::cout << this->_c << std::endl;
        else
            std::cout << "Non displayable" << std::endl;

        std::cout << "int " << std::endl;
        if(!this->_intError)
            std::cout << this->_i << std::endl;
        else
            std::cout << "Impossible" << std::endl;

        std::cout << "float " << std::endl;
        if(!this->_floatError)
            std::cout << this->_f << "f" << std::endl;
        else
            std::cout << "Impossible" << std::endl;

        std::cout << "double " << std::endl;
        if(!this->_doubleError)
            std::cout << this->_d << std::endl;
        else
            std::cout << "Impossible" << std::endl;
}

Convers::Convers(Convers const &c){};

Convers::~Convers(){};

Convers &Convers::operator=(Convers const &c)
{
	return(*this);
};
