#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xae4b0ceb, "module_layout" },
	{ 0x3d081d6a, "sdio_writeb" },
	{ 0x95042df8, "rsi_91x_init" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x24afd194, "sdio_writesb" },
	{ 0x3a31235a, "sdio_enable_func" },
	{ 0x15fa2168, "sdio_claim_irq" },
	{ 0xef34bde5, "mmc_wait_for_cmd" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x7201b98a, "rsi_dbg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x711466ed, "rsi_mac80211_detach" },
	{ 0x9efd67cd, "rsi_read_pkt" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x7944871f, "sdio_readsb" },
	{ 0x20899e4d, "sdio_unregister_driver" },
	{ 0xf07dc573, "sdio_f0_writeb" },
	{ 0x9ba03bca, "sdio_release_irq" },
	{ 0xa7c293d0, "sdio_f0_readb" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x8062e3b, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4dfd651a, "sdio_register_driver" },
	{ 0xf3f9375, "sdio_claim_host" },
	{ 0x319c7738, "rsi_91x_deinit" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd76abf5e, "sdio_set_block_size" },
	{ 0xf709f70e, "release_firmware" },
	{ 0x1ed64f2c, "sdio_disable_func" },
	{ 0xfe1c3f19, "sdio_release_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rsi_91x,compat";

MODULE_ALIAS("sdio:c*v0303d0100*");
MODULE_ALIAS("sdio:c*v041Bd0301*");
MODULE_ALIAS("sdio:c*v041Bd0201*");
MODULE_ALIAS("sdio:c*v041Bd9330*");

MODULE_INFO(srcversion, "649463793131629F6A6D3DD");
