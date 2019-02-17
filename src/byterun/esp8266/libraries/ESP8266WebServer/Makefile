OBJECTS :=	\
	ESP8266WebServer.o \
	Parsing.o

libESP8266WebServer.a: $(OBJECTS)
	ar ruv $@ $(OBJECTS)
	ranlib $@

%.o : %.cpp
	xtensa-lx106-elf-g++ -std=c++11 \
		-DLWIP_OPEN_SRC -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ -DESP8266 \
		-Os -g -mlongcalls -mtext-section-literals -fno-exceptions -fno-rtti -falign-functions=4 -ffunction-sections -fdata-sections \
		-I . \
		-I ../.. \
		-I ../../cores \
		-I ../../sdk/include \
		-I ../../sdk/include/libc \
		-I ../ESP8266WiFi \
		-c -o $@ $^

clean:
	rm -rf *.o *.a

.PHONY: clean
