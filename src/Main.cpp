#include <iostream>
#include <deps_target_use_pkgconfig/Dummy.hpp>
#include <deps_target_transitive_dependency/Dummy.hpp>

int main(int argc, char** argv)
{
    deps_target_use_pkgconfig::DummyClass dummyClass;
    deps_target_transitive_dependency::DummyClass dummy;

    dummyClass.welcome();
    dummy.welcome();

    return 0;
}
