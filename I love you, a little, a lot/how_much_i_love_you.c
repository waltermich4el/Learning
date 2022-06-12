#include <stddef.h>

const char* how_much_i_love_you(int nb_petals) {
  
 const char *a[6];


  
  a[0] = "I love you";
  a[1] = "a little";
  a[2] = "a lot";
  a[3] = "passionately";
  a[4] = "madly";
  a[5] = "not at all"; 
  
  if(nb_petals<7)
   return a[nb_petals -1];
  else    
    return a[(nb_petals-1)%6];  // Most important thing here.
    // This is Modular arithmetic and allows us to wrap around when the indexing exceeds the array limits
 
}