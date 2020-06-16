#ifndef ELPA_H
#define ELPA_H

#include <limits.h>

#ifdef __cplusplus
#include <complex>
#else
#include <complex.h>
#endif

#include <elpa/elpa_version.h>

#ifdef __cplusplus
extern "C" {
#endif
struct elpa_struct;
typedef struct elpa_struct *elpa_t;

struct elpa_autotune_struct;
typedef struct elpa_autotune_struct *elpa_autotune_t;
#ifdef __cplusplus
}
#endif


#include <elpa/elpa_constants.h>
#include <elpa/elpa_generated_c_api.h>
#include <elpa/elpa_generated.h>
#include <elpa/elpa_generic.h>

#ifdef __cplusplus
extern "C" {
#endif
const char *elpa_strerr(int elpa_error);
#ifdef __cplusplus
}
#endif

#endif
