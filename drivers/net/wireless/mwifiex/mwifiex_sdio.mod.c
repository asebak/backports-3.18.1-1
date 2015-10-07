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
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x4c5b2aba, "mwifiex_cancel_hs" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x24afd194, "sdio_writesb" },
	{ 0x3a31235a, "sdio_enable_func" },
	{ 0x15fa2168, "sdio_claim_irq" },
	{ 0xe300bf7, "schedule_work" },
	{ 0x695b2cfd, "down_interruptible" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x1a8ade7c, "mwifiex_disable_auto_ds" },
	{ 0x82b30aa5, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0xfb9ba73f, "mwifiex_main_process" },
	{ 0x712779d7, "sdio_get_host_pm_caps" },
	{ 0x4b176ed3, "skb_trim" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0x5d2f656f, "mwifiex_add_card" },
	{ 0x75a26fbd, "dev_err" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0x87c0483, "kobject_uevent_env" },
	{ 0x7944871f, "sdio_readsb" },
	{ 0x20899e4d, "sdio_unregister_driver" },
	{ 0x2bcd81ca, "sdio_set_host_pm_flags" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9ba03bca, "sdio_release_irq" },
	{ 0xe929f6d7, "mmc_add_host" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xfbabc4fc, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc9f5df35, "up" },
	{ 0x90cd1a78, "mwifiex_handle_rx_packet" },
	{ 0x53968437, "dev_warn" },
	{ 0xa5944411, "mwifiex_deauthenticate_all" },
	{ 0x1d6506f7, "mwifiex_remove_card" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1150e75a, "mwifiex_enable_hs" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x4dfd651a, "sdio_register_driver" },
	{ 0xf3f9375, "sdio_claim_host" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xa5a4df79, "mwifiex_init_shutdown_fw" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd76abf5e, "sdio_set_block_size" },
	{ 0x1ed64f2c, "sdio_disable_func" },
	{ 0xfe1c3f19, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");

MODULE_INFO(srcversion, "82D4FC2977727EB24AD909D");
