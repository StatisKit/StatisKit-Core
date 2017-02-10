#include "_core.h"


namespace autowig
{
}


void wrapper_90255c732933534b957e042c1796455c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::NonStandardStudentDistribution::*method_pointer_f3d688efe3755ec081aae8220d9b7a5c)() const = &::statiskit::NonStandardStudentDistribution::get_nb_parameters;
    double const & (::statiskit::NonStandardStudentDistribution::*method_pointer_b49bbe5d23ef531097f5fc8aeed6ce8b)() const = &::statiskit::NonStandardStudentDistribution::get_mu;
    void  (::statiskit::NonStandardStudentDistribution::*method_pointer_34426514b3da565fbd076b2679558cec)(double const &) = &::statiskit::NonStandardStudentDistribution::set_mu;
    double const & (::statiskit::NonStandardStudentDistribution::*method_pointer_4755b2a0d2f9554a8ee3fdc2b97ecaa8)() const = &::statiskit::NonStandardStudentDistribution::get_sigma;
    void  (::statiskit::NonStandardStudentDistribution::*method_pointer_c6997f2e033852d59d9fb70b5ec2d2c3)(double const &) = &::statiskit::NonStandardStudentDistribution::set_sigma;
    double const & (::statiskit::NonStandardStudentDistribution::*method_pointer_538b03682869588fb286161905474998)() const = &::statiskit::NonStandardStudentDistribution::get_nu;
    void  (::statiskit::NonStandardStudentDistribution::*method_pointer_9dfb534c3b10540ea1417317d4aca3b8)(double const &) = &::statiskit::NonStandardStudentDistribution::set_nu;
    double  (::statiskit::NonStandardStudentDistribution::*method_pointer_42993cb815445c8688b689f2f0ae80a3)(double const &) const = &::statiskit::NonStandardStudentDistribution::ldf;
    double  (::statiskit::NonStandardStudentDistribution::*method_pointer_cecca2b4a6e95ea5a549f4eea540a280)(double const &) const = &::statiskit::NonStandardStudentDistribution::pdf;
    double  (::statiskit::NonStandardStudentDistribution::*method_pointer_3db8c3801839545f83138627d072a311)(double const &) const = &::statiskit::NonStandardStudentDistribution::cdf;
    double  (::statiskit::NonStandardStudentDistribution::*method_pointer_47da5472c1f952b7bc6eaaf5b2495347)(double const &) const = &::statiskit::NonStandardStudentDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::NonStandardStudentDistribution::*method_pointer_43d34ee138fc5db29a765c4293a18395)() const = &::statiskit::NonStandardStudentDistribution::simulate;
    double  (::statiskit::NonStandardStudentDistribution::*method_pointer_8c00f4cf83cf530793e9580b40c05452)() const = &::statiskit::NonStandardStudentDistribution::get_mean;
    double  (::statiskit::NonStandardStudentDistribution::*method_pointer_bac9e4a753415a0098313ab48d64d14f)() const = &::statiskit::NonStandardStudentDistribution::get_variance;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::NonStandardStudentDistribution::*method_pointer_5147a16ffa1456f48a3192b464f5ef99)() const = &::statiskit::NonStandardStudentDistribution::copy;
    boost::python::class_< class ::statiskit::NonStandardStudentDistribution, autowig::Held< class ::statiskit::NonStandardStudentDistribution >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistribution > > class_90255c732933534b957e042c1796455c("NonStandardStudentDistribution", "This class NonStandardStudentDistribution represents a non standardized\nStudent distribution.\n\nThe non-standardized Student distribution is an univariate continuous\ndistribution. The support is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_90255c732933534b957e042c1796455c.def(boost::python::init<  >(""));
    class_90255c732933534b957e042c1796455c.def(boost::python::init< double const &, double const &, double const & >(""));
    class_90255c732933534b957e042c1796455c.def(boost::python::init< class ::statiskit::NonStandardStudentDistribution const & >(""));
    class_90255c732933534b957e042c1796455c.def("get_nb_parameters", method_pointer_f3d688efe3755ec081aae8220d9b7a5c, "Returns the number of parameters of the non-standardized Student\ndistribution\n\nThe number of parameters of a non-standardized Student distribution is\n:math:`3` (:math:`\\mu`, :math:`\\sigma` and :math:`\nu`).\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_90255c732933534b957e042c1796455c.def("get_mu", method_pointer_b49bbe5d23ef531097f5fc8aeed6ce8b, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("set_mu", method_pointer_34426514b3da565fbd076b2679558cec, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_90255c732933534b957e042c1796455c.def("get_sigma", method_pointer_4755b2a0d2f9554a8ee3fdc2b97ecaa8, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("set_sigma", method_pointer_c6997f2e033852d59d9fb70b5ec2d2c3, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_90255c732933534b957e042c1796455c.def("get_nu", method_pointer_538b03682869588fb286161905474998, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the shape parameter nu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("set_nu", method_pointer_9dfb534c3b10540ea1417317d4aca3b8, "Set the value of the shape parameter nu.\n\n:Parameter:\n    `nu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_90255c732933534b957e042c1796455c.def("ldf", method_pointer_42993cb815445c8688b689f2f0ae80a3, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::ldf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value, the ldf is computed as\n     *          $$\n     *               \\ln f(x) = \\left( \\frac{1+\nu}{2} \\right) \\left[ \\ln \nu - \\ln \\left\\lbrace \nu + \\left( \\frac{x-\\mu}{\\sqrt{\nu}\\sigma} \\right)^2  \\right\\rbrace \\right]  - 0.5  \\ln \nu - \\ln \\sigma - \\ln \\textnormal{beta}(0.5 \nu, 0.5) ,\n     *          $$\n     * where [$\\textnormal{beta}(a,b)$](http://www.boost.org/doc/libs/1_37_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/beta_function.html) is the beta  function implemented in the Boost.Math library.\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("pdf", method_pointer_cecca2b4a6e95ea5a549f4eea540a280, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::pdf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value, the pdf is defined by\n     *          $$\n     *               f(x) =  \\frac{\\Gamma \\left(\\frac{1+\nu}{2} \\right) }{\\sqrt{\nu\\pi}\\sigma \\Gamma(\\frac{\nu}{2}) \\left\\lbrace 1 + \\left( \\frac{x-\\mu}{\\sqrt{\nu}\\sigma}\\right)^2  \\right\\rbrace^{\\frac{1+\nu}{2}} },\n     *          $$\n     * and computed as\n     *          $$\n     *               f(x) =  \\left\\lbrace \\frac{\nu}{\nu+\\left( \\frac{x-\\mu}{\\sqrt{\nu}\\sigma}\\right)^2} \\right\\rbrace^{\\frac{1+\nu}{2}} \\Bigg/ \\left\\lbrace \\sqrt{\nu}\\sigma \\; \\textnormal{beta}(0.5\nu, \\; 0.5) \\right\\rbrace ,\n     *          $$      \n     * where [$\\textnormal{beta}(a,b)$](http://www.boost.org/doc/libs/1_37_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/beta_function.html) is the beta  function implemented in the Boost.Math library.\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("cdf", method_pointer_3db8c3801839545f83138627d072a311, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::cdf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value, the cdf is given by\n     *          $$\n     *               P(X \\leq x) = \\left\\{\n     *                              \\begin{array}{ll}\n     *                                 z & x \\leq \\mu, \\\\\n     *                                 1- z & x > \\mu,\n     *                              \\end{array}\n     *                              \\right.\n     *          $$\n     * where $ z $ is computed as\n     *          $$\n     *               z = \\left\\{\n     *                              \\begin{array}{ll}\n     *                               \\displaystyle 0.5 * \\textnormal{ibeta} \\left( 0.5 \nu, \\; 0.5, \\frac{\nu}{\nu+\\left( \\frac{x-\\mu}{\\sigma} \\right)^2} \\right) & \nu < 2 \\left( \\frac{x-\\mu}{\\sigma} \\right)^2 , \\\\\n     *                               \\displaystyle 0.5 * \\textnormal{ibetac} \\left( 0.5, \\; 0.5 \nu, \\frac{\\left( \\frac{x-\\mu}{\\sigma} \\right)^2}{\nu+\\left( \\frac{x-\\mu}{\\sigma} \\right)^2} \\right)   & \\textnormal{otherwise},\n     *                              \\end{array}\n     *                              \\right.\n     *          $$      \n     * where [$\\textnormal{ibeta}(a,b,x)$](http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/ibeta_function.html) is the normalized incomplete beta function and [$\\textnormal{ibetac}(a,b,x)$](http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/ibetac_function.html) is its complement, both implemented in the Boost.Math library.\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("quantile", method_pointer_47da5472c1f952b7bc6eaaf5b2495347, "| :raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::quantile()\n  \\* The quantile for non-standardized Student distribution is computed\n  as \\*\n\n  .. math::\n\n\n         *                x = \\left\\{\n      *                              \\begin{array}{ll}\n      *                              \\displaystyle  \\mu - \\sigma \\left\\lbrace \nu \\frac{1-\\textnormal{ibeta\\_inv}(0.5 \nu, \\; 0.5, \\; 2p) }{\\textnormal{ibeta\\_inv}(0.5 \nu, \\; 0.5, \\; 2p) }  \\right\\rbrace^{0.5}  & p < 0.5, \\\\\n      *                                \\mu                        & p = 0.5, \\\\\n      *                               \\displaystyle  \\mu + \\sigma \\left\\lbrace \nu  \\frac{1-\\textnormal{ibeta\\_inv}(0.5 \nu, \\; 0.5, \\; 2-2p) }{\\textnormal{ibeta\\_inv}(0.5 \nu, \\; 0.5, \\; 2-2p) } \\right\\rbrace^{0.5}  & p > 0.5,\n      *                              \\end{array}\n      *                              \\right.\n         *           \n| \\* where\n  `:math:`\\textnormal{ibeta\\_inv}(a,b,x)` <http://www.boost.org/doc/libs/1_37_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/ibeta_inv_function.html>`__\n  is the incomplete Beta function inverse implemented in the Boost.Math\n  library.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("simulate", method_pointer_43d34ee138fc5db29a765c4293a18395, "");
    class_90255c732933534b957e042c1796455c.def("get_mean", method_pointer_8c00f4cf83cf530793e9580b40c05452, "Get the mean of non-standardized Student distribution $ E(X) =\n:raw-latex:`\\mu `$ if $ :raw-latex:`\nu `> 1 $ and undefined otherwise.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("get_variance", method_pointer_bac9e4a753415a0098313ab48d64d14f, "Get the variance of non-standardized Student distribution $ V(X) =\n:raw-latex:`\\frac{\nu}{\nu-2}` $ if $ :raw-latex:`\nu `>2 $, $ V(X) =\n:raw-latex:`\\infty `$ if $ 1 < :raw-latex:`\nu `:raw-latex:`\\leq `2$ and\nundefined otherwise.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("copy", method_pointer_5147a16ffa1456f48a3192b464f5ef99, "");

    if(autowig::Held< class ::statiskit::NonStandardStudentDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NonStandardStudentDistribution >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::Type >();
    }

}