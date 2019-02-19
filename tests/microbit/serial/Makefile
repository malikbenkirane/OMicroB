include ../../../etc/Makefile.conf

mbserial.combined_hex: mbserial.ml
	$(BIN)/omicrob -v -device=microbit $^ -o $@

clean:
	rm *.cmi *.cmo *.byte *.c *.arm_o *.elf *.arm_elf *.hex *.combined_hex
