#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > const volatile * get_pointer<struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > const volatile >(struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_ae758432b1245acaa8e8d35bb35c2fcb()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::default_delete< ::statiskit::UnivariateDistribution >::*method_pointer_171563c724e35d1a886599e4d3a5803a)(struct ::statiskit::UnivariateDistribution *) const = &::std::default_delete< struct ::statiskit::UnivariateDistribution >::operator();
    boost::python::class_< struct ::std::default_delete< struct ::statiskit::UnivariateDistribution >, autowig::Held< struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >::Type > class_ae758432b1245acaa8e8d35bb35c2fcb("_DefaultDelete_ae758432b1245acaa8e8d35bb35c2fcb", "", boost::python::no_init);
    class_ae758432b1245acaa8e8d35bb35c2fcb.def(boost::python::init<  >(""));
    class_ae758432b1245acaa8e8d35bb35c2fcb.def(boost::python::init< struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > const & >(""));
    class_ae758432b1245acaa8e8d35bb35c2fcb.def("__call__", method_pointer_171563c724e35d1a886599e4d3a5803a, "");

}