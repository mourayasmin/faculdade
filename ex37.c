#include <stdio.h> 
int main () {
int x, y, z;
char A, B, C, nx, ny, nz;
scanf("%d %d %d\n", &x, &y, &z);
scanf("%c%c%c", &nx, &ny, &nz); 
  // x y z
  if (x > y && y > z) {
  if (nx == 'C' && ny == 'B' && nz == 'C'){
    printf("%d %d %d\n", x, y, z);
  }
  else if (nx == 'C' && ny == 'A' && nz == 'B') {
printf("%d %d %d\n", x, z, y);
  }
  else if (nz == 'A' && ny == 'B' && nx == 'C') {
printf("%d %d %d\n", z, y, x);
  }
else if (nx == 'A' && ny == 'C' && nz == 'B') {
printf("%d %d %d\n", z, x, y); 
  }
else if (nx == 'B' && ny == 'A' && nz == 'C') {
  printf("%d %d %d\n", y, z, x);
} 
  // x z y   
 if ( x > z && z > y) 
  // y x z 
 if ( y > z && x > z)    
 // y z x
 if (y > z && z > x)    
 // z y x
 if (z > y && y > x)    
 // z x y 
 if (z > x && x > y)
  
return 0; 
}
