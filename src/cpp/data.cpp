/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#include "data.h"

namespace statiskit
{ 
    double UnivariateData::compute_total() const
    {
        double total = 0.;
        for(size_t index = 0, max_index = size(); index < max_index; ++index)
        {
            const UnivariateEvent* event = get_event(index);
            if(event && event->get_event() == ELEMENTARY)
            { total += get_weight(index); }
        }
        return total;
    }

    std::unique_ptr< UnivariateEvent > UnivariateData::compute_minimum() const
    {
        std::unique_ptr< UnivariateEvent > minimum;
        const UnivariateSampleSpace* sample_space = get_sample_space();
        if(sample_space->get_ordering() == TOTAL)
        {
            size_t index = 0, max_index = size();
            while(index < max_index && !minimum)
            {
                const UnivariateEvent* event = get_event(index);
                if(event && get_weight(index) > 0 && event->get_event() == ELEMENTARY)
                { 
                    switch(sample_space->get_outcome())
                    {
                        case CATEGORICAL:
                            minimum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                            break;
                        case DISCRETE:
                            minimum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value());
                            break;
                        case CONTINUOUS:
                            minimum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                            break;
                    }
                }
                ++index;
            }
            switch(sample_space->get_outcome())
            {
                case CATEGORICAL:
                    while(index < max_index)
                    {
                        const UnivariateEvent* event = get_event(index);
                        if(event && get_weight(index) > 0 && event->get_event() == ELEMENTARY)
                        {
                            if(static_cast< const CategoricalElementaryEvent* >(event)->get_value() < static_cast< const CategoricalElementaryEvent* >(minimum.get())->get_value())
                            { minimum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value()); }    
                        }
                        ++index;
                    }
                    break;
                case DISCRETE:
                    while(index < max_index)
                    {
                        const UnivariateEvent* event = get_event(index);
                        if(event && get_weight(index) > 0 && event->get_event() == ELEMENTARY)
                        {
                            if(static_cast< const DiscreteElementaryEvent* >(event)->get_value() < static_cast< const DiscreteElementaryEvent* >(minimum.get())->get_value())
                            { minimum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value()); }    
                        }
                        ++index;
                    }
                    break;
                case CONTINUOUS:
                    while(index < max_index)
                    {
                        const UnivariateEvent* event = get_event(index);
                        if(event && get_weight(index) > 0 && event->get_event() == ELEMENTARY)
                        {
                            if(static_cast< const ContinuousElementaryEvent* >(event)->get_value() < static_cast< const ContinuousElementaryEvent* >(minimum.get())->get_value())
                            { minimum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value()); }    
                        }
                        ++index;
                    }
                    break;
            }
        }
        return minimum;
    }

    std::unique_ptr< UnivariateEvent> UnivariateData::compute_maximum() const
    {
        std::unique_ptr< UnivariateEvent > maximum;
        const UnivariateSampleSpace* sample_space = get_sample_space();
        if(sample_space->get_ordering() == TOTAL)
        {
            size_t index = 0, max_index = size();
            while(index < max_index && !maximum)
            {
                const UnivariateEvent* event = get_event(index);
                if(event && get_weight(index) > 0 && event->get_event() == ELEMENTARY)
                { 
                    switch(sample_space->get_outcome())
                    {
                        case CATEGORICAL:
                            maximum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                            break;
                        case DISCRETE:
                            maximum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value());
                            break;
                        case CONTINUOUS:
                            maximum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                            break;
                    }
                }
                ++index;
            }
            switch(sample_space->get_outcome())
            {
                case CATEGORICAL:
                    while(index < max_index)
                    {
                        const UnivariateEvent* event = get_event(index);
                        if(event && get_weight(index) > 0 && event->get_event() == ELEMENTARY)
                        {
                            if(static_cast< const CategoricalElementaryEvent* >(event)->get_value() > static_cast< const CategoricalElementaryEvent* >(maximum.get())->get_value())
                            { maximum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value()); }    
                        }
                        ++index;
                    }
                    break;
                case DISCRETE:
                    while(index < max_index)
                    {
                        const UnivariateEvent* event = get_event(index);
                        if(event && get_weight(index) > 0 && event->get_event() == ELEMENTARY)
                        {
                            if(static_cast< const DiscreteElementaryEvent* >(event)->get_value() > static_cast< const DiscreteElementaryEvent* >(maximum.get())->get_value())
                            { maximum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value()); }    
                        }
                        ++index;
                    }
                    break;
                case CONTINUOUS:
                    while(index < max_index)
                    {
                        const UnivariateEvent* event = get_event(index);
                        if(event && get_weight(index) > 0 && event->get_event() == ELEMENTARY)
                        {
                            if(static_cast< const ContinuousElementaryEvent* >(event)->get_value() > static_cast< const ContinuousElementaryEvent* >(maximum.get())->get_value())
                            { maximum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value()); }    
                        }
                        ++index;
                    }
                    break;
            }
        }
        return maximum;
    }

    unsigned int NamedData::__index = 0;

    NamedData::NamedData()
    {
        _identifier = "V" + to_string(__index); 
        _ascii = "";
        _latex = "";
        ++__index;
    }

    NamedData::NamedData(const std::string& identifier)
    {
        _identifier = identifier;
        _ascii = "";
        _latex = "";
    }

    NamedData::NamedData(const NamedData& named_data)
    {
        _identifier = named_data._identifier;
        _ascii = named_data._ascii;
        _latex = named_data._latex;
    }

    NamedData::~NamedData()
    {}

    const std::string& NamedData::get_identifier() const
    { return _identifier; }

    void NamedData::set_identifier(const std::string& identifier)
    { _identifier = identifier; }

    const std::string& NamedData::get_ascii() const
    { return _ascii; }

    void NamedData::set_ascii(const std::string& ascii)
    { _ascii = ascii; }

    const std::string& NamedData::get_latex() const
    { return _latex; }

    void NamedData::set_latex(const std::string& latex)
    { _latex = latex; }

    UnivariateDataFrame::UnivariateDataFrame(const UnivariateSampleSpace& sample_space) : NamedData()
    {
        _sample_space = sample_space.copy().release();
        _events.clear();
        _locked = false;
    }

    UnivariateDataFrame::UnivariateDataFrame(const UnivariateDataFrame& data)
    {
        _sample_space = data._sample_space->copy().release();
        _events.resize(data._events.size());
        for(size_t index = 0, max_index = size(); index < max_index; ++index)
        {
            if(data._events[index])
            { _events[index] = data._events[index]->copy().release(); }
        }
        _events = data._events;
        _locked = false;
    }

    UnivariateDataFrame::~UnivariateDataFrame()
    {
        delete _sample_space;
        _sample_space = nullptr;
        for(size_t index = 0, max_index = size(); index < max_index; ++index)
        {
            delete _events[index];
            _events[index] = nullptr;
        }
    }

    const UnivariateSampleSpace* UnivariateDataFrame::get_sample_space() const
    { return _sample_space; }
   
    void UnivariateDataFrame::set_sample_space(const UnivariateSampleSpace& sample_space)
    {
        bool compatible =  true;
        size_t index = 0, max_index = size();
        while(compatible && index < max_index)
        {
            compatible = sample_space.is_compatible(_events[index]);
            ++index;
        }
        if(compatible)
        { _sample_space = sample_space.copy().release(); }
        else
        { throw statiskit::parameter_error("sample_space", "incompatible"); }
    }

    size_t UnivariateDataFrame::size() const
    { return _events.size(); }
    
    const UnivariateEvent* UnivariateDataFrame::get_event(const size_t& index) const 
    {
        if(index > size())
        { throw size_error("index", size(), size_error::inferior); }
        return _events[index];
    }

    void UnivariateDataFrame::set_event(const size_t& index, const UnivariateEvent* event)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        if(event)
        {
            if(_sample_space->is_compatible(event))
            {
                delete _events[index];
                _events[index] = event->copy().release();
            }
            else
            { throw statiskit::parameter_error("event", "incompatible"); } 
        }
        else
        {
            delete _events[index];
            _events[index] = nullptr; 
        }
    }
    
    void UnivariateDataFrame::add_event(const UnivariateEvent* event)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        if(event)
        {
            if(_sample_space->is_compatible(event))
            { _events.push_back(event->copy().release()); }
            else
            { throw parameter_error("event", "incompatible"); }
        }
        else
        { _events.push_back(nullptr); }
    }

    std::unique_ptr< UnivariateEvent > UnivariateDataFrame::pop_event()
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        std::unique_ptr< UnivariateEvent > event(_events.back());
        _events.pop_back();
        return event;
    }

    void UnivariateDataFrame::insert_event(const size_t& index, const UnivariateEvent* event)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        if(event)
        {
            if(_sample_space->is_compatible(event))
            {
                std::vector< UnivariateEvent* >::iterator it = _events.begin();
                advance(it, index);
                _events.insert(it, event->copy().release());    
            }
            else
            { throw parameter_error("event", "incompatible"); } 
        }
        else
        {
            std::vector< UnivariateEvent* >::iterator it = _events.begin();
            advance(it, index);
            _events.insert(it, nullptr);
        }
    }
    
    void UnivariateDataFrame::remove_event(const size_t& index)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        std::vector< UnivariateEvent* >::iterator it = _events.begin();
        advance(it, index);
        delete *it;
        *it = nullptr;
        _events.erase(it);
    }
    
    bool UnivariateDataFrame::is_weighted() const
    { return false; }

    double UnivariateDataFrame::get_weight(const size_t& index) const
    { return 1.0; }

    void UnivariateDataFrame::lock()
    { _locked = true; }

    void UnivariateDataFrame::unlock()
    { _locked = false; }

    const bool& UnivariateDataFrame::is_locked() const
    { return _locked; }

    std::unique_ptr< UnivariateData > UnivariateDataFrame::copy() const
    { return std::make_unique< UnivariateDataFrame >(*this); }

    WeightedUnivariateDataFrame::WeightedUnivariateDataFrame(const UnivariateSampleSpace& sample_space) : UnivariateDataFrame(sample_space)
    { _weights.clear(); }

    
    WeightedUnivariateDataFrame::WeightedUnivariateDataFrame(const WeightedUnivariateDataFrame& data) : UnivariateDataFrame(data)
    { _weights = data._weights; }
    
    WeightedUnivariateDataFrame::~WeightedUnivariateDataFrame()
    {}

    void WeightedUnivariateDataFrame::add_event(const UnivariateEvent* event)
    {
        UnivariateDataFrame::add_event(event);
        _weights.push_back(1.);
    }

    std::unique_ptr< UnivariateEvent > WeightedUnivariateDataFrame::pop_event()
    {
        std::unique_ptr< UnivariateEvent > event = UnivariateDataFrame::pop_event();
        _weights.pop_back();
        return event;
    }

    void WeightedUnivariateDataFrame::insert_event(const size_t& index, const UnivariateEvent* event)
    {
        UnivariateDataFrame::insert_event(index, event);
        std::vector< double >::iterator it = _weights.begin();
        advance(it, index);
        _weights.insert(it, 1.);
    }

    void WeightedUnivariateDataFrame::remove_event(const size_t& index)
    {
        UnivariateDataFrame::remove_event(index);
        std::vector< double >::iterator it = _weights.begin();
        advance(it, index);
        _weights.erase(it);
    }

    bool WeightedUnivariateDataFrame::is_weighted() const
    { return true; }

    double WeightedUnivariateDataFrame::get_weight(const size_t& index) const
    { return _weights[index]; }

    void WeightedUnivariateDataFrame::set_weight(const size_t& index, const double& weight)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        else
        { _weights[index] = weight; }
    }

    std::unique_ptr< UnivariateData > WeightedUnivariateDataFrame::copy() const
    { return std::make_unique< WeightedUnivariateDataFrame >(*this); }

    MultivariateDataFrame::MultivariateDataFrame()
    {
        _variables.clear();
        _locked = false;
    }

    /*MultivariateDataFrame::MultivariateDataFrame(const std::shared_ptr< MultivariateSampleSpace >& sample_space)
    {
        _variables.clear();
        _locked = false;
        for(size_t variable = 0, max_variable = sample_space->size(); variable < max_variable; ++variable)
        { append_variable(std::make_shared< UnivariateData >(sample_space->get_sample_space(variable))); }
    }*/
    
    MultivariateDataFrame::MultivariateDataFrame(const std::vector< std::shared_ptr< UnivariateData > >& variables)
    {
        _variables.clear();
        _locked = false;
        for(size_t variable = 0, max_variable = variables.size(); variable < max_variable; ++variable)
        {
            if(variables[variable])
            { append_variable(variables[variable]); }
            else
            { throw nullptr_error("variables"); }
        }
    }

    MultivariateDataFrame::MultivariateDataFrame(const MultivariateDataFrame& data)
    {
        _variables = data._variables;
        _locked = false;
        _sample_space = new SampleSpace(this);
    }

    MultivariateDataFrame::~MultivariateDataFrame()
    { 
        delete _sample_space;
        _sample_space = nullptr;
    }
    
    const MultivariateSampleSpace* MultivariateDataFrame::get_sample_space() const
    { return _sample_space; }

    MultivariateDataFrame::operator bool() const
    {
        bool valid = _variables.size() > 0;
        if(valid)
        {
            size_t variable = 0, max_variable = _variables.size();
            size_t _size = _variables[variable]->size();
            valid = _variables[variable]->is_locked();
            ++variable;
            while(valid && variable < max_variable && !valid)
            {
                valid = _variables[variable]->size() == _size && _variables[variable]->is_locked();
                ++variable;
            }
        }
        return valid;
    }
    
    size_t MultivariateDataFrame::size() const
    {
        size_t _size;
        if(*this)
        {
            if(_variables.size() > 0)
            { _size = _variables.back()->size(); }
            else
            { _size = 0; }
        }
        else
        { throw std::runtime_error("invalid data frame"); }
        return _size;
    }

    const MultivariateEvent* MultivariateDataFrame::get_event(const size_t& index) const
    { return new Event(&index, this); }

    void MultivariateDataFrame::set_event(const size_t& index, const MultivariateEvent* event)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        if(event)
        {
            for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
            {
                _variables[variable]->unlock();
                const UnivariateEvent* uevent = event->get(variable);
                if(uevent)
                { _variables[variable]->set_event(index, uevent->copy().release()); }
                else
                { _variables[variable]->set_event(index, uevent); }
                _variables[variable]->lock();
            }
        }
        else
        {
            for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
            {
                _variables[variable]->unlock();
                _variables[variable]->set_event(index, nullptr);
                _variables[variable]->lock();
            }
        }
    }

    /*void MultivariateDataFrame::set_event(const size_t& index)
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(*this)
            {
                for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                {
                    _variables[variable]->unlock();
                    _variables[variable]->set_event(index);
                    _variables[variable]->lock();
                }
            }
            else
            { throw std::runtime_error("invalid"); } // TODO error
        }
    }

    void MultivariateDataFrame::set_event(const size_t& index, const std::shared_ptr< MultivariateEvent >& event)
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(event->size() == get_nb_variables())
            {
                if(*this)
                {
                    for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                    {
                        _variables[variable]->unlock();
                        _variables[variable]->set_event(index, event->get_event(variable));
                        _variables[variable]->lock();
                    }
                    // TODO try/catch if failure
                }
                else
                { throw std::runtime_error("invalid"); } // TODO error
            }
            else
            { throw std::runtime_error("incompatible"); } // TODO error
        }
    }

    void MultivariateDataFrame::remove_event()
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(*this)
            {
                size_t _size = size();
                for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                {
                    if(_variables[variable]->size() == _size)
                    {
                        _variables[variable]->unlock();
                        _variables[variable]->remove_event();
                        _variables[variable]->lock();
                    }
                }
            }
            else
            { throw std::runtime_error("invalid"); } // TODO error
        }
    }

    void MultivariateDataFrame::remove_event(const size_t& index)
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(*this)
            {
                for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                {
                    _variables[variable]->unlock();
                    _variables[variable]->remove_event(index);
                    _variables[variable]->lock();
                }
                // TODO try/catch if failure
            }
            else
            { throw std::runtime_error("invalid"); } // TODO error
        }
    }

    void MultivariateDataFrame::insert_event(const size_t& index)
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(*this)
            {
                for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                {
                    _variables[variable]->unlock();
                    _variables[variable]->insert_event(index);
                    _variables[variable]->lock();
                }
            }
            else
            { throw std::runtime_error("invalid"); } // TODO error
        }
    }

    void MultivariateDataFrame::insert_event(const size_t& index, const std::shared_ptr< MultivariateEvent >& event)
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(event->size() == get_nb_variables())
            {
                if(*this)
                {
                    for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                    {
                        _variables[variable]->unlock();
                        _variables[variable]->insert_event(index, event->get_event(variable)); 
                        _variables[variable]->lock();
                    }
                    // TODO try/catch if failure
                }
                else
                { throw std::runtime_error("invalid"); } // TODO error
            } 
            else
            { throw std::runtime_error("incompatible"); } // TODO error
        }
    }

    void MultivariateDataFrame::append_event()
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(*this)
            {
                for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                {
                    _variables[variable]->unlock();
                    _variables[variable]->append_event();
                    _variables[variable]->lock();
                }
            }
            else
            { throw std::runtime_error("invalid"); } // TODO error
        }
    }
    
    void MultivariateDataFrame::append_event(const std::shared_ptr< MultivariateEvent >& event)
    {
        if(_locked)
        { throw std::runtime_error("locked"); } // TODO error
        else
        {
            if(event->size() == get_nb_variables())
            {
                if(*this)
                {
                    for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
                    {
                        _variables[variable]->unlock();
                        _variables[variable]->append_event(event->get_event(variable));
                        _variables[variable]->lock();
                    }
                    // TODO try/catch if failure    
                }
                else
                { throw std::runtime_error("invalid"); } // TODO error
            }
            else
            { throw std::runtime_error("incompatible"); } // TODO error
        }
    }*/

    bool MultivariateDataFrame::is_weighted() const
    { return false; }
    
    double MultivariateDataFrame::get_weight(const size_t& index) const
    { return 1.0; }

    size_t MultivariateDataFrame::get_nb_variables() const
    { return _variables.size(); }

    const std::shared_ptr< UnivariateData >& MultivariateDataFrame::get_variable(const size_t& index) const
    { return _variables[index]; }

    std::shared_ptr< MultivariateDataFrame > MultivariateDataFrame::get_variables(const std::set< size_t >& indices) const
    { 
        std::vector< std::shared_ptr< UnivariateData > > variables(indices.size());
        subset(_variables.cbegin(), _variables.cend(), variables.begin(), indices.cbegin(), indices.cend());
        return std::make_shared< MultivariateDataFrame >(variables); 
    }

    void MultivariateDataFrame::set_variable(const size_t& index, const std::shared_ptr< UnivariateData >& variable)
    { 
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        if(variable)
        {
            if(variable->is_weighted())
            { throw std::runtime_error("cannot contains weighted data"); }
            variable->lock();
            _variables[index] = variable;
        }
        else
        { throw nullptr_error("variable"); } 
    }

    void MultivariateDataFrame::insert_variable(const size_t& index, const std::shared_ptr< UnivariateData >& variable)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        if(variable)
        {
            if(variable->is_weighted())
            { throw std::runtime_error("cannot contains weighted data"); }
            variable->lock();
            std::vector< std::shared_ptr< UnivariateData > >::iterator it = _variables.begin();
            advance(it, index);
            _variables.insert(it, variable);
        }
        else
        { throw nullptr_error("variable"); }
    }

    void MultivariateDataFrame::remove_variable(const size_t& index)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        else
        {
            std::vector< std::shared_ptr< UnivariateData > >::iterator it = _variables.begin();
            advance(it, index);
            _variables.erase(it);
        }
    }

    void MultivariateDataFrame::append_variable(const std::shared_ptr< UnivariateData >& variable)
    {
        if(_locked)
        { throw std::runtime_error("data is locked"); }
        if(variable)
        {
            if(variable->is_weighted())
            { throw std::runtime_error("cannot contains weighted data"); }
            variable->lock();
            _variables.push_back(variable);
        }
        else
        { throw nullptr_error("variable"); }
    }

    void MultivariateDataFrame::lock()
    { _locked = true; }

    void MultivariateDataFrame::unlock()
    { _locked = false; }

    const bool& MultivariateDataFrame::is_locked() const
    { return _locked; }

    double MultivariateDataFrame::compute_total() const
    {
        double total;
        if(get_nb_variables() > 0)
        {
            total = std::numeric_limits< double >::infinity();
            for(size_t variable = 0, max_variable = get_nb_variables(); variable < max_variable; ++variable)
            { total = std::min(total, _variables[variable]->compute_total()); }
        }
        return total;
    }

    MultivariateDataFrame::Event::Event(const size_t* index, const MultivariateDataFrame * data)
    {
        _index = index;
        _data = data;
    }

    MultivariateDataFrame::Event::Event(const Event& event)
    {
        _index = event._index;
        _data = event._data;
    }

    size_t MultivariateDataFrame::Event::size() const
    { 
        if(!_data)
        { throw proxy_connection_error(); }
        return _data->get_nb_variables();
    }

    const UnivariateEvent* MultivariateDataFrame::Event::get(const size_t& index) const
    {
        if(!_index || !_data)
        { throw proxy_connection_error(); }
        return _data->_variables[index]->get_event(*_index);
    }

    void MultivariateDataFrame::Event::set(const size_t& index, const UnivariateEvent* event)
    {
        if(!_index || !_data)
        { throw proxy_connection_error(); }
        _data->_variables[index]->set_event(*_index, event);
    }

    std::unique_ptr< MultivariateEvent > MultivariateDataFrame::Event::copy() const
    { return std::make_unique< Event >(*this); }
}