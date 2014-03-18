
#include "FLAME.h"

FLA_Error FLA_Random_herm_matrix( FLA_Uplo uplo, FLA_Obj A )
{
  if ( FLA_Check_error_level() >= FLA_MIN_ERROR_CHECKING )
    FLA_Random_herm_matrix_check( uplo, A );

  FLA_Random_tri_matrix( uplo, FLA_NONUNIT_DIAG, A );

  FLA_Hermitianize( uplo, A );

  return FLA_SUCCESS;
}
