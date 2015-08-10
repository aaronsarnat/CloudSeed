
#ifndef DEFAULT_INCLUDE
#define DEFAULT_INCLUDE

typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long long ulong;

#define PI 3.141592653589793238462643383

#define __dllexport __declspec(dllexport)

#ifdef DEBUG
	#define __inline_always inline
#else
	#define __inline_always __forceinline
#endif

#endif
