#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_90ffe8fffb9b5923867b6c24ac9eedb7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateDistribution const * (::statiskit::LazyEstimation< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_1acf532aa09c51eab71eb19671290213)() const = &::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation > > class_90ffe8fffb9b5923867b6c24ac9eedb7("_LazyEstimation_90ffe8fffb9b5923867b6c24ac9eedb7", "", boost::python::no_init);
    class_90ffe8fffb9b5923867b6c24ac9eedb7.def(boost::python::init<  >(""));
    class_90ffe8fffb9b5923867b6c24ac9eedb7.def(boost::python::init< struct ::statiskit::MultivariateDistribution const * >(""));
    class_90ffe8fffb9b5923867b6c24ac9eedb7.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const & >(""));
    class_90ffe8fffb9b5923867b6c24ac9eedb7.def("get_estimated", method_pointer_1acf532aa09c51eab71eb19671290213, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation >::Type >();
    }

}