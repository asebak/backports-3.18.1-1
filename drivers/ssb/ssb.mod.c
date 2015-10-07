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
	{ 0x338cc888, "sdio_readb" },
	{ 0xa69a59cf, "driver_register" },
	{ 0xcd8499fb, "__bus_register" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x24afd194, "sdio_writesb" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x12b85494, "sdio_writel" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xf6e30515, "device_register" },
	{ 0x75a26fbd, "dev_err" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x9660b5c3, "driver_unregister" },
	{ 0xc43179a2, "sdio_readl" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0xa5674e5, "bus_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x7944871f, "sdio_readsb" },
	{ 0xbdc6eabd, "put_device" },
	{ 0xc2165d85, "__arm_iounmap" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xac717246, "get_device" },
	{ 0xf7e088b0, "sdio_writew" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5bcb149, "device_unregister" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x178b2039, "sdio_readw" },
	{ 0xf3f9375, "sdio_claim_host" },
	{ 0xec6d213b, "dev_set_name" },
	{ 0xac8f37b2, "outer_cache" },
	{ 0xfe1c3f19, "sdio_release_host" },
	{ 0xa7f92105, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat";


MODULE_INFO(srcversion, "B63ECDD9F8431DCF6699C6A");
