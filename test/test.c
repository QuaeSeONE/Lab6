#include <ctest.h>
#include <sqr.h>

CTEST(equation_suite, two_roots_test)
{
	const double a = 1;
	const double b = -3;
	const double c = -4;

	double x1;
	double x2;

	const double expected_x1 = 4;
	const double expected_x2 = -1;

	double got_return;
	
	got_return = sqr(a, b, c, &x1, &x2);

	const double expected_return = 0;

	ASSERT_EQUAL(got_return, expected_return);

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
}

CTEST(equation_suite, one_root_test)
{
	const double a = 3;
	const double b = -18;
	const double c = 27;

	double x1;
	double x2;

	const double expected_x1 = 3;
	const double expected_x2 = 3;

	double got_return;
	
	got_return = sqr(a, b, c, &x1, &x2);

	const double expected_return = 0;

	ASSERT_EQUAL(got_return, expected_return);

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
}

CTEST(equation_suite, no_roots_test)
{
	const double a = 1;
	const double b = 1;
	const double c = 1;

	double x1;
	double x2;

	double got_return;
	
	got_return = sqr(a, b, c, &x1, &x2);

	const double expected_return = 1;

	ASSERT_EQUAL(got_return, expected_return);
}
