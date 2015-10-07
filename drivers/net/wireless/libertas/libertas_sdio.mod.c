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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaef5f3ad, "__pm_runtime_idle" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xf92a74b5, "lbs_resume" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x24afd194, "sdio_writesb" },
	{ 0x3a31235a, "sdio_enable_func" },
	{ 0x15fa2168, "sdio_claim_irq" },
	{ 0xe300bf7, "schedule_work" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x92c90e22, "queue_work" },
	{ 0x59e08b0b, "lbs_stop_card" },
	{ 0x64119029, "__pm_runtime_resume" },
	{ 0xf1a7d4b6, "netdev_alert" },
	{ 0xea3ecd69, "__lbs_cmd" },
	{ 0x7d11c268, "jiffies" },
	{ 0x712779d7, "sdio_get_host_pm_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0x35836f9c, "lbs_start_card" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x75a26fbd, "dev_err" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xef4d2e23, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x346302dc, "lbs_get_firmware_async" },
	{ 0x7297a784, "lbs_cmd_copyback" },
	{ 0x7c4ac8c5, "lbs_suspend" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0xf64277de, "lbs_debug" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7944871f, "sdio_readsb" },
	{ 0x20899e4d, "sdio_unregister_driver" },
	{ 0xf057f46b, "lbs_remove_card" },
	{ 0xf07dc573, "sdio_f0_writeb" },
	{ 0x2bcd81ca, "sdio_set_host_pm_flags" },
	{ 0x16d7896e, "lbs_process_rxed_packet" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0x9ba03bca, "sdio_release_irq" },
	{ 0x805f4e37, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0xb2212292, "sdio_align_size" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0xa4690bda, "lbs_add_card" },
	{ 0xa7c293d0, "sdio_f0_readb" },
	{ 0xe929f6d7, "mmc_add_host" },
	{ 0xb59a7a8e, "netdev_err" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0xfbabc4fc, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x38ee1586, "prepare_to_wait" },
	{ 0x73ec879a, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4dfd651a, "sdio_register_driver" },
	{ 0xf3f9375, "sdio_claim_host" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd76abf5e, "sdio_set_block_size" },
	{ 0x1ed64f2c, "sdio_disable_func" },
	{ 0xfe1c3f19, "sdio_release_host" },
	{ 0x7d5a2978, "lbs_notify_command_response" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "3CF2961E9B47A99EC67B998");
