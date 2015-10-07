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
	{ 0x8faa4598, "of_translate_address" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa69a59cf, "driver_register" },
	{ 0xcd8499fb, "__bus_register" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x34324f72, "platform_device_register_full" },
	{ 0x91715312, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xf6e30515, "device_register" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x9660b5c3, "driver_unregister" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x37672256, "platform_device_unregister" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0xa5674e5, "bus_unregister" },
	{ 0x58d1070a, "of_get_address" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdc6eabd, "put_device" },
	{ 0x16fdefd2, "of_get_next_child" },
	{ 0xc2165d85, "__arm_iounmap" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x5bcb149, "device_unregister" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb81960ca, "snprintf" },
	{ 0xec6d213b, "dev_set_name" },
	{ 0xac8f37b2, "outer_cache" },
	{ 0xa7f92105, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat";


MODULE_INFO(srcversion, "656885301CE2217FDF546BB");
