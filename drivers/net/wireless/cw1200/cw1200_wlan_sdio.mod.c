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
	{ 0xf9a482f9, "msleep" },
	{ 0xf060088, "cw1200_irq_handler" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x3a31235a, "sdio_enable_func" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x15fa2168, "sdio_claim_irq" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xdc5f10ef, "cw1200_core_release" },
	{ 0xbaccf1fe, "cw1200_can_suspend" },
	{ 0x27e1a049, "printk" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x20899e4d, "sdio_unregister_driver" },
	{ 0xf07dc573, "sdio_f0_writeb" },
	{ 0x2bcd81ca, "sdio_set_host_pm_flags" },
	{ 0x9ba03bca, "sdio_release_irq" },
	{ 0xb2212292, "sdio_align_size" },
	{ 0xa7c293d0, "sdio_f0_readb" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xb6c4b943, "sdio_memcpy_toio" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4dfd651a, "sdio_register_driver" },
	{ 0x84307324, "sdio_memcpy_fromio" },
	{ 0xf3f9375, "sdio_claim_host" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0x64864aba, "cw1200_core_probe" },
	{ 0x1ed64f2c, "sdio_disable_func" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xfe1c3f19, "sdio_release_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cw1200_core,compat";


MODULE_INFO(srcversion, "8AC19673474E731955122D5");
