/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_DATA_H
#define STATISKIT_CORE_DATA_H

#include "base.h"
#include "sample_space.h"

#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>

namespace statiskit
{
    struct STATISKIT_CORE_API UnivariateData
    {
        typedef UnivariateSampleSpace sample_space_type;
        typedef UnivariateEvent event_type;

        struct STATISKIT_CORE_API Generator
        {
            #if !defined(_WIN32) && !defined(WIN32)         
            virtual explicit operator bool() const = 0;
            #else
            virtual operator bool() const = 0;
            #endif

            virtual Generator& operator++() = 0;

            virtual const UnivariateEvent* event() const = 0;
            virtual double weight() const = 0;
        };

        virtual std::unique_ptr< UnivariateData::Generator > generator() const = 0;

        virtual const UnivariateSampleSpace* get_sample_space() const = 0;
    
        virtual void lock() = 0;
        virtual void unlock() = 0;
        virtual const bool& is_locked() const = 0;

        virtual std::unique_ptr< UnivariateData > copy() const = 0;
        
        double compute_total() const;
        std::unique_ptr< UnivariateEvent > compute_minimum() const;
        std::unique_ptr< UnivariateEvent > compute_maximum() const;
    };

    class STATISKIT_CORE_API NamedData
    {
        public:
            NamedData();
            NamedData(const std::string& identifier);
            NamedData(const NamedData& named_data);
            ~NamedData();

            const std::string& get_identifier() const;
            void set_identifier(const std::string& identifier);

            const std::string& get_ascii() const;
            void set_ascii(const std::string& ascii);

            const std::string& get_latex() const;
            void set_latex(const std::string& latex);

        protected:
            std::string _identifier;
            std::string _ascii;
            std::string _latex;

        private:
            static unsigned int __index;
    };

    class STATISKIT_CORE_API UnivariateDataFrame : public UnivariateData, public NamedData
    {
        public:
            UnivariateDataFrame(const UnivariateSampleSpace& sample_space);
            UnivariateDataFrame(const UnivariateDataFrame& data);
            virtual ~UnivariateDataFrame();

            virtual std::unique_ptr< UnivariateData::Generator > generator() const;

            virtual const UnivariateSampleSpace* get_sample_space() const;
            void set_sample_space(const UnivariateSampleSpace& sample_space);

            virtual void lock();
            virtual void unlock();
            virtual const bool& is_locked() const;

            virtual std::unique_ptr< UnivariateData > copy() const;

            size_t get_nb_events() const;

            virtual const UnivariateEvent* get_event(const size_t& index) const;
            virtual void set_event(const size_t& index, const UnivariateEvent* event);

            virtual void add_event(const UnivariateEvent* event);
            virtual std::unique_ptr< UnivariateEvent > pop_event();

            virtual void insert_event(const size_t& index, const UnivariateEvent* event);
            virtual void remove_event(const size_t& index);

        protected:
            UnivariateSampleSpace* _sample_space;
            std::vector< UnivariateEvent* > _events;
            bool _locked;

            class STATISKIT_CORE_API Generator : public UnivariateData::Generator
            {
                public:
                    Generator(const UnivariateDataFrame* data);
                    virtual ~Generator();

                    #if !defined(_WIN32) && !defined(WIN32)         
                    virtual explicit operator bool() const;
                    #else
                    virtual operator bool() const;
                    #endif

                    virtual UnivariateData::Generator& operator++();

                    virtual const UnivariateEvent* event() const;
                    virtual double weight() const;

                protected:
                    const UnivariateDataFrame* _data;
                    size_t _index;
            };            
    };

    class STATISKIT_CORE_API WeightedUnivariateDataFrame : public UnivariateDataFrame
    {
        public:
            WeightedUnivariateDataFrame(const UnivariateSampleSpace& sample_space);
            WeightedUnivariateDataFrame(const WeightedUnivariateDataFrame& data);
            virtual ~WeightedUnivariateDataFrame();

            virtual std::unique_ptr< UnivariateData::Generator > generator() const;

            virtual std::unique_ptr< UnivariateData > copy() const;            

            virtual void add_event(const UnivariateEvent* event);
            virtual std::unique_ptr< UnivariateEvent > pop_event();

            virtual void insert_event(const size_t& index, const UnivariateEvent* event);
            virtual void remove_event(const size_t& index);

            virtual double get_weight(const size_t& index) const;     
            void set_weight(const size_t& index, const double& weight);       

        protected:
            std::vector< double > _weights;

            class STATISKIT_CORE_API Generator : public UnivariateData::Generator
            {
                public:
                    Generator(const WeightedUnivariateDataFrame* data);
                    virtual ~Generator();

                    #if !defined(_WIN32) && !defined(WIN32)         
                    virtual explicit operator bool() const;
                    #else
                    virtual operator bool() const;
                    #endif

                    virtual UnivariateData::Generator& operator++();

                    virtual const UnivariateEvent* event() const;
                    virtual double weight() const;

                protected:
                    const WeightedUnivariateDataFrame* _data;
                    size_t _index;
            };      
    };

    /* struct STATISKIT_CORE_API MultivariateData
    {
        typedef MultivariateSampleSpace sample_space_type;
        typedef MultivariateEvent event_type;
        
        #if !defined(_WIN32) && !defined(WIN32)         
        virtual explicit operator bool() const = 0;
        #else
        virtual operator bool() const = 0;
        #endif

        struct STATISKIT_CORE_API Generator
        {
            #if !defined(_WIN32) && !defined(WIN32)         
            virtual explicit operator bool() const = 0;
            #else
            virtual operator bool() const = 0;
            #endif

            virtual Generator& operator++() = 0;

            virtual const MultivariateEvent* event() const = 0;
            virtual double weight() const = 0;
        };

        virtual std::unique_ptr< MultivariateData::Generator > generator() const = 0;

        //virtual const MultivariateSampleSpace* get_sample_space() const = 0;

        virtual size_t get_nb_events() const = 0;

        virtual size_t get_nb_variables() const = 0;
       
        virtual void lock() = 0;
        virtual void unlock() = 0;
        virtual const bool& is_locked() const = 0;

        virtual std::unique_ptr< MultivariateData > copy() const = 0;

        double compute_total() const;
        // std::unique_ptr< MultivariateEvent > compute_minimum() const;
        // std::unique_ptr< MultivariateEvent > compute_maximum() const;
    };

    class STATISKIT_CORE_API MultivariateDataFrame : public MultivariateData
    {
        public:
            MultivariateDataFrame();
            MultivariateDataFrame(const std::vector< UnivariateDataFrame* >& variables);
            MultivariateDataFrame(const MultivariateDataFrame& data);
            virtual ~MultivariateDataFrame();

            virtual std::unique_ptr< MultivariateData::Generator > generator() const;

            //virtual const MultivariateSampleSpace* get_sample_space() const;
            
            virtual size_t get_nb_variables() const;

            virtual void lock();
            virtual void unlock();
            virtual const bool& is_locked() const;

            virtual std::unique_ptr< MultivariateData > copy() const;
         
        protected:
            std::vector< UnivariateDataFrame* > _variables;
            bool _locked;

            class STATISKIT_CORE_API Event : public MultivariateEvent
            {
                public:
                    Event(const MultivariateDataFrame* data, const size_t& index);
                    Event(const Event& event);
                    virtual ~Event();

                    virtual size_t size() const;
                            
                    virtual const UnivariateEvent* get(const size_t& index) const;
                    virtual void set(const size_t& index, const UnivariateEvent* event);

                    virtual std::unique_ptr< MultivariateEvent > copy() const;

                    #if !defined(_WIN32) && !defined(WIN32)         
                    virtual explicit operator bool() const;
                    #else
                    virtual operator bool() const;
                    #endif

                protected:
                    const MultivariateDataFrame* _data;
                    size_t _index;                    

                    class STATISKIT_CORE_API Generator : public MultivariateData::Generator
                    {
                        public:
                            Generator(const Event* event);
                            virtual ~Generator();

                            #if !defined(_WIN32) && !defined(WIN32)         
                            virtual explicit operator bool() const;
                            #else
                            virtual operator bool() const;
                            #endif

                            virtual MultivariateData::Generator& operator++();

                            virtual const MultivariateEvent* event() const;
                            virtual double weight() const;

                        protected:
                            Event* _event;
                    };
            };  */

            // class Event : public MultivariateEvent
            // {
            //     public:
            //         Event(const size_t* index, const MultivariateDataFrame* data);
            //         Event(const Event& event);
            //         //virtual ~Event();

            //         virtual size_t size() const;

            //         virtual const UnivariateEvent* get(const size_t& index) const;
            //         virtual void set(const size_t& index, const UnivariateEvent* event);
 
            //         virtual std::unique_ptr< MultivariateEvent > copy() const;

            //     protected:
            //         const size_t* _index;
            //         const MultivariateDataFrame* _data;
            // };

            // class SampleSpace : public MultivariateSampleSpace
            // {
            //     public:
            //         SampleSpace(MultivariateDataFrame* data);
            //         SampleSpace(const SampleSpace& sample_space);
            //         virtual ~SampleSpace();

            //         virtual size_t size() const;

            //         virtual const UnivariateSampleSpace* get(const size_t& index) const;
 
            //         virtual std::unique_ptr< MultivariateSampleSpace > copy() const;

            //     protected:
            //         size_t _index;
            //         MultivariateDataFrame* _data;
            // };

    //};

    /*template<class D>
    class DataMask : public D
    {
        public:
            DataMask(const std::shared_ptr< D >& masked);
            DataMask(const DataMask< D >& data);

            const std::shared_ptr< D >& get_masked() const;

            virtual const typename D::sample_space_type* get_sample_space() const;
                         
            virtual const typename D::event_type * get_event(const size_t& index) const;
            virtual void set_event(const size_t& index, const typename D::event_type* event);
           
            virtual bool is_weighted() const;

            virtual double get_weight(const size_t& index) const;
            
            virtual void lock();
            virtual void unlock();
            virtual const bool& is_locked() const;
            
        protected:
            std::shared_ptr< D > _masked;
            
            virtual size_t compute_index(const size_t& index) const = 0;
    };

    template<class D>
    class RandomizedData : public DataMask< D >
    {
        public:
            RandomizedData(const std::shared_ptr< D >& randomized);
            RandomizedData(const RandomizedData< D >& data);
            
            virtual size_t size() const;

            const std::shared_ptr< D >& get_randomized() const;

            const std::vector< size_t >& get_randomization() const;

            void randomize();

            virtual std::unique_ptr< D > copy() const;

        protected:
            std::vector< size_t > _randomization;
            
            virtual size_t compute_index(const size_t& index) const;       
    };

  
    template<class D>
    class DataIntervalMask : public DataMask< D >
    {
        public:
            DataIntervalMask(const std::shared_ptr< D >& masked, const size_t& lower, const size_t& upper, const bool& inside);
            DataIntervalMask(const DataIntervalMask< D >& data);
            
            virtual size_t size() const;
            
            const bool& get_inside() const;
            void set_inside(const bool& inside);

            virtual std::unique_ptr< D > copy() const;

        protected:
            size_t _lower;
            size_t _upper;
            bool _inside;
            
            virtual size_t compute_index(const size_t& index) const;                    
    };*/
}

#include "data.hpp"
#endif
