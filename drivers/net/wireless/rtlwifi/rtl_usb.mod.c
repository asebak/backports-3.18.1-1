#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xae4b0ceb, "module_layout" },
	{ 0x4256a78d, "rtl_deinit_deferred_work" },
	{ 0xf41404d5, "mutex_destroy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x11e4a4b6, "rtl_deinit_core" },
	{ 0x19b8b42d, "usb_get_from_anchor" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x27aa9b0, "ieee80211_unregister_hw" },
	{ 0x835fe962, "usb_unanchor_urb" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0x78901a61, "wait_for_completion" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x4585b8da, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x53902b85, "rtl_init_core" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf7e7c0c3, "rtl_action_proc" },
	{ 0x450dfeeb, "rtl_dbgp_flag_init" },
	{ 0xd726306, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x58976a81, "ieee80211_rx" },
	{ 0xf8ff6add, "rtl_lps_change_work_callback" },
	{ 0x674243aa, "rtl_init_rx_config" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xf7957599, "usb_free_coherent" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0xa7c0bb01, "usb_get_dev" },
	{ 0x85f3e36d, "usb_kill_anchored_urbs" },
	{ 0x1f8effc7, "usb_put_dev" },
	{ 0xf480c81b, "ieee80211_tx_status_irqsafe" },
	{ 0x3968ba74, "rtl_ops" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0x8a6ac0e8, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5ca3c942, "rtl_ips_nic_on" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd2b2afe, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8057ed2, "usb_alloc_coherent" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0x101c7b7d, "rtl_beacon_statistic" },
	{ 0xbb6b0fa, "usb_anchor_urb" },
	{ 0xa385d0f, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,mac80211";


MODULE_INFO(srcversion, "5ED1D417F8C597D6932EB45");
