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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x2ea394a7, "ieee80211_queue_work" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x1258d9d9, "regulator_disable" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x4398b859, "wl1251_free_hw" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x2d126e5f, "spi_setup" },
	{ 0xa7587646, "crc7" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0x912c69a4, "of_find_property" },
	{ 0x9660b5c3, "driver_unregister" },
	{ 0xf4fe49e1, "devm_gpio_request_one" },
	{ 0x289ccb58, "spi_sync" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x28436647, "devm_regulator_get" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x22f1f6d3, "wl1251_init_ieee80211" },
	{ 0x3757c9b, "of_get_named_gpio_flags" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xdaf8bbc5, "spi_register_driver" },
	{ 0x6b7cbb5c, "wl1251_alloc_hw" },
	{ 0xe85afa84, "devm_request_threaded_irq" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0x8a5c7a80, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,mac80211,wl1251";


MODULE_INFO(srcversion, "C48F683B20B7A201533EB1D");
