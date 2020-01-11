#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <time.h>  //CLOCKS_PER_SEC
#include <pmmintrin.h>
#include <mmintrin.h> /*  MMX instrinsics __m64 integer type */
#include <xmmintrin.h> /* SSE __m128 float */
#include <emmintrin.h>

//Estructura img_data la cual tiene como objetivo almacenar los datos y
//las variables necesarias para procesar la imagen deseada

typedef struct img_data 
{
  int width;        /* Ancho de la imagen */
  int ** img;       /* imagen en pixeles */
  int ** img_c;     
	
} img_data;



//Declaracion de funciones
void read_load_img(char* filename, img_data* image);
void write_img(char* salida, img_data* image);
void dilatation_paralela( img_data* image, int n_task);
void ver_matriz(img_data* image);