#include <math.h>
#include <stdio.h>

int* squareOrSquareRoot(int* array, int length)
{
  
  
  double sq = 0;

  for (int i=0;i<length;i++){
    
    sq = sqrt(array[i]);  
    
    if((sq - floor(sq)) == 0) 
      array[i] = sqrt(array[i]);  
    else        
        array[i] = array[i]*array[i];
     
  }
  return array;
}