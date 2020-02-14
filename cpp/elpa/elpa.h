#ifndef ELPA_HH
#define ELPA_HH

#include <climits>
#include <complex>

#include <elpa/elpa_version.hh>

extern "C" {
  struct elpa_struct;
  typedef struct elpa_struct *elpa_t;

  struct elpa_autotune_struct;
  typedef struct elpa_autotune_struct *elpa_autotune_t;
}

#include <elpa/elpa_constants.hh>
#include <elpa/elpa_generated_c_api.hh>
#include <elpa/elpa_generated.hh>
#include <elpa/elpa_generic.hh> // C++ template 

extern "C" {
  const char *elpa_strerr(int elpa_error);
}

#endif
