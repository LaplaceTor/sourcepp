#include <tommath.h>

#if defined(_MSC_VER)
mp_err s_read_arc4random(void* p, size_t n) { (void)p; (void)n; return MP_ERR; }
mp_err s_read_getrandom(void* p, size_t n)  { (void)p; (void)n; return MP_ERR; }
mp_err s_read_urandom(void* p, size_t n)    { (void)p; (void)n; return MP_ERR; }
#endif
