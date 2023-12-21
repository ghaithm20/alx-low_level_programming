#include "main.h"

/*  
 *  print_triangle - print a triangle, follwed by a new line;
 *  @size: size of the  triangle
 */

void print_triangle(int size){
	int i,j,k;
	if(size==0)
		_putchar('\n');
	else 
		for( i=0; i<size; i++){
			for(j=0; j<size-i; j++){
				_putchar(' ');
			}
			for(k=0; k<i+1; k++){
				_putchar('#');
			}
			_putchar('\n');
		}
}
