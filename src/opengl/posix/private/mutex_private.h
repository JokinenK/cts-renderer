#pragma once

#include <pthread.h> 

#ifdef __cplusplus
extern "C" {
#endif

struct CtsMutexImpl {
    pthread_mutex_t mutex;
};

#ifdef __cplusplus
}
#endif