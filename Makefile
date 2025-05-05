obj-m := lava-driver.o
KDIR=/home/ncong/linux/linux
MDIR=/home/ncong/linux/device_model
COMPILER=/home/ncong/linux/toolchain/bin/aarch64-none-linux-gnu-
all:
	make -j$(nproc) -C ${KDIR} M=${MDIR} ARCH=arm64 CROSS_COMPILE=${COMPILER}

install:
	cp *.ko ../rootfs
	../make_rootfs.sh


clean:
	rm *.cmd *.o *.ko *.order *.symvers
