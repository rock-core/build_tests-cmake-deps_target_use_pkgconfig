#ifndef _DEPS_TARGET_USE_PKGCONFIG_DUMMY_HPP_
#define _DEPS_TARGET_USE_PKGCONFIG_DUMMY_HPP_

#include <deps_target/Dummy.hpp>

namespace deps_target_use_pkgconfig
{
    class DummyClass
    {
        deps_target::DummyClass mDummy;

        public: 
            /**
             * Print a welcome to stdout
             * \return nothing
             */
            void welcome();
    };

} // end namespace deps_target_use_pkgconfig

#endif // _DUMMYPROJECT_DUMMY_HPP_
