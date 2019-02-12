include ../../etc/Makefile.conf

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
  .build/simul.o		\
  esp8266/wrapper.o

byterun: $(TARGETS)

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

esp8266/wrapper.o: esp8266/wrapper.c
	$(MAKE) -C esp8266

clean:
	@rm -Rf .build/ $(TARGETS)
	$(MAKE) -C esp8266 clean

.PHONY: byterun clean
