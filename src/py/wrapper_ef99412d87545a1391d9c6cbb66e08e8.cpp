#include "_core.h"


namespace autowig
{
}


void wrapper_ef99412d87545a1391d9c6cbb66e08e8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistribution >  (::statiskit::LazyEstimation< ::statiskit::NormalDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_a5d548b4f590584d9fc5065ccaf78666)() const = &::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_ef99412d87545a1391d9c6cbb66e08e8("_LazyEstimation_ef99412d87545a1391d9c6cbb66e08e8", "", boost::python::no_init);
    class_ef99412d87545a1391d9c6cbb66e08e8.def(boost::python::init<  >(""));
    class_ef99412d87545a1391d9c6cbb66e08e8.def(boost::python::init< class ::std::shared_ptr< class ::statiskit::NormalDistribution > const & >(""));
    class_ef99412d87545a1391d9c6cbb66e08e8.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >(""));
    class_ef99412d87545a1391d9c6cbb66e08e8.def("get_estimated", method_pointer_a5d548b4f590584d9fc5065ccaf78666, "");

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type >();
    }

}