all: test-combined.hex

test.o : test.cpp
	arm-none-eabi-g++ -c test.cpp -o test.o \
	-fno-exceptions -fno-unwind-tables -ffunction-sections -fdata-sections -Wall -Wextra -fno-rtti -fno-threadsafe-statics -mcpu=cortex-m0 -mthumb -D__thumb2__ -std=c++11 -fwrapv -Os -g -gdwarf-3 -DNDEBUG   -DTOOLCHAIN_GCC -DTOOLCHAIN_GCC_ARM -DMBED_OPERATORS -DNRF51 -DTARGET_NORDIC -DTARGET_M0 -D__MBED__=1 -DMCU_NORDIC_16K -DTARGET_NRF51_MICROBIT -DTARGET_MCU_NORDIC_16K -DTARGET_MCU_NRF51_16K_S110  -DTARGET_NRF_LFCLK_RC -DTARGET_MCU_NORDIC_16K -D__CORTEX_M0 -DARM_MATH_CM0 \
	-I ../mbed-classic/api -I ../mbed-classic/hal -I ../mbed-classic/cmsis \
	-I ../ble -I ../ble/ble -I ../ble/ble/services \
	-I ../microbit-dal/inc/core -I ../microbit-dal/inc/types -I ../microbit-dal/inc/drivers -I ../microbit-dal/inc/bluetooth -I ../microbit-dal/inc/platform \
	-I ../microbit/inc

test.elf: test.o
	arm-none-eabi-g++ -o test.elf test.o \
	-fno-exceptions -fno-unwind-tables \
	-Wl,--gc-sections -Wl,--sort-common -Wl,--sort-section=alignment -Wl,-wrap,main -mcpu=cortex-m0 \
  -T "../mbed-classic/cmsis/NRF51822.ld" \
	-Wl,-Map,test.map -Wl,--start-group \
	-L ../microbit -lmicrobit \
	-L ../microbit-dal -lmicrobit-dal \
	-L ../ble-nrf51822 -lble-nrf51822 -L ../ble -lble \
	-L ../nrf51-sdk -lnrf51-sdk \
	-L ../mbed-classic -lmbed-classic \
	-lnosys -lstdc++ -lsupc++ -lm -lc -lgcc -lstdc++ -lsupc++ -lm -lc -lgcc -Wl,--end-group --specs=nano.specs

test.hex: test.elf
	arm-none-eabi-objcopy -O ihex test.elf test.hex

test-combined.hex: test.hex
	srec_cat ../BLE_BOOTLOADER_RESERVED.hex \
	-intel ../mbed-classic/hal/Lib/s110_nrf51822_8_0_0/s110_nrf51822_8.0.0_softdevice.hex \
	-intel test.hex \
	-intel -o test-combined.hex -intel --line-length=44 \

clean:
	rm test.o test.elf test.hex test-combined.hex
