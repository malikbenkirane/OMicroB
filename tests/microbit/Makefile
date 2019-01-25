include ../../etc/Makefile.conf

microbit.combined_hex: microbit.ml
	$(BIN)/omicrob -v -device=microbit $^ -o microbit.combined_hex

clean:
	rm *.cmi *.cmo *.byte *.c *.arm_o *.elf *.arm_elf *.hex *.combined_hex
