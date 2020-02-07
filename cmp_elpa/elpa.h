#ifndef ELPA_HH
#define ELPA_HH

#include <climits>
#include <complex>

#include <elpa_hh/elpa_version.hh>

struct elpa_struct;
typedef struct elpa_struct *elpa_t;

struct elpa_autotune_struct;
typedef struct elpa_autotune_struct *elpa_autotune_t;


#include <elpa_hh/elpa_constants.hh>
#include <elpa_hh/elpa_generated_c_api.hh>
#include <elpa_hh/elpa_generated.hh>
#include <elpa_hh/elpa_generic.hh> // C++ template 

const char *elpa_strerr(int elpa_error);

#endif
