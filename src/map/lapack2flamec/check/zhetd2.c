#include "FLA_lapack2flame_return_defs.h"
#include "FLA_f2c.h" 

int zhetd2_check(char *uplo, int *n, dcomplex *a, int *lda, double *d__, double *e, dcomplex *tau, int *info)
{
    /* System generated locals */
    int a_dim1, a_offset, i__1;
    logical upper;

    /* Parameter adjustments */
    a_dim1 = *lda;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --d__;
    --e;
    --tau;
    /* Function Body */
    *info = 0;
    upper = lsame_(uplo, "U");
    if (! upper && ! lsame_(uplo, "L"))
    {
        *info = -1;
    }
    else if (*n < 0)
    {
        *info = -2;
    }
    else if (*lda < max(1,*n))
    {
        *info = -4;
    }
    if (*info != 0)
    {
        i__1 = -(*info);
        xerbla_("ZHETD2", &i__1);
        return LAPACK_FAILURE;
    }
    /* Quick return if possible */
    if (*n <= 0)
    {
        return LAPACK_QUICK_RETURN;
    }
    return LAPACK_SUCCESS;
}
