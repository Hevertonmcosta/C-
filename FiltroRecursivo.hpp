/**
	@author Msc. Eng. Heverton Costa
	@date 05/07/2022
*/

#pragma once

 class FiltroRecursivo 
 {
	 private:
	 	
	 	int sample = 5;

		double outFilter = 0;
		 
	 public:

		 FiltroRecursivo(int sample);
		 void update(double in);
		 double getResult();

 };

