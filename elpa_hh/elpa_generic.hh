#pragma once

/*! \brief generic C method for elpa_set
 *
 *  \details
 *  \param  handle  handle of the ELPA object for which a key/value pair should be set
 *  \param  name    the name of the key
 *  \param  value   integer/double value to be set for the key
 *  \param  error   on return the error code, which can be queried with elpa_strerr()
 *  \result void
 */
template<typename T> void elpa_set(elpa_t e, const char* name, const T value, int* error) {
  assert(false);
}
template<> void elpa_set(elpa_t e, const char* name, const int value, int* error) {
  elpa_set_integer(e, name, value, error);
}
template<> void elpa_set(elpa_t e, const char* name, const double value, int* error) {
  elpa_set_double(e, name, value, error);
}


/*! \brief generic C method for elpa_get
 *
 *  \details
 *  \param  handle  handle of the ELPA object for which a key/value pair should be queried
 *  \param  name    the name of the key
 *  \param  value   integer/double value to be queried
 *  \param  error   on return the error code, which can be queried with elpa_strerr()
 *  \result void
 */
template<typename T> 
void elpa_get(const elpa_t handle, const char* name, T* value, int* error) {}

template<> 
void elpa_get(const elpa_t handle, const char* name, int* value, int* error) {
  elpa_get_integer(handle, name, value, error);
}

template<> 
void elpa_get(const elpa_t handle, const char* name, double* value, int* error) {
  elpa_get_double(handle, name, value, error);
}


/*! \brief generic C method for elpa_eigenvectors
 *
 *  \details
 *  \param  handle  handle of the ELPA object, which defines the problem
 *  \param  a       float/double std::complex<float>/std::complex<double> pointer to matrix a
 *  \param  ev      on return: float/double pointer to eigenvalues
 *  \param  q       on return: float/double std::complex<float>/std::complex<double> pointer to eigenvectors
 *  \param  error   on return the error code, which can be queried with elpa_strerr()
 *  \result void
 */
template<typename T1, typename T2> void elpa_eigenvectors(const elpa_t handle, T1* a, T2* ev, T1* q, int* error)
#define elpa_eigenvectors(handle, a, ev, q, error) _Generic((a), \
                double*: \
                  elpa_eigenvectors_d, \
                \
                float*: \
                  elpa_eigenvectors_f, \
                \
                std::complex<double>*: \
                  elpa_eigenvectors_dc, \
                \
                std::complex<float>*: \
                  elpa_eigenvectors_fc \
        )(handle, a, ev, q, error)

/*! \brief generic C method for elpa_skew_eigenvectors
 *
 *  \details
 *  \param  handle  handle of the ELPA object, which defines the problem
 *  \param  a       float/double std::complex<float>/std::complex<double> pointer to matrix a
 *  \param  ev      on return: float/double pointer to eigenvalues
 *  \param  q       on return: float/double std::complex<float>/std::complex<double> pointer to eigenvectors
 *  \param  error   on return the error code, which can be queried with elpa_strerr()
 *  \result void
 */
#define elpa_skew_eigenvectors(handle, a, ev, q, error) _Generic((a), \
                double*: \
                  elpa_eigenvectors_d, \
                \
                float*: \
                  elpa_eigenvectors_f, \
        )(handle, a, ev, q, error)



/*! \brief generic C method for elpa_generalized_eigenvectors
 *
 *  \details
 *  \param  handle  handle of the ELPA object, which defines the problem
 *  \param  a       float/double std::complex<float>/std::complex<double> pointer to matrix a
 *  \param  b       float/double std::complex<float>/std::complex<double> pointer to matrix b
 *  \param  ev      on return: float/double pointer to eigenvalues
 *  \param  q       on return: float/double std::complex<float>/std::complex<double> pointer to eigenvectors
 *  \param  is_already_decomposed   set to 1, if b already decomposed by previous call to elpa_generalized
 *  \param  error   on return the error code, which can be queried with elpa_strerr()
 *  \result void
 */
#define elpa_generalized_eigenvectors(handle, a, b, ev, q, is_already_decomposed, error) _Generic((a), \
                double*: \
                  elpa_generalized_eigenvectors_d, \
                \
                float*: \
                  elpa_generalized_eigenvectors_f, \
                \
                std::complex<double>*: \
                  elpa_generalized_eigenvectors_dc, \
                \
                std::complex<float>*: \
                  elpa_generalized_eigenvectors_fc \
        )(handle, a, b, ev, q, is_already_decomposed, error)


/*! \brief generic C method for elpa_eigenvalues
 *
 *  \details
 *  \param  handle  handle of the ELPA object, which defines the problem
 *  \param  a       float/double std::complex<float>/std::complex<double> pointer to matrix a
 *  \param  ev      on return: float/double pointer to eigenvalues
 *  \param  error   on return the error code, which can be queried with elpa_strerr()
 *  \result void
 */
#define elpa_eigenvalues(handle, a, ev, error) _Generic((a), \
                double*: \
                  elpa_eigenvalues_d, \
                \
                float*: \
                  elpa_eigenvalues_f, \
                \
                std::complex<double>*: \
                  elpa_eigenvalues_dc, \
                \
                std::complex<float>*: \
                  elpa_eigenvalues_fc \
        )(handle, a, ev, error)

/*! \brief generic C method for elpa_skew_eigenvalues
 *
 *  \details
 *  \param  handle  handle of the ELPA object, which defines the problem
 *  \param  a       float/double std::complex<float>/std::complex<double> pointer to matrix a
 *  \param  ev      on return: float/double pointer to eigenvalues
 *  \param  error   on return the error code, which can be queried with elpa_strerr()
 *  \result void
 */
#define elpa_skew_eigenvalues(handle, a, ev, error) _Generic((a), \
                double*: \
                  elpa_eigenvalues_d, \
                \
                float*: \
                  elpa_eigenvalues_f, \
        )(handle, a, ev, error)


/*  \brief generic C method for elpa_cholesky
 *
 *  \details
 *  \param  handle  handle of the ELPA object, which defines the problem
 *  \param  a       float/double std::complex<float>/std::complex<double> pointer to matrix a, for which
 *                  the cholesky factorizaion will be computed
 *  \param  error   on return the error code, which can be queried with elpa_strerr()
 *  \result void
 */
#define elpa_cholesky(handle, a, error) _Generic((a), \
                double*: \
                  elpa_cholesky_d, \
                \
                float*: \
                  elpa_cholesky_f, \
                \
                std::complex<double>*: \
                  elpa_cholesky_dc, \
                \
                std::complex<float>*: \
                  elpa_cholesky_fc \
        )(handle, a, error)


/*! \brief generic C method for elpa_hermitian_multiply
 *
 *  \details
 *  \param  handle  handle of the ELPA object, which defines the problem
 *  \param  uplo_a  descriptor for matrix a
 *  \param  uplo_c  descriptor for matrix c
 *  \param  ncb     int
 *  \param  a       float/double std::complex<float>/std::complex<double> pointer to matrix a
 *  \param  b       float/double std::complex<float>/std::complex<double> pointer to matrix b
 *  \param  nrows_b number of rows for matrix b
 *  \param  ncols_b number of cols for matrix b
 *  \param  c       float/double std::complex<float>/std::complex<double> pointer to matrix c
 *  \param  nrows_c number of rows for matrix c
 *  \param  ncols_c number of cols for matrix c
 *  \param  error   on return the error code, which can be queried with elpa_strerr()
 *  \result void
 */
#define elpa_hermitian_multiply(handle, uplo_a, uplo_c, ncb, a, b, nrows_b, ncols_b, c, nrows_c, ncols_c, error) _Generic((a), \
                double*: \
                  elpa_hermitian_multiply_d, \
                \
                float*: \
                  elpa_hermitian_multiply_f, \
                \
                std::complex<double>*: \
                  elpa_hermitian_multiply_dc, \
                \
                std::complex<float>*: \
                  elpa_hermitian_multiply_fc \
        )(handle, a, error)


/*! \brief generic C method for elpa_invert_triangular
 *
 *  \details
 *  \param  handle  handle of the ELPA object, which defines the problem
 *  \param  a       float/double std::complex<float>/std::complex<double> pointer to matrix a, which
 *                  should be inverted
 *  \param  error   on return the error code, which can be queried with elpa_strerr()
 *  \result void
 */
#define elpa_invert_triangular(handle, a, error) _Generic((a), \
                double*: \
                  elpa_invert_trm_d, \
                \
                float*: \
                  elpa_invert_trm_f, \
                \
                std::complex<double>*: \
                  elpa_invert_trm_dc, \
                \
                std::complex<float>*: \
                  elpa_invert_trm_fc \
        )(handle, a, error)
