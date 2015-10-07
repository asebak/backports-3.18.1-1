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
	{ 0x6b5db0a8, "ath6kl_core_destroy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x459da14, "ath6kl_core_cleanup" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x3ad9e427, "ath6kl_dbg" },
	{ 0x3ad2e9f2, "ath6kl_core_create" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe300bf7, "schedule_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x835fe962, "usb_unanchor_urb" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0x4c6ddcb4, "ath6kl_err" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x27cf1694, "ath6kl_warn" },
	{ 0xd726306, "usb_control_msg" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0x3b1ecf00, "ath6kl_stop_txrx" },
	{ 0xa7c0bb01, "usb_get_dev" },
	{ 0x85f3e36d, "usb_kill_anchored_urbs" },
	{ 0xb18af2f0, "ath6kl_core_init" },
	{ 0x1f8effc7, "usb_put_dev" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e52960b, "ath6kl_core_rx_complete" },
	{ 0x9d669763, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x34ecba87, "ath6kl_core_tx_complete" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x40a5c4c, "consume_skb" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0xbb6b0fa, "usb_anchor_urb" },
	{ 0xa385d0f, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath6kl_core,compat";

MODULE_ALIAS("usb:v0CF3p9375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p9374d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A5FC60D9DBA2A17715E6227");
