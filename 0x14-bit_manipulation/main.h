#ifndef __MAIN_H__
#define __MAIN_H__

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int );
int _putchar(char b);
int get_bit(unsigned long int b, unsigned int index);
int set_bit(unsigned long int *b, unsigned int index);
int clear_bit(unsigned long int *b, unsigned int index);
unsigned int flip_bits(unsigned long int b, unsigned long int k);
int get_endianness(void);

#endif
