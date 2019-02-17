OBJECTS :=	\
	ESP8266WiFi.o \
  ESP8266WiFiAP.o \
	ESP8266WiFiGeneric.o \
	ESP8266WiFiMulti.o \
	ESP8266WiFiScan.o \
	ESP8266WiFiSTA.o \
	WiFiClient.o \
	WiFiClientSecure.o \
	WiFiServer.o \
	WiFiUdp.o

libESP8266WiFi.a: $(OBJECTS)
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
		-c -o $@ $^

clean:
	rm -rf *.o *.a

.PHONY: clean
