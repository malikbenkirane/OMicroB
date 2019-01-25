CMAKE_OPTS = -DCMAKE_TOOLCHAIN_FILE:PATH="toolchain.cmake"

all: mbed-classic/libmbed-classic.a nrf51-sdk/libnrf51-sdk.a ble/libble.a ble-nrf51822/libble-nrf51822.a microbit-dal/libmicrobit-dal.a microbit/libmicrobit.a

mbed-classic/libmbed-classic.a:
	cmake -S mbed-classic -B mbed-classic ${CMAKE_OPTS}
	make -C mbed-classic

nrf51-sdk/libnrf51-sdk.a:
	cmake -S nrf51-sdk -B nrf51-sdk ${CMAKE_OPTS}
	make -C nrf51-sdk

ble/libble.a:
	cmake -S ble -B ble ${CMAKE_OPTS}
	make -C ble

ble-nrf51822/libble-nrf51822.a:
	cmake -S ble-nrf51822 -B ble-nrf51822 ${CMAKE_OPTS}
	make -C ble-nrf51822

microbit-dal/libmicrobit-dal.a:
	cmake -S microbit-dal -B microbit-dal ${CMAKE_OPTS}
	make -C microbit-dal

microbit/libmicrobit.a:
	cmake -S microbit -B microbit ${CMAKE_OPTS}
	make -C microbit

clean:
	make -C mbed-classic clean
	make -C nrf51-sdk clean
	make -C ble clean
	make -C ble-nrf51822 clean
	make -C microbit-dal clean
	make -C microbit clean
