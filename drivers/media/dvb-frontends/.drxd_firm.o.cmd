cmd_/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-frontends/drxd_firm.o := /home/keithconger/Projects/bbbandroid-bluez/prebuilts/gcc/linux-x86/arm/arm-gnueabihf-4.7/bin/arm-linux-gnueabihf-gcc -Wp,-MD,/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-frontends/.drxd_firm.o.d -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/ -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/uapi -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/include/ -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/include/uapi -include /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/backport/backport.h -Wno-unused-but-set-variable -DBACKPORTS_VERSION=\""v3.18.1-1-0-g5e9ec4c"\" -DBACKPORTED_KERNEL_VERSION=\""v3.18.1-0-g39ca484"\" -DBACKPORTED_KERNEL_NAME=\""Linux"\"   -I/home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/keithconger/Projects/bbbandroid-bluez/kernel/include/uapi -Iinclude/generated/uapi -include /home/keithconger/Projects/bbbandroid-bluez/kernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-omap2/include -Iarch/arm/plat-omap/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Wno-error=pointer-sign -fno-stack-protector -O2 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -mthumb -Wa,-mimplicit-it=always -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-core/ -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/tuners/ -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/usb/dvb-usb-v2  -DMODULE  -fno-optimize-sibling-calls -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(drxd_firm)"  -D"KBUILD_MODNAME=KBUILD_STR(drxd)" -c -o /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-frontends/.tmp_drxd_firm.o /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-frontends/drxd_firm.c

source_/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-frontends/drxd_firm.o := /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-frontends/drxd_firm.c

deps_/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-frontends/drxd_firm.o := \
    $(wildcard include/config//a.h) \
    $(wildcard include/config/fr/enable//m.h) \
    $(wildcard include/config/freqscan//m.h) \
    $(wildcard include/config/div/echo/enable//m.h) \
    $(wildcard include/config/slave//m.h) \
    $(wildcard include/config/div/blank/enable//m.h) \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/backport/backport.h \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/backport/autoconf.h \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/linux/version.h \
  include/generated/uapi/linux/version.h \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/backport/checks.h \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-frontends/drxd_firm.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  arch/arm/include/generated/asm/types.h \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/linux/compiler.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/uapi/asm/posix_types.h \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/include/uapi/asm-generic/posix_types.h \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-frontends/drxd_map_firm.h \

/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-frontends/drxd_firm.o: $(deps_/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-frontends/drxd_firm.o)

$(deps_/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/media/dvb-frontends/drxd_firm.o):
