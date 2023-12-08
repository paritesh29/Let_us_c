#include<stdio.h>
int main() {
  
  printf("%5s %5s %5s\n", "y", "x", "i");

  
  for (int y = 1; y <= 6; y++) {
    
    for (float x = 5.5; x <= 12.5; x += 0.5) {
      
      float intelligence_level = 2 + (y + 0.5 * x);

     
      printf("%5d %5.1f %5.2f\n", y, x, intelligence_level);
    }
  }
 return 0; 
 }