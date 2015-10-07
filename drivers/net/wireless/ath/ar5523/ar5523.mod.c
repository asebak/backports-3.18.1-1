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
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xf141bf26, "cancel_delayed_work" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6a417ef4, "cancel_delayed_work_sync" },
	{ 0x27aa9b0, "ieee80211_unregister_hw" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0x8a6ac0e8, "ieee80211_register_hw" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0xf709f70e, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b05fe81, "usb_bulk_msg" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x8062e3b, "request_firmware" },
	{ 0x8057ed2, "usb_alloc_coherent" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x593a99b, "init_timer_key" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0xe8b7d2f3, "ieee80211_queue_delayed_work" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x73ec879a, "finish_wait" },
	{ 0x38ee1586, "prepare_to_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x99bb8806, "memmove" },
	{ 0x92c90e22, "queue_work" },
	{ 0x70105e8c, "ieee80211_rx_irqsafe" },
	{ 0xd91cc1b3, "ieee80211_get_hdrlen_from_skb" },
	{ 0x5dd8018b, "skb_put" },
	{ 0x6a45b943, "dev_kfree_skb_irq" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2ea394a7, "ieee80211_queue_work" },
	{ 0xedb98d7d, "ieee80211_stop_queues" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0xb6e89340, "ieee80211_find_sta" },
	{ 0xd2b2afe, "complete" },
	{ 0xd1b1e58, "wait_for_completion_timeout" },
	{ 0x9d669763, "memcpy" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0xf480c81b, "ieee80211_tx_status_irqsafe" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x4cb8a763, "ieee80211_free_txskb" },
	{ 0x8834396c, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x280f07c2, "skb_push" },
	{ 0xa385d0f, "usb_alloc_urb" },
	{ 0x6b02f236, "ieee80211_wake_queues" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0xc996d097, "del_timer" },
	{ 0x75a26fbd, "dev_err" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xb75e1218, "usb_kill_urb" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0xf7957599, "usb_free_coherent" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,mac80211,cfg80211";

MODULE_ALIAS("usb:v168Cp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v168Cp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0713d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0710d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp160Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp160Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p5F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p5F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0826d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0827d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0828d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0829d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p4251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F03d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8CF03A8A27B0456C4B3F686");
