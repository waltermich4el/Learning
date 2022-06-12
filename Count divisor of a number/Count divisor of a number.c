int divisors(int n) {
  
  int rem = 0,div_num = 0;
  
  
  for(int i = 1;i<=n;i++){
    if (n%i==0){
      div_num++;
    }
    else 
      continue;
  }
    return div_num;
   
}