wrapper.o: wrapper.c
	xtensa-lx106-elf-g++ -D__ets__ -DICACHE_FLASH -U__STRICT_ANSI__ -I. -Icores -Isdk/include -Isdk/lwip2 -Isdk/include/libc -c -w -Os -g -mlongcalls -mtext-section-literals -fno-rtti -falign-functions=4 -std=c++11 -ffunction-sections -fdata-sections -fno-exceptions -DF_CPU=80000000L -DLWIP_OPEN_SRC -DTCP_MSS=536 -DLWIP_FEATURES=1 -DLWIP_IPV6=0 -DARDUINO=10807 -DESP8266_WEMOS_D1MINI -DFLASHMODE_DIO -DESP8266 $< -o $@

clean:
	rm wrapper.o

.PHONY: clean
