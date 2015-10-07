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
	{ 0x99b5ce2, "devm_kzalloc" },
	{ 0xe7a9a84, "remove_wait_queue" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x2d126e5f, "spi_setup" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xdc5f10ef, "cw1200_core_release" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xbaccf1fe, "cw1200_can_suspend" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x9660b5c3, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7f916caa, "spi_bus_type" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x289ccb58, "spi_sync" },
	{ 0x1000e51, "schedule" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0xfe990052, "gpio_free" },
	{ 0x3149f0a3, "add_wait_queue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xdaf8bbc5, "spi_register_driver" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0x64864aba, "cw1200_core_probe" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cw1200_core,compat";


MODULE_INFO(srcversion, "2EE926DBFEC58AA7B870AB5");
