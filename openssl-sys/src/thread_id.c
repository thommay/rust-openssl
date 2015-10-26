#include<pthread.h>

unsigned long rust_openssl_thread_id()
{
    return (unsigned long) pthread_self();
}
