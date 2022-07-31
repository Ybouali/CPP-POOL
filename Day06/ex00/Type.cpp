#include "./Type.hpp"

Type::Type(void)
{
    this->resetValues();
    if (Type::show_message)
        std::cout << "Default constructor for Type called" << std::endl;
}

Type::Type(char *s)
{
    this->analyzeNewIn(s);
    if (Type::show_message)
        std::cout << "Char* constructor for Type called" << std::endl;
}

Type::Type(const Type &other)
{
    if (Type::show_message)
        std::cout << "Copy constructor for Type called" << std::endl;
    *this = other;
}

Type::~Type(void)
{
    if (Type::show_message)
        std::cout << "Destructor for Type called" << std::endl;
}

Type &Type::operator=(const Type &other)
{
    if (Type::show_message)
        std::cout << "Assignement operator for Type called" << std::endl;
    this->S_Type = other.S_Type;
    this->C_Scalar = other.C_Scalar;
    this->I_Scalar = other.I_Scalar;
    this->F_Scalar = other.F_Scalar;
    this->D_Scalar = other.D_Scalar;
    return *this;
}

void Type::resetValues(void)
{
    this->S_Type = Type::noType;
    this->C_Scalar = 0;
    this->I_Scalar = 0;
    this->F_Scalar = 0;
    this->D_Scalar = 0;
}

void Type::printtypes(void)
{
    if (this->S_Type == Type::noType)
		std::cout << "No type set" << std::endl;
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
}

bool Type::getType(char *s)
{
    this->S_Type = handle_special_cases(s);
    if (this->S_Type != Type::noType)
        return true;
    if ((s[0] >= '0' && s[0] <= '9') || s[0] == '-' || s[0] == '.')
    {
        this->S_Type = handle_numeric_values(s);
        if (this->S_Type != Type::noType)
            return true;
    }
    if (s[1])
        return false;
    this->S_Type = Type::charType;
    return true;
}

int Type::handle_special_cases(char *s) const
{
    const std::string special_doubles[] =
        {
            "inf", "+inf", "-inf", "nan"};
    const std::string special_floats[] =
        {
            "inff", "+inff", "-inff", "nanf"};
    for (int i = 0; i < 4; i++)
    {
        if (special_doubles[i] == s)
            return Type::doubleType;
        else if (special_floats[i] == s)
            return Type::floatType;
    }
    return Type::noType;
}

int Type::handle_numeric_values(char *s) const
{
    int i = 0;
    int dotCount = 0;
    if (s[0] == '-' && s[1])
        i++;
    if (s[i] == '.' && (s[i + 1] == 'f' || s[i + 1] == 0))
        return (Type::noType);
    while (s[i] == '.' || isdigit(s[i]))
    {
        if (s[i] == '.')
            dotCount++;
        if (dotCount > 1)
            return Type::noType;
        i++;
    }
    if (!s[i])
    {
        if (dotCount == 1)
            return Type::doubleType;
        return Type::intType;
    }
    else if (s[i] == 'f' && !s[i + 1] && dotCount == 1)
        return Type::floatType;
    return Type::noType;
}

void Type::analyzeNewIn(char *s)
{
    this->resetValues();
    if (s[0] == 0)
        throw Type::EmptyInput();
    if (!this->getType(s))
        throw Type::CannotAnalyse();
    this->setVariable(s);
}

void Type::setVariable(char *input)
{
    if (this->S_Type == Type::charType)
    {
        if (Type::show_message)
            std::cout << "Selected char type" << std::endl;
        this->C_Scalar = input[0];
    }
    else if (this->S_Type == Type::intType)
    {
        if (Type::show_message)
            std::cout << "Selected int type" << std::endl;
        this->I_Scalar = atoi(input);
    }
    else if (this->S_Type == Type::floatType)
    {
        if (Type::show_message)
            std::cout << "Selected float type" << std::endl;
        this->F_Scalar = atof(input);
    }
    else if (this->S_Type == Type::doubleType)
    {
        if (Type::show_message)
            std::cout << "Selected double type" << std::endl;
        this->D_Scalar = atof(input);
    }
}

bool	Type::canConvertToChar( double number )
{
	if (number - static_cast<int>(number) != 0 || number > 127 || number < 0)
		std::cout << "char: impossible" << std::endl;
	else if (number <= 31 || number == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		return true;
	return false;
}

bool	Type::canConvertToInt( double number )
{
	return (number <= std::numeric_limits<int>::max()
			&& number >= std::numeric_limits<int>::min()
			&& number != std::numeric_limits<double>::infinity()
			&& number != -std::numeric_limits<double>::infinity()
			&& number != std::numeric_limits<double>::quiet_NaN());
}

bool	Type::canConvertToFloat( double number )
{
	return ((number <= std::numeric_limits<float>::max()
			&& number >= -std::numeric_limits<float>::max())
			|| number == std::numeric_limits<double>::infinity()
			|| number == -std::numeric_limits<double>::infinity()
			|| std::isnan(number));
}

const char	*Type::printDotZero( double number )
{
	if (number - static_cast<int>(number) == 0.0)
		return (".0");
	return ("");
}

void Type::printChar()
{
    if (this->S_Type == Type::intType)
	{
		if (this->canConvertToChar(this->I_Scalar))
			std::cout << "char: " << static_cast<char>(this->I_Scalar)
				<< std::endl;
	}
	else if (this->S_Type == Type::floatType)
	{
		if (this->canConvertToChar(this->F_Scalar))
			std::cout << "char: " << static_cast<char>(this->F_Scalar)
				<< std::endl;
	}
	else if (this->S_Type == Type::doubleType)
	{
		if (this->canConvertToChar(this->D_Scalar))
			std::cout << "char: " << static_cast<char>(this->D_Scalar)
				<< std::endl;
	}
	else
		std::cout << "char: " << this->C_Scalar << std::endl;
}

void Type::printInt()
{
    if (this->S_Type == Type::charType)
		std::cout << "int: " << static_cast<int>(this->C_Scalar)
			<< std::endl;
	else if (this->S_Type == Type::intType)
		std::cout << "int: " << this->I_Scalar << std::endl;
	else if (this->S_Type == Type::floatType)
	{
		if (canConvertToInt(this->F_Scalar))
			std::cout << "int: " << static_cast<int>(this->F_Scalar)
				<< std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
	else if (this->S_Type == Type::doubleType)
	{
		if (canConvertToInt(this->D_Scalar))
			std::cout << "int: " << static_cast<int>(this->D_Scalar)
				<< std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
}

void Type::printFloat()
{
    if (this->S_Type == Type::charType)
		std::cout << "float: " << static_cast<float>(this->C_Scalar) << ".0f"
			<< std::endl;
	else if (this->S_Type == Type::intType)
		std::cout << "float: " << static_cast<float>(this->I_Scalar) << ".0f"
			<< std::endl;
	else if (this->S_Type == Type::floatType)
		std::cout << "float: " << this->F_Scalar
			<< printDotZero(static_cast<float>(this->F_Scalar)) << "f"
			<< std::endl;
	else if (this->S_Type == Type::doubleType)
	{
		if (canConvertToFloat(this->D_Scalar))
			std::cout << "float: " << static_cast<float>(this->D_Scalar)
				<< printDotZero(static_cast<float>(this->D_Scalar)) << "f"
				<< std::endl;
		else
			std::cout << "float: impossible" << std::endl;
	}
}

void Type::printDouble()
{
    if (this->S_Type == Type::charType)
		std::cout << "double: " << static_cast<double>(this->C_Scalar)
			 << ".0" << std::endl;
	else if (this->S_Type == Type::intType)
		std::cout << "double: " << static_cast<double>(this->I_Scalar)
			<< ".0" << std::endl;
	else if (this->S_Type == Type::floatType)
		std::cout << "double: " << static_cast<double>(this->F_Scalar)
			<< printDotZero(static_cast<double>(this->F_Scalar))
			<< std::endl;
	else if (this->S_Type == Type::doubleType)
		std::cout << "double: " << this->D_Scalar
			<< printDotZero(static_cast<double>(this->D_Scalar))
			<< std::endl;
}

bool	Type::show_message = false;