
#include "FLAME.h"

FLA_Error FLASH_LU_find_zero_on_diagonal_check( FLA_Obj A )
{
  FLA_Error e_val;

  e_val = FLA_Check_floating_object( A );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_nonconstant_object( A );
  FLA_Check_error_code( e_val );

  return FLA_SUCCESS;
}
