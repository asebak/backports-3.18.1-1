cmd_/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/ucode_loader.o := /home/keithconger/Projects/bbbandroid-bluez/prebuilts/gcc/linux-x86/arm/arm-gnueabihf-4.7/bin/arm-linux-gnueabihf-gcc -Wp,-MD,/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/.ucode_loader.o.d -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/ -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/uapi -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/include/ -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/include/uapi -include /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/backport/backport.h -Wno-unused-but-set-variable -DBACKPORTS_VERSION=\""v3.18.1-1-0-g5e9ec4c"\" -DBACKPORTED_KERNEL_VERSION=\""v3.18.1-0-g39ca484"\" -DBACKPORTED_KERNEL_NAME=\""Linux"\"   -I/home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/keithconger/Projects/bbbandroid-bluez/kernel/include/uapi -Iinclude/generated/uapi -include /home/keithconger/Projects/bbbandroid-bluez/kernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-omap2/include -Iarch/arm/plat-omap/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Wno-error=pointer-sign -fno-stack-protector -O2 -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -mthumb -Wa,-mimplicit-it=always -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO -DDEBUG -D__CHECK_ENDIAN__ -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/phy -I/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/include  -DMODULE  -fno-optimize-sibling-calls -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(ucode_loader)"  -D"KBUILD_MODNAME=KBUILD_STR(brcmsmac)" -c -o /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/.tmp_ucode_loader.o /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/ucode_loader.c

source_/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/ucode_loader.o := /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/ucode_loader.c

deps_/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/ucode_loader.o := \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/backport/backport.h \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/backport/autoconf.h \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/linux/version.h \
  include/generated/uapi/linux/version.h \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/backport-include/backport/checks.h \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/include/defs.h \
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
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/types.h \
    $(wildcard include/config/bcm47xx.h) \
  include/linux/io.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/has/ioport.h) \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/asm/io.h \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
    $(wildcard include/config/need/mach/io/h.h) \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/pcmcia/soc/common.h) \
    $(wildcard include/config/isa.h) \
    $(wildcard include/config/pccard.h) \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/asm/swab.h \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/uapi/asm/swab.h \
  include/linux/byteorder/generic.h \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/asm/memory.h \
    $(wildcard include/config/need/mach/memory/h.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/arm/patch/phys/virt.h) \
    $(wildcard include/config/phys/offset.h) \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/include/uapi/linux/const.h \
  include/linux/sizes.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  include/asm-generic/pci_iomap.h \
    $(wildcard include/config/no/generic/pci/ioport/map.h) \
    $(wildcard include/config/generic/pci/iomap.h) \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/smp.h) \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/asm/page.h \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/arm/lpae.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/asm/glue.h \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/asm/pgtable-2level-types.h \
  include/asm-generic/getorder.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/bitops.h \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/asm/bitops.h \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/asm/irqflags.h \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/asm/hwcap.h \
  /home/keithconger/Projects/bbbandroid-bluez/kernel/arch/arm/include/uapi/asm/hwcap.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/asm-generic/bitops/le.h \
  include/asm-generic/bitops/ext2-atomic-setbit.h \
  /home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/ucode_loader.h \

/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/ucode_loader.o: $(deps_/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/ucode_loader.o)

$(deps_/home/keithconger/Projects/bbbandroid-bluez/backports-3.18.1-1/drivers/net/wireless/brcm80211/brcmsmac/ucode_loader.o):
