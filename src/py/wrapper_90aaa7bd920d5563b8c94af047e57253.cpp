#include "_core.h"


namespace autowig
{
}


void wrapper_90aaa7bd920d5563b8c94af047e57253()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f193153cf5a05809936ba0caf6639be0 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._natural_mean_estimation");
    boost::python::object module_f193153cf5a05809936ba0caf6639be0(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f193153cf5a05809936ba0caf6639be0.c_str()))));
    boost::python::scope().attr("_natural_mean_estimation") = module_f193153cf5a05809936ba0caf6639be0;
    boost::python::scope scope_f193153cf5a05809936ba0caf6639be0 = module_f193153cf5a05809936ba0caf6639be0;
    class ::std::shared_ptr< struct ::statiskit::MeanEstimation >  (::statiskit::NaturalMeanEstimation::Estimator::*method_pointer_9d8b36aef9d756019e1e6641ffc86e45)(class ::std::shared_ptr< struct ::statiskit::UnivariateData > const) const = &::statiskit::NaturalMeanEstimation::Estimator::operator();
    boost::python::class_< struct ::statiskit::NaturalMeanEstimation::Estimator, autowig::Held< struct ::statiskit::NaturalMeanEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::MeanEstimation::Estimator > > class_90aaa7bd920d5563b8c94af047e57253("Estimator", "", boost::python::no_init);
    class_90aaa7bd920d5563b8c94af047e57253.def(boost::python::init<  >(""));
    class_90aaa7bd920d5563b8c94af047e57253.def(boost::python::init< struct ::statiskit::NaturalMeanEstimation::Estimator const & >(""));
    class_90aaa7bd920d5563b8c94af047e57253.def("__call__", method_pointer_9d8b36aef9d756019e1e6641ffc86e45, "");

    if(autowig::Held< struct ::statiskit::NaturalMeanEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NaturalMeanEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MeanEstimation::Estimator >::Type >();
    }

}