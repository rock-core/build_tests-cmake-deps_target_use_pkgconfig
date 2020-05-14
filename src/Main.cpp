#include <iostream>
#include <deps_target_use_pkgconfig/Dummy.hpp>

int main(int argc, char** argv)
{
    deps_target_use_pkgconfig::DummyClass dummyClass;
    dummyClass.welcome();

    return 0;
}
