/**************************************************************************/
/*                                                                        */
/*                                 OMicroB                                */
/*                                                                        */
/*                          Callback functionalities                      */
/*                     Basile Pesin, Sorbonne University                  */
/*                                                                        */
/**************************************************************************/

#include "callback.h"

value caml_callback(value closure, value arg) {
  value res = caml_callback_exn(closure, arg);
  if (Is_exception_result(res)) caml_raise(Extract_exception(res));
  return res;
}

value caml_callback_exn(value closure, value arg1) {
  sp -= 5; sp[0] = arg1;
  sp[1] = Val_codeptr(pc); // return address
  sp[2] = Val_unit; sp[3] = Val_int(0);
  sp[4] = closure;

  // ACC 4
  acc = peek(4);

  // APPLY 1
  extra_args = 0;
  pc = Codeptr_val(Field(acc, 0));
  env = acc;
  return Val_unit;
}
