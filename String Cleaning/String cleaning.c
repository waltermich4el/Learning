char *clean_string (char *string)
{
// mutate the string in-place and return it
   int j;
   for (int i = 0; string[i] != '\0'; ++i) {
     while (string[i] >= '0' && string[i] <= '9') {
         for (j = i; string[j] != '\0'; ++j) {
            string[j] = string[j + 1];
         }
         string[j] = '\0';
      }
   }

  return string;
}