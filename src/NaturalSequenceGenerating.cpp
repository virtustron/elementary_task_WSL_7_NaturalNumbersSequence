#include "NaturalSequenceGenerating.hpp"

#include <stdexcept>
#include "NaturalSequenceParametersContainer.hpp"
#include "NaturalSequenceGeneratedContainer.hpp"


int InitializeNaturalSequenceParameters(void** parameters_container_to_initialize)
{
    // TODO try smart poriners
    NaturalSequenceParametersContainer* parameters_container;
    
    try
    {
        parameters_container = new NaturalSequenceParametersContainer(100);
    }
    catch (const std::invalid_argument& e)
	{
        if (parameters_container != NULL)
            delete parameters_container;
        
        return INIT_INVALID_UPPER_BOUND;
	}
    
    *parameters_container_to_initialize = (void*)parameters_container;
    
    return INIT_SUCCEDED;
}

int GenerateNaturalSequence(void* parameters_container, void **generated_sequence_container)
{
    if (parameters_container == NULL)
    {
        return GENERATING_PARAMETERS_IS_NOT_VALID;
    }
    
    try
    {
        NaturalSequenceParametersContainer* sequence_parameters_container = (NaturalSequenceParametersContainer*)parameters_container;

        

        *can_contain = EnvelopeComparator::CanOneContainAnother(envelope_1, envelope_2);
    }
    catch(const std::exception& e)
    {
        return GENERATING_FAILED;
    }
    
    
    
    return GENERATING_SUCCEDED;
}