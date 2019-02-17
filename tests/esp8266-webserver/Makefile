include ../../etc/Makefile.conf

server.bin: server.ml
	$(BIN)/omicrob -v -device=wemos-d1-mini $^ -o $@

flash: server.bin
	$(BIN)/omicrob -v -flash -device=wemos-d1-mini $^

clean:
	rm -rf *.cmi *.cmo *.byte *.c *.esp_o *.o *.elf *.d *.esp_elf *.bin
