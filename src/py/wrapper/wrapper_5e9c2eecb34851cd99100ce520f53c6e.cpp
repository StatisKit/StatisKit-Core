#include "_core.h"



namespace autowig
{
    class Wrap_5e9c2eecb34851cd99100ce520f53c6e : public ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
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
    template <> autowig::Wrap_5e9c2eecb34851cd99100ce520f53c6e const volatile * get_pointer<autowig::Wrap_5e9c2eecb34851cd99100ce520f53c6e const volatile >(autowig::Wrap_5e9c2eecb34851cd99100ce520f53c6e const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5e9c2eecb34851cd99100ce520f53c6e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  (::statiskit::PolymorphicCopy< ::statiskit::MultivariateDistribution, ::statiskit::SplittingDistribution, ::statiskit::DiscreteMultivariateDistribution >::*method_pointer_54ccfbb2a06051f0a2246692c1943769)() const = &::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution >::copy;
    boost::python::class_< autowig::Wrap_5e9c2eecb34851cd99100ce520f53c6e, autowig::Held< autowig::Wrap_5e9c2eecb34851cd99100ce520f53c6e >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistribution >, boost::noncopyable > class_5e9c2eecb34851cd99100ce520f53c6e("_PolymorphicCopy_5e9c2eecb34851cd99100ce520f53c6e", "", boost::python::no_init);
    class_5e9c2eecb34851cd99100ce520f53c6e.def("copy", method_pointer_54ccfbb2a06051f0a2246692c1943769, "");

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5e9c2eecb34851cd99100ce520f53c6e >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistribution >::Type >();
    }

}