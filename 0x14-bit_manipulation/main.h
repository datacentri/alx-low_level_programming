#ifndef __MAIN_H__
#define __MAIN_H__

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int p);
int _putchar(char c);
int get_bit(unsigned long int x, unsigned int index_dunni);
int set_bit(unsigned long int *x, unsigned int index_dunni);
int clear_bit(unsigned long int *x, unsigned int index_dunni);
unsigned int flip_bits(unsigned long int x, unsigned long int hh);
int get_endiannes_s(void);

#endif
