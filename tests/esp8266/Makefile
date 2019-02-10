include ../../etc/Makefile.conf

esp8266.bin: esp8266.ml
	$(BIN)/omicrob -v -device=wemos-d1-mini $^ -o $@

flash: esp8266.bin
	$(BIN)/omicrob -v -flash -device=wemos-d1-mini $^

clean:
	rm -rf *.cmi *.cmo *.byte *.c *.esp_o *.o *.elf *.d *.esp_elf *.bin
