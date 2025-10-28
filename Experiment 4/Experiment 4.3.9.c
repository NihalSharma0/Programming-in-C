#include <stdio.h>
int main() {
 int n = 5;

 // Upper half of the pattern
 for(int i = n; i >= 1; i--) {
 // Decreasing numbers
 for(int j = n; j >= i; j--) {
 printf("%d ", j);
 }
 // Increasing numbers
 for(int j = i+1; j <= n; j++) {
 printf("%d ", j);
 }
 printf("\n");
 }

 // Lower half of the pattern
 for(int i = 2; i <= n; i++) {
 // Decreasing numbers
 for(int j = n; j >= i; j--) {
 printf("%d ", j);
 }
 // Increasing numbers
 for(int j = i+1; j <= n; j++) {
 printf("%d ", j);
 }
 printf("\n");
 }

 return 0;
}