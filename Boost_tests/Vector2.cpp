//
// Created by yann paillard on 12/10/2023.
//

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN  // in only one cpp file
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_SUITE(TwoTwoFour_suite)
BOOST_AUTO_TEST_CASE(testPlus) {
        BOOST_CHECK_EQUAL(2+2, 4);
}
BOOST_AUTO_TEST_CASE(testMult) {
        BOOST_CHECK_EQUAL(2*2, 4);
}
BOOST_AUTO_TEST_SUITE_END()