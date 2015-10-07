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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xf92a74b5, "lbs_resume" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xe300bf7, "schedule_work" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x92c90e22, "queue_work" },
	{ 0x59e08b0b, "lbs_stop_card" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0x35836f9c, "lbs_start_card" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x9660b5c3, "driver_unregister" },
	{ 0xef4d2e23, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7c4ac8c5, "lbs_suspend" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0xf64277de, "lbs_debug" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x289ccb58, "spi_sync" },
	{ 0xf057f46b, "lbs_remove_card" },
	{ 0x16d7896e, "lbs_process_rxed_packet" },
	{ 0x805f4e37, "lbs_host_to_card_done" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0xa4690bda, "lbs_add_card" },
	{ 0xb59a7a8e, "netdev_err" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0x211f9ee0, "lbs_get_firmware" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x40a5c4c, "consume_skb" },
	{ 0xdaf8bbc5, "spi_register_driver" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x7d5a2978, "lbs_notify_command_response" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,libertas";


MODULE_INFO(srcversion, "7C909440458D3D7F981D9D5");
