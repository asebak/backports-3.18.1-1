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
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x99b5ce2, "devm_kzalloc" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x2d126e5f, "spi_setup" },
	{ 0xa7587646, "crc7" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x75a26fbd, "dev_err" },
	{ 0x86bb7d80, "platform_device_alloc" },
	{ 0x9660b5c3, "driver_unregister" },
	{ 0xc927847b, "platform_device_add" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x37672256, "platform_device_unregister" },
	{ 0x289ccb58, "spi_sync" },
	{ 0xc99cc3b7, "platform_device_add_resources" },
	{ 0x6f1e44f0, "platform_device_add_data" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xdaf8bbc5, "spi_register_driver" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0x6133a123, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat";


MODULE_INFO(srcversion, "22F3502126265D0D1A4F8B4");
