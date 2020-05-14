#include <boost/test/unit_test.hpp>
#include <deps_target_use_pkgconfig/Dummy.hpp>

using namespace deps_target_use_pkgconfig;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    deps_target_use_pkgconfig::DummyClass dummy;
    dummy.welcome();
}
