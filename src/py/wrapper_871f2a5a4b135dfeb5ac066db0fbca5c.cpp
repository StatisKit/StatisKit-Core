#include "_core.h"


namespace autowig
{
}


void wrapper_871f2a5a4b135dfeb5ac066db0fbca5c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_aabf684ce17950b49b6345c1ab565540 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._normal_distribution_ml_estimation");
    boost::python::object module_aabf684ce17950b49b6345c1ab565540(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_aabf684ce17950b49b6345c1ab565540.c_str()))));
    boost::python::scope().attr("_normal_distribution_ml_estimation") = module_aabf684ce17950b49b6345c1ab565540;
    boost::python::scope scope_aabf684ce17950b49b6345c1ab565540 = module_aabf684ce17950b49b6345c1ab565540;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistributionEstimation >  (::statiskit::NormalDistributionMLEstimation::Estimator::*method_pointer_b88313d6ac6a54448dac8133cc3aaaa2)(class ::std::shared_ptr< struct ::statiskit::UnivariateData > const &, bool const &) const = &::statiskit::NormalDistributionMLEstimation::Estimator::operator();
    boost::python::class_< struct ::statiskit::NormalDistributionMLEstimation::Estimator, autowig::Held< struct ::statiskit::NormalDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_871f2a5a4b135dfeb5ac066db0fbca5c("Estimator", "", boost::python::no_init);
    class_871f2a5a4b135dfeb5ac066db0fbca5c.def("__call__", method_pointer_b88313d6ac6a54448dac8133cc3aaaa2, "");

    if(autowig::Held< struct ::statiskit::NormalDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NormalDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
    }

}