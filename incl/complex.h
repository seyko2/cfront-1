/* @(#) complex.h 1.4 1/27/86 17:46:35 */
/*ident	"@(#)cfront:incl/complex.h	1.4"*/
#include <stream.h>
#include <errno.h>

overload cos;
overload cosh;
overload exp;
overload log;
overload pow;
overload sin;
overload sinh;
overload sqrt;
overload abs;

#include <math.h>
inline double abs(double d) { return fabs(d); }

class complex {
	double	re, im;
public:
	complex(double r = 0, double i = 0)	{ re=r; im=i; }
	 	
	friend	double	real(complex&);
	friend	double	imag(complex&);

	friend	double	abs(complex);
	friend  double  norm(complex);
	friend  double	arg(complex);
	friend  complex conj(complex);
	friend  complex cos(complex);
	friend  complex cosh(complex);
	friend	complex exp(complex);
	friend  complex log(complex);
	friend  complex pow(double, complex);
	friend	complex pow(complex, int);
	friend	complex pow(complex, double);
	friend	complex pow(complex, complex);
	friend  complex	polar(double, double = 0);
	friend  complex sin(complex);
	friend  complex sinh(complex);
	friend	complex sqrt(complex);

	friend	complex	operator+(complex, complex);
	friend	complex	operator-(complex);
	friend	complex operator-(complex, complex);
	friend	complex operator*(complex, complex);
	friend 	complex operator/(complex, complex);
	friend 	int	operator==(complex, complex);
	friend 	int	operator!=(complex, complex);
	
	void operator+=(complex);
	void operator-=(complex);
	void operator*=(complex);
	void operator/=(complex);
};

ostream& operator<<(ostream&, complex);
istream& operator>>(istream&, complex&);

extern int errno;

inline double real(complex& a)
{
	return a.re;
}

inline double imag(complex& a)
{
	return a.im;
}

inline complex operator+(complex a1, complex a2) 
{
	return complex(a1.re+a2.re, a1.im+a2.im);
}

inline complex operator-(complex a1,complex a2) 
{
	return complex(a1.re-a2.re, a1.im-a2.im);
}

inline complex operator-(complex a) 
{
	return complex(-a.re, -a.im);
}

inline complex conj(complex a) 
{
	return complex(a.re, -a.im);
}

inline int operator==(complex a, complex b) 
{
	return (a.re==b.re && a.im==b.im);
}

inline int operator!=(complex a, complex b)
{
	return (a.re!=b.re || a.im!=b.im);
}

inline void complex.operator+=(complex a)
{
	re += a.re;
	im += a.im;
}

inline void complex.operator-=(complex a)
{
	re -= a.re;
	im -= a.im;
}


static const complex complex_zero(0,0);

class c_exception
{
	int	type;
	char	*name;
	complex	arg1;
	complex	arg2;
	complex	retval;
public:

	c_exception( char *n, complex a1, complex a2 = complex_zero )
		{ name = n; arg1 = a1; arg2 = a2; type = 0; retval = 0; }

	friend int complex_error( c_exception& );

	friend complex exp( complex );
	friend complex sinh( complex );
	friend complex cosh( complex );
	friend complex log( complex );	
};
