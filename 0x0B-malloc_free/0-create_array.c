#include "main.h" 
#include <stdio.h> 
#include <stdlib.h> 
  
 /** 
  * create_array - function that creates an array of chars 
  * and initializes it with a specific char 
  * 
  * @c: array of chars 
  * @size: the size of the memory to print 
  * 
  * Return: address of the memory to print 
  */ 
  
 char *create_array(unsigned int size, char c) 
{ 
char *array; 
unsigned int i; 
  
i = 0; 
  
if (size == 0) 
{ 
return ('\0'); 
} 
else 
{ 
array = malloc(sizeof(char) * size); 
if (array == '\0') 
{ 
return ('\0'); 
} 
else 
{ 
while (i < size) 
{ 
array[i] = c; 
i++; 
} 
} 
return (array); 
} 
}
