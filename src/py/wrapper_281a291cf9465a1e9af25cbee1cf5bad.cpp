#include "_core.h"


namespace autowig
{
}


void wrapper_281a291cf9465a1e9af25cbee1cf5bad()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistribution >  (::statiskit::LazyEstimation< ::statiskit::UnivariateHistogramDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_a2af9b26d03b567d835521b3dc1900c6)() const = &::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_281a291cf9465a1e9af25cbee1cf5bad("_LazyEstimation_281a291cf9465a1e9af25cbee1cf5bad", "", boost::python::no_init);
    class_281a291cf9465a1e9af25cbee1cf5bad.def(boost::python::init<  >(""));
    class_281a291cf9465a1e9af25cbee1cf5bad.def(boost::python::init< class ::std::shared_ptr< class ::statiskit::UnivariateHistogramDistribution > const & >(""));
    class_281a291cf9465a1e9af25cbee1cf5bad.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >(""));
    class_281a291cf9465a1e9af25cbee1cf5bad.def("get_estimated", method_pointer_a2af9b26d03b567d835521b3dc1900c6, "");

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type >();
    }

}