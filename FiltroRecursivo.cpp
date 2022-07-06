/**
	@author Msc. Eng. Heverton Costa
	@date 05/07/2022
*/

#include "FiltroRecursivo.hpp"

FiltroRecursivo::FiltroRecursivo(int sample) : sample(sample)	{
	
}

void FiltroRecursivo::update(double in)	{

	outFilter += (double)(in - outFilter)/(double)this->sample;		

}

double FiltroRecursivo::getResult()	{
	return outFilter;
}
