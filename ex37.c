#include <stdio.h> 
int main () {
int x, y, z;
char A, B, C, nx, ny, nz;
scanf("%d %d %d\n", &x, &y, &z);
scanf("%c%c%c", &nx, &ny, &nz); 
  if (x > y && y > z) {
  if (nx == 'C' && ny == 'B' && nz == 'C'){
    printf("%d %d %d\n", x, y, z);
  }
  else if (nx == 'C' && ny == 'A' && nz == 'B') {
printf("%d %d %d\n", x, z, y);
  }
  else if (nx == 'A' && ny == 'B' && nx == 'C') {
printf("%d %d %d\n", z, y, x);
  }
else if 

    


    
  
  // x - y - z ; nx == c , ny == b , nz == a
  
  
  // x - z - y
  
  // y - x - z 
  
  // y - z - x 
  
  // z - y - x 
  
  // z - x - y 







return 0; 
}
