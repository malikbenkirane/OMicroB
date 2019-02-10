include ../../etc/Makefile.conf

esp.bin: esp.ml
	$(BIN)/omicrob -v -device=wemos-d1-mini $^ -o $@

flash: esp.bin
	$(BIN)/omicrob -v -flash -device=wemos-d1-mini $^

clean:
	rm -rf *.cmi *.cmo *.byte *.c *.esp_o *.o *.elf *.d *.esp_elf *.bin
