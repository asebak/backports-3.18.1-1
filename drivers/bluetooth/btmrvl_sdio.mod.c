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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x20899e4d, "sdio_unregister_driver" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4dfd651a, "sdio_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xf709f70e, "release_firmware" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x8062e3b, "request_firmware" },
	{ 0xd76abf5e, "sdio_set_block_size" },
	{ 0x15fa2168, "sdio_claim_irq" },
	{ 0x9d2e8248, "btmrvl_register_hdev" },
	{ 0x8a617e4c, "btmrvl_add_card" },
	{ 0x3a31235a, "sdio_enable_func" },
	{ 0x99b5ce2, "devm_kzalloc" },
	{ 0xd7442057, "bt_info" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8ed6c2b6, "btmrvl_send_module_cfg_cmd" },
	{ 0xd7b1b1d, "btmrvl_remove_card" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0x6f925114, "btmrvl_check_evtpkt" },
	{ 0x916d03ce, "hci_recv_frame" },
	{ 0x8538c869, "btmrvl_process_event" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x24afd194, "sdio_writesb" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x338cc888, "sdio_readb" },
	{ 0x702793e0, "btmrvl_interrupt" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0x7944871f, "sdio_readsb" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x1ed64f2c, "sdio_disable_func" },
	{ 0x9ba03bca, "sdio_release_irq" },
	{ 0xfe1c3f19, "sdio_release_host" },
	{ 0x3d081d6a, "sdio_writeb" },
	{ 0xf3f9375, "sdio_claim_host" },
	{ 0x2bcd81ca, "sdio_set_host_pm_flags" },
	{ 0xa6a223d5, "btmrvl_enable_hs" },
	{ 0x4585b8da, "skb_queue_purge" },
	{ 0x6603fa13, "hci_suspend_dev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x47022514, "bt_err" },
	{ 0x803ecde1, "hci_resume_dev" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0x712779d7, "sdio_get_host_pm_caps" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");

MODULE_INFO(srcversion, "31768E7DAAD787EFCDCF9CF");
