#include "_core.h"

namespace autowig
{
    typedef ::statiskit::DiscreteEvent class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::DiscreteEvent::DiscreteEvent;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_963689b729ca55bb9ee4a8fbb5e871c0;
            virtual return_type_963689b729ca55bb9ee4a8fbb5e871c0 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_963689b729ca55bb9ee4a8fbb5e871c0, class_type, copy, ); };

        public:
            typedef enum ::statiskit::censoring_type  return_type_e27fd4219e44503fa91f650545c9af28;
            virtual return_type_e27fd4219e44503fa91f650545c9af28 get_censoring() const override { PYBIND11_OVERLOAD_PURE(return_type_e27fd4219e44503fa91f650545c9af28, class_type, get_censoring, ); };
    };
}


namespace autowig {
}

void wrapper_3ae69567ec205969a9f2da364450fd2e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DiscreteEvent, autowig::Trampoline, autowig::HolderType< struct ::statiskit::DiscreteEvent >::Type, struct ::statiskit::UnivariateEvent > class_3ae69567ec205969a9f2da364450fd2e(module, "DiscreteEvent", "");

}