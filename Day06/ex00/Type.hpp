#ifndef TYPE_HPP
#define TYPE_HPP

#include <iostream>
#include <cmath>

class Type
{
    private:
        int S_Type;
        char C_Scalar;
        int I_Scalar;
        float F_Scalar;
        double D_Scalar;

        static const int noType = -1;
        static const int charType = 0;
        static const int intType = 1;
        static const int floatType = 2;
        static const int doubleType = 3;

        void    resetValues(void);
        bool	getType( char *input );
        int     handle_special_cases( char *s ) const;
        int		handle_numeric_values( char *s ) const;
        void	setVariable( char *s );
        bool	canConvertToChar( double number );
        bool	canConvertToFloat( double number );
        bool	canConvertToInt( double number );
        const char	*printDotZero( double number );
        void    printChar();
        void    printInt();
        void    printFloat();
        void    printDouble();
    public:
        Type(void);
        Type(char *s);
        Type(const Type & other);
        ~Type(void);
        Type &operator=(const Type &other);

        static bool show_message;

        void    analyzeNewIn(char *s);
        void    printtypes(void);
        class EmptyInput : public std::exception
        {
        public:
            virtual const char *what() const throw()
            {
                return "Please enter an input to be analysed by the converter";
            }
        };

        class CannotAnalyse : public std::exception
        {
        public:
            virtual const char *what() const throw()
            {
                return "The input is not a valid char, int, float or double";
            }
        };
};

#endif