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
	{ 0xbe5ac51b, "ieee80211_rts_duration" },
	{ 0x98bb5a22, "eeprom_93cx6_read" },
	{ 0x70105e8c, "ieee80211_rx_irqsafe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x1e3308b4, "led_classdev_register" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0xe300bf7, "schedule_work" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x71afb92e, "ieee80211_beacon_get_tim" },
	{ 0x27aa9b0, "ieee80211_unregister_hw" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x6a417ef4, "cancel_delayed_work_sync" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x1c87bb8c, "wiphy_rfkill_start_polling" },
	{ 0xc4343f65, "skb_unlink" },
	{ 0x4b176ed3, "skb_trim" },
	{ 0x835fe962, "usb_unanchor_urb" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xf141bf26, "cancel_delayed_work" },
	{ 0x75a26fbd, "dev_err" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x27cb133b, "eeprom_93cx6_multiread" },
	{ 0x328a05f1, "strncpy" },
	{ 0xd726306, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x280f07c2, "skb_push" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x31c4edef, "wiphy_rfkill_stop_polling" },
	{ 0xe8b7d2f3, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0x6a45b943, "dev_kfree_skb_irq" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0xc0d76fb5, "__ieee80211_get_rx_led_name" },
	{ 0xa7c0bb01, "usb_get_dev" },
	{ 0x85f3e36d, "usb_kill_anchored_urbs" },
	{ 0x93fbae2, "usb_reset_device" },
	{ 0xb2270341, "wiphy_rfkill_set_hw_state" },
	{ 0x9da01691, "schedule_delayed_work" },
	{ 0x1f8effc7, "usb_put_dev" },
	{ 0xf480c81b, "ieee80211_tx_status_irqsafe" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x47b546a0, "flush_delayed_work" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0xffd4db06, "__ieee80211_get_tx_led_name" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0x50c0ed37, "ieee80211_generic_frame_duration" },
	{ 0x388af1cd, "__ieee80211_get_radio_led_name" },
	{ 0x4487a093, "ieee80211_ctstoself_duration" },
	{ 0x8a6ac0e8, "ieee80211_register_hw" },
	{ 0xa1537223, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0x53968437, "dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb81960ca, "snprintf" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0xbb6b0fa, "usb_anchor_urb" },
	{ 0xa385d0f, "usb_alloc_urb" },
	{ 0x8cd289be, "ieee80211_queue_stopped" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,compat,cfg80211";

MODULE_ALIAS("usb:v0B05p171Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8198d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0pCA02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D1pABE6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0073d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "95B8B17FA4A8BBDB2C829A1");
