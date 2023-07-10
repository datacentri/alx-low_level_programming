#ifndef __MAIN_H__
#define __MAIN_H__

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int p);
int _putchar(char c);
int get_bit(unsigned long int x, unsigned int index_dunni);
int set_bit(unsigned long int *x, unsigned int index_dunni);
int clear_bit(unsigned long int *x, unsigned int index_dunni);
unsigned int dunni_flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
