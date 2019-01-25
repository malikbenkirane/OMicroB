include ../../etc/Makefile.conf

MICROBIT_TARGETS := microbit/mbed-classic/libmbed-classic.a microbit/nrf51-sdk/libnrf51-sdk.a microbit/ble/libble.a microbit/ble-nrf51822/libble-nrf51822.a microbit/microbit-dal/libmicrobit-dal.a microbit/microbit/libmicrobit.a
TARGETS := $(LIB)/libcamlrun.a

HEADERS := $(wildcard */*.h)

OBJECTS :=              \
  .build/bindings.o     \
  .build/random.o       \
  .build/delay.o        \
  .build/trace.o        \
  .build/gc.o           \
  .build/format.o       \
  .build/sf-regs.o      \
  .build/shared.o       \
  .build/simul.o

byterun: $(TARGETS) $(MICROBIT_TARGETS)

$(LIB)/libcamlrun.a: $(OBJECTS)
	@rm -f $@
	cp $(OCAMLWHERE)/libcamlrun.a $@
	ar rs $@ $(OBJECTS)

.build/%.o: prims/%.c $(HEADERS)
	mkdir -p .build/
	$(OCAMLC) -c -ccopt -Wall -ccopt -D__OCAML__ $<
	mv $*.o .build/

.build/%.o: stdlib/%.c $(HEADERS)
	mkdir -p .build/
	$(OCAMLC) -c -ccopt -Wall -ccopt -D__OCAML__ $<
	mv $*.o .build/

.build/%.o: simul/%.c $(HEADERS)
	$(OCAMLC) -c -ccopt -Wall -ccopt -D__OCAML__ $<
	mv $*.o .build/

microbit/mbed-classic/libmbed-classic.a:
	$(MAKE) -C microbit
microbit/nrf51-sdk/libnrf51-sdk.a:
	$(MAKE) -C microbit
microbit/ble/libble.a:
	$(MAKE) -C microbit
microbit/ble-nrf51822/libble-nrf51822.a:
	$(MAKE) -C microbit
microbit/microbit-dal/libmicrobit-dal.a:
	$(MAKE) -C microbit
microbit/microbit/libmicrobit.a:
	$(MAKE) -C microbit

clean:
	@rm -Rf .build/ $(TARGETS)
	$(MAKE) -C microbit clean

.PHONY: byterun clean all
