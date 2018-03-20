#include "_core.h"



namespace autowig
{
    class Wrap_fbe279819c925fe9bb1cdf5d0de8cf1a : public ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate(unsigned int  param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
                        
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_fbe279819c925fe9bb1cdf5d0de8cf1a const volatile * get_pointer<autowig::Wrap_fbe279819c925fe9bb1cdf5d0de8cf1a const volatile >(autowig::Wrap_fbe279819c925fe9bb1cdf5d0de8cf1a const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fbe279819c925fe9bb1cdf5d0de8cf1a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > >  (::statiskit::PolymorphicCopy< ::statiskit::SingularDistribution, ::statiskit::MultinomialSingularDistribution, ::statiskit::SingularDistribution >::*method_pointer_c5864745a15a526abae4cd03bf6d4f57)() const = &::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution >::copy;
    boost::python::class_< autowig::Wrap_fbe279819c925fe9bb1cdf5d0de8cf1a, autowig::Held< autowig::Wrap_fbe279819c925fe9bb1cdf5d0de8cf1a >::Type, boost::python::bases< struct ::statiskit::SingularDistribution >, boost::noncopyable > class_fbe279819c925fe9bb1cdf5d0de8cf1a("_PolymorphicCopy_fbe279819c925fe9bb1cdf5d0de8cf1a", "", boost::python::no_init);
    class_fbe279819c925fe9bb1cdf5d0de8cf1a.def("copy", method_pointer_c5864745a15a526abae4cd03bf6d4f57, "");

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_fbe279819c925fe9bb1cdf5d0de8cf1a >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistribution > >::Type, autowig::Held< struct ::statiskit::SingularDistribution >::Type >();
    }

}