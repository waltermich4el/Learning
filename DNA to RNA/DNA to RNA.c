#include <stdlib.h>
#include <string.h>

char *dna_to_rna(const char *dna)
{
   size_t leng = strlen(dna);
  char *res = (char*)malloc(leng+1);
  for(int i = 0; i < leng;i++){
    res[i] = (dna[i] == 'T')?'U':dna[i];
    
  }
  res[leng]='\0';
  
    return res;
}