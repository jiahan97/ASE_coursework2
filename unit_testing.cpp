#define BOOST_TEST_MODULE MyModuleName
#include <boost/test/included/unit_test.hpp>
#include "rational.h"

using namespace ExactArithmetic;

BOOST_AUTO_TEST_CASE(my_addition_test) {
	std::istringstream xstr("1/3");
	std::istringstream ystr("3/9");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("6/9");
	
	BOOST_CHECK_EQUAL((x + y), result);

	
}

BOOST_AUTO_TEST_CASE(my_addition_test1) {
	std::istringstream xstr("2/3");
	std::istringstream ystr("1/3");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1/3");

	BOOST_CHECK_EQUAL((x - y), result);

	
}

BOOST_AUTO_TEST_CASE(my_addition_test2) {
	std::istringstream xstr("1/3");
	std::istringstream ystr("2/3");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("2/9");

	BOOST_CHECK_EQUAL((x * y), result);

	
}

BOOST_AUTO_TEST_CASE(my_addition_test3) {
	std::istringstream xstr("1/2");
	std::istringstream ystr("1/2");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1");

	BOOST_CHECK_EQUAL((x / y), result);

	system("PAUSE");
}

