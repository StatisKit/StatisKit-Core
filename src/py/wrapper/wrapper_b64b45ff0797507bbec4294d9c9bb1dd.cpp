#include "_core.h"



namespace autowig
{

    void method_decorator_439813f93d6a55b9972f7cdf20f4bbba(class ::std::unique_ptr< class ::statiskit::BetaDistribution, struct ::std::default_delete< class ::statiskit::BetaDistribution > > const & instance, const class ::statiskit::BetaDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::BetaDistribution, struct ::std::default_delete< class ::statiskit::BetaDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::BetaDistribution, struct ::std::default_delete< class ::statiskit::BetaDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::BetaDistribution, struct ::std::default_delete< class ::statiskit::BetaDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b64b45ff0797507bbec4294d9c9bb1dd()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_b64b45ff0797507bbec4294d9c9bb1dd_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::BetaDistribution, struct ::std::default_delete< class ::statiskit::BetaDistribution > > const & unique_ptr_b64b45ff0797507bbec4294d9c9bb1dd)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::BetaDistribution, struct ::std::default_delete< class ::statiskit::BetaDistribution > > & >(unique_ptr_b64b45ff0797507bbec4294d9c9bb1dd).release()).ptr());
            std::shared_ptr< class ::statiskit::BetaDistribution  > shared_ptr_b64b45ff0797507bbec4294d9c9bb1dd(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::BetaDistribution, struct ::std::default_delete< class ::statiskit::BetaDistribution > > & >(unique_ptr_b64b45ff0797507bbec4294d9c9bb1dd)));
            return boost::python::incref(boost::python::object(shared_ptr_b64b45ff0797507bbec4294d9c9bb1dd).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::BetaDistribution, struct ::std::default_delete< class ::statiskit::BetaDistribution > >, unique_ptr_b64b45ff0797507bbec4294d9c9bb1dd_to_python >();
}