#include "_core.h"

namespace autowig
{
    typedef ::statiskit::ContinuousSampleSpace class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::ContinuousSampleSpace::ContinuousSampleSpace;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  return_type_a90fb1d3b5f75154bbd9fec1e0bee360;
            virtual return_type_a90fb1d3b5f75154bbd9fec1e0bee360 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_a90fb1d3b5f75154bbd9fec1e0bee360, class_type, copy, ); };

        public:
            typedef bool  return_type_aabfe8c337085d58a1ab73066415dd66;
            typedef struct ::statiskit::UnivariateEvent const * param_aabfe8c337085d58a1ab73066415dd66_0_type;
            virtual return_type_aabfe8c337085d58a1ab73066415dd66 is_compatible(param_aabfe8c337085d58a1ab73066415dd66_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_aabfe8c337085d58a1ab73066415dd66, class_type, is_compatible, param_0); };
    };
}


namespace autowig {
}

void wrapper_aa6b2bab0be654649ef497aa71dff2e3(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousSampleSpace, autowig::Trampoline, autowig::HolderType< struct ::statiskit::ContinuousSampleSpace >::Type, struct ::statiskit::UnivariateSampleSpace > class_aa6b2bab0be654649ef497aa71dff2e3(module, "ContinuousSampleSpace", "");

}