#ifdef REALCASE
#undef  MATH_DATATYPE
#define  MATH_DATATYPE real
#undef  PRECISION
#undef  PRECISION_STR

#undef  PRECISION_GEMV
#undef  PRECISION_TRMV
#undef  PRECISION_GEMM
#undef  PRECISION_TRMM
#undef  PRECISION_HERK
#undef  PRECISION_SYRK
#undef  PRECISION_SYMV
#undef  PRECISION_SYMM
#undef  PRECISION_HEMV
#undef  PRECISION_HER2
#undef  PRECISION_SYR2
#undef  PRECISION_SYR2K
#undef  PRECISION_GEQRF
#undef  PRECISION_STEDC
#undef  PRECISION_STEQR
#undef  PRECISION_LAMRG
#undef  PRECISION_LAMCH
#undef  PRECISION_LAPY2
#undef  PRECISION_LAED4
#undef  PRECISION_LAED5
#undef  cublas_PRECISION_GEMM
#undef  cublas_PRECISION_TRMM
#undef  cublas_PRECISION_GEMV
#undef  PRECISION_SUFFIX

#undef  CONST_0_0
#undef  CONST_0_5
#undef  CONST_1_0
#undef  CONST_2_0
#undef  CONST_8_0
#undef  size_of_PRECISION_real
#undef  MPI_REAL_PRECISION
#undef  C_DATATYPE_KIND

#ifdef DOUBLE_PRECISION
#define  PRECISION double
#define  PRECISION_STR 'double'
#define  PRECISION_SUFFIX "_double"

#define  PRECISION_GEMV DGEMV
#define  PRECISION_TRMV DTRMV
#define  PRECISION_GEMM DGEMM
#define  PRECISION_TRMM DTRMM
#define  PRECISION_HERK DHERK
#define  PRECISION_SYRK DSYRK
#define  PRECISION_SYMV DSYMV
#define  PRECISION_SYMM DSYMM
#define  PRECISION_HEMV DHEMV
#define  PRECISION_HER2 DHER2
#define  PRECISION_SYR2 DSYR2
#define  PRECISION_SYR2K DSYR2K
#define  PRECISION_GEQRF DGEQRF
#define  PRECISION_STEDC DSTEDC
#define  PRECISION_STEQR DSTEQR
#define  PRECISION_LAMRG DLAMRG
#define  PRECISION_LAMCH DLAMCH
#define  PRECISION_LAPY2 DLAPY2
#define  PRECISION_LAED4 DLAED4
#define  PRECISION_LAED5 DLAED5
#define  cublas_PRECISION_GEMM cublas_DGEMM
#define  cublas_PRECISION_TRMM cublas_DTRMM
#define  cublas_PRECISION_GEMV cublas_DGEMV
#define  CONST_0_0 0.0_rk8
#define  CONST_0_5 0.5_rk8
#define  CONST_1_0 1.0_rk8
#define  CONST_2_0 2.0_rk8
#define  CONST_8_0 8.0_rk8
#define  size_of_PRECISION_real size_of_double_real_datatype
#define  MPI_REAL_PRECISION MPI_REAL8
#define  C_DATATYPE_KIND c_double
#endif

#ifdef SINGLE_PRECISION
#define  PRECISION single
#define  PRECISION_STR 'single'
#define  PRECISION_SUFFIX "_single"

#define  PRECISION_GEMV SGEMV
#define  PRECISION_TRMV STRMV
#define  PRECISION_GEMM SGEMM
#define  PRECISION_TRMM STRMM
#define  PRECISION_HERK SHERK
#define  PRECISION_SYRK SSYRK
#define  PRECISION_SYMV SSYMV
#define  PRECISION_SYMM SSYMM
#define  PRECISION_HEMV SHEMV
#define  PRECISION_HER2 SHER2
#define  PRECISION_SYR2 SSYR2
#define  PRECISION_SYR2K SSYR2K
#define  PRECISION_GEQRF SGEQRF
#define  PRECISION_STEDC SSTEDC
#define  PRECISION_STEQR SSTEQR
#define  PRECISION_LAMRG SLAMRG
#define  PRECISION_LAMCH SLAMCH
#define  PRECISION_LAPY2 SLAPY2
#define  PRECISION_LAED4 SLAED4
#define  PRECISION_LAED5 SLAED5
#define  cublas_PRECISION_GEMM cublas_SGEMM
#define  cublas_PRECISION_TRMM cublas_STRMM
#define  cublas_PRECISION_GEMV cublas_SGEMV
#define  CONST_0_0 0.0_rk4
#define  CONST_0_5 0.5_rk4
#define  CONST_1_0 1.0_rk4
#define  CONST_2_0 2.0_rk4
#define  CONST_8_0 8.0_rk4
#define  size_of_PRECISION_real size_of_single_real_datatype
#define  MPI_REAL_PRECISION MPI_REAL4
#define  C_DATATYPE_KIND c_float
#endif
#endif

#ifdef COMPLEXCASE
#undef  MATH_DATATYPE
#define  MATH_DATATYPE complex
#undef  PRECISION
#undef  PRECISION_STR
#undef  PRECISION_GEMV
#undef  PRECISION_TRMV
#undef  PRECISION_GEMM
#undef  PRECISION_TRMM
#undef  PRECISION_HERK
#undef  PRECISION_SYRK
#undef  PRECISION_SYMV
#undef  PRECISION_SYMM
#undef  PRECISION_HEMV
#undef  PRECISION_HER2
#undef  PRECISION_SYR2
#undef  PRECISION_SYR2K
#undef  PRECISION_GEQRF
#undef  PRECISION_STEDC
#undef  PRECISION_STEQR
#undef  PRECISION_LAMRG
#undef  PRECISION_LAMCH
#undef  PRECISION_LAPY2
#undef  PRECISION_LAED4
#undef  PRECISION_LAED5
#undef  cublas_PRECISION_GEMM
#undef  cublas_PRECISION_TRMM
#undef  cublas_PRECISION_GEMV
#undef  PRECISION_SUFFIX
#undef  MPI_COMPLEX_PRECISION
#undef  MPI_COMPLEX_EXPLICIT_PRECISION
#undef  MPI_REAL_PRECISION
#undef  KIND_PRECISION
#undef  PRECISION_CMPLX
#undef  PRECISION_IMAG
#undef  PRECISION_REAL
#undef  CONST_REAL_0_0
#undef  CONST_REAL_1_0
#undef  CONST_REAL_0_5
#undef  CONST_COMPLEX_PAIR_0_0
#undef  CONST_COMPLEX_PAIR_1_0
#undef  CONST_COMPLEX_PAIR_NEGATIVE_1_0
#undef  CONST_COMPLEX_PAIR_NEGATIVE_0_5
#undef  CONST_COMPLEX_0_0
#undef  CONST_COMPLEX_1_0
#undef  size_of_PRECISION_complex
#undef  C_DATATYPE_KIND
#ifdef DOUBLE_PRECISION
#define  PRECISION double
#define  PRECISION_STR 'double'
#define  PRECISION_SUFFIX "_double"
#define  PRECISION_GEMV ZGEMV
#define  PRECISION_TRMV ZTRMV
#define  PRECISION_GEMM ZGEMM
#define  PRECISION_TRMM ZTRMM
#define  PRECISION_HERK ZHERK
#define  PRECISION_SYRK ZSYRK
#define  PRECISION_SYMV ZSYMV
#define  PRECISION_SYMM ZSYMM
#define  PRECISION_HEMV ZHEMV
#define  PRECISION_HER2 ZHER2
#define  PRECISION_SYR2 ZSYR2
#define  PRECISION_SYR2K ZSYR2K
#define  PRECISION_GEQRF ZGEQRF
#define  PRECISION_STEDC ZSTEDC
#define  PRECISION_STEQR ZSTEQR
#define  PRECISION_LAMRG ZLAMRG
#define  PRECISION_LAMCH ZLAMCH
#define  PRECISION_LAPY2 ZLAPY2
#define  PRECISION_LAED4 ZLAED4
#define  PRECISION_LAED5 ZLAED5
#define  cublas_PRECISION_GEMM cublas_ZGEMM
#define  cublas_PRECISION_TRMM cublas_ZTRMM
#define  cublas_PRECISION_GEMV cublas_ZGEMV
#define  MPI_COMPLEX_PRECISION MPI_DOUBLE_COMPLEX
#define  MPI_COMPLEX_EXPLICIT_PRECISION MPI_COMPLEX16
#define  MPI_REAL_PRECISION MPI_REAL8
#define  KIND_PRECISION rk8
#define  PRECISION_CMPLX DCMPLX
#define  PRECISION_IMAG DIMAG
#define  PRECISION_REAL DREAL
#define  CONST_REAL_0_0 0.0_rk8
#define  CONST_REAL_1_0 1.0_rk8
#define  CONST_REAL_0_5 0.5_rk8
#define  CONST_COMPLEX_PAIR_0_0 (0.0_rk8,0.0_rk8)
#define  CONST_COMPLEX_PAIR_1_0 (1.0_rk8,0.0_rk8)
#define  CONST_COMPLEX_PAIR_NEGATIVE_1_0 (-1.0_rk8,0.0_rk8)
#define  CONST_COMPLEX_PAIR_NEGATIVE_0_5 (-0.5_rk8,0.0_rk8)
#define  CONST_COMPLEX_0_0 0.0_ck8
#define  CONST_COMPLEX_1_0 1.0_ck8
#define  size_of_PRECISION_complex size_of_double_complex_datatype
#define  C_DATATYPE_KIND c_double
#endif
#ifdef SINGLE_PRECISION
#define  PRECISION single
#define  PRECISION_STR 'single'
#define  PRECISION_SUFFIX "_single"
#define  PRECISION_GEMV CGEMV
#define  PRECISION_TRMV CTRMV
#define  PRECISION_GEMM CGEMM
#define  PRECISION_TRMM CTRMM
#define  PRECISION_HERK CHERK
#define  PRECISION_SYRK CSYRK
#define  PRECISION_SYMV CSYMV
#define  PRECISION_SYMM CSYMM
#define  PRECISION_HEMV CHEMV
#define  PRECISION_HER2 CHER2
#define  PRECISION_SYR2 CSYR2
#define  PRECISION_SYR2K CSYR2K
#define  PRECISION_GEQRF CGEQRF
#define  PRECISION_STEDC CSTEDC
#define  PRECISION_STEQR CSTEQR
#define  PRECISION_LAMRG CLAMRG
#define  PRECISION_LAMCH CLAMCH
#define  PRECISION_LAPY2 CLAPY2
#define  PRECISION_LAED4 CLAED4
#define  PRECISION_LAED5 CLAED5
#define  cublas_PRECISION_GEMM cublas_CGEMM
#define  cublas_PRECISION_TRMM cublas_CTRMM
#define  cublas_PRECISION_GEMV cublas_CGEMV
#define  MPI_COMPLEX_PRECISION MPI_COMPLEX
#define  MPI_COMPLEX_EXPLICIT_PRECISION MPI_COMPLEX8
#define  MPI_REAL_PRECISION MPI_REAL4
#define  KIND_PRECISION rk4
#define  PRECISION_CMPLX CMPLX
#define  PRECISION_IMAG AIMAG
#define  PRECISION_REAL REAL
#define  CONST_REAL_0_0 0.0_rk4
#define  CONST_REAL_1_0 1.0_rk4
#define  CONST_REAL_0_5 0.5_rk4
#define  CONST_COMPLEX_PAIR_0_0 (0.0_rk4,0.0_rk4)
#define  CONST_COMPLEX_PAIR_1_0 (1.0_rk4,0.0_rk4)
#define  CONST_COMPLEX_PAIR_NEGATIVE_1_0 (-1.0_rk4,0.0_rk4)
#define  CONST_COMPLEX_PAIR_NEGATIVE_0_5 (-0.5_rk4,0.0_rk4)
#define  CONST_COMPLEX_0_0 0.0_ck4
#define  CONST_COMPLEX_1_0 1.0_ck4
#define  size_of_PRECISION_complex size_of_single_complex_datatype
#define  C_DATATYPE_KIND c_float
#endif
#endif
