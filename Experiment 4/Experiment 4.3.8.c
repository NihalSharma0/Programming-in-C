#include <stdio.h>
int main() {
 int n = 5;

 // Upper half of the pattern
 for(int i = 1; i <= n; i++) {
 // Increasing numbers
 for(int j = 1; j <= i; j++) {
 printf("%d ", j);
 }
 // Decreasing numbers
 for(int j = i-1; j >= 1; j--) {
 printf("%d ", j);
 }
 printf("\n");
 }

 // Lower half of the pattern
 for(int i = n-1; i >= 1; i--) {
 // Increasing numbers
 for(int j = 1; j <= i; j++) {
 printf("%d ", j);
 }
 // Decreasing numbers
 for(int j = i-1; j >= 1; j--) {
 printf("%d ", j);
 }
 printf("\n");
 }

 return 0;
}