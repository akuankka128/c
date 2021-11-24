#ifndef memrep_def
#define memrep_def
# define MEMREP1(x) (*(unsigned char*)&x)
# define MEMREP2(x) (*(unsigned short*)&x)
# define MEMREP4(x) (*(unsigned long*)&x)
# define MEMREP8(x) (*(unsigned long long*)&x)
#endif