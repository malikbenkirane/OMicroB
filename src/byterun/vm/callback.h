/**************************************************************************/
/*                                                                        */
/*                                 OMicroB                                */
/*                                                                        */
/*                          Callback functionalities                      */
/*                     Basile Pesin, Sorbonne University                  */
/*                                                                        */
/**************************************************************************/

#ifndef CAML_CALLBACK_H
#define CAML_CALLBACK_H

// A tester
#define Is_exception_result(v) (((v) & 3) == 2)
#define Extract_exception(v) ((v) & ~3)

value caml_callback(value closure, value arg);
value caml_callback_exn(value closure, value arg);

#endif
