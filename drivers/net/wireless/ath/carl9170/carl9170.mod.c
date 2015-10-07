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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x8284e042, "usb_wait_anchor_empty_timeout" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xb2f0a763, "_raw_spin_unlock" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x543b6c16, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf41404d5, "mutex_destroy" },
	{ 0xacb1a3c, "__bitmap_shift_right" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x85fbf683, "device_release_driver" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x2ea394a7, "ieee80211_queue_work" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x1e3308b4, "led_classdev_register" },
	{ 0x9469482, "kfree_call_rcu" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb08ba1ba, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x19b8b42d, "usb_get_from_anchor" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x71afb92e, "ieee80211_beacon_get_tim" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x488c5d5, "ath_regd_init" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x515de376, "usb_scuttle_anchored_urbs" },
	{ 0x27aa9b0, "ieee80211_unregister_hw" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x1551dc51, "bitmap_find_free_region" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x6a417ef4, "cancel_delayed_work_sync" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x4b4bfb08, "debugfs_create_file" },
	{ 0xf4075d07, "__ieee80211_get_assoc_led_name" },
	{ 0xbdf4cb97, "debugfs_remove_recursive" },
	{ 0x7d11c268, "jiffies" },
	{ 0xcd136724, "mutex_trylock" },
	{ 0x4b176ed3, "skb_trim" },
	{ 0xedb98d7d, "ieee80211_stop_queues" },
	{ 0x835fe962, "usb_unanchor_urb" },
	{ 0x45d851da, "complete_all" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0xf95f8844, "ieee80211_stop_queue" },
	{ 0x7a8f479e, "input_event" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x78901a61, "wait_for_completion" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x75a26fbd, "dev_err" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x4cb8a763, "ieee80211_free_txskb" },
	{ 0x71c90087, "memcmp" },
	{ 0x6b02f236, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7064c298, "ath_is_mybeacon" },
	{ 0xd726306, "usb_control_msg" },
	{ 0xaafdb617, "ath_is_world_regd" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2fc4d357, "input_set_capability" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x58976a81, "ieee80211_rx" },
	{ 0x280f07c2, "skb_push" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0x4c1182cb, "bitmap_scnprintf" },
	{ 0xb1b597b4, "ieee80211_sta_block_awake" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xb9d2dfb6, "simple_open" },
	{ 0xa7fe44b0, "request_firmware_nowait" },
	{ 0x4c759827, "byte_rev_table" },
	{ 0xe8b7d2f3, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0xba3740da, "ath_reg_notifier_apply" },
	{ 0xc789422b, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6a45b943, "dev_kfree_skb_irq" },
	{ 0x9a9c0ce0, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x7e37cfb5, "usb_queue_reset_device" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0xfb4de67a, "ath_regd_get_band_ctl" },
	{ 0xa7c0bb01, "usb_get_dev" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x85f3e36d, "usb_kill_anchored_urbs" },
	{ 0x15c30e6, "_raw_spin_unlock_bh" },
	{ 0x93fbae2, "usb_reset_device" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x45637623, "input_register_device" },
	{ 0x1f8effc7, "usb_put_dev" },
	{ 0xf480c81b, "ieee80211_tx_status_irqsafe" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x8251bcc3, "bitmap_release_region" },
	{ 0x83682046, "ieee80211_get_tx_rates" },
	{ 0xa33e2383, "input_free_device" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0xb6e89340, "ieee80211_find_sta" },
	{ 0x624a6406, "hwrng_register" },
	{ 0xffd4db06, "__ieee80211_get_tx_led_name" },
	{ 0x1d4dc2e1, "usb_poison_anchored_urbs" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x166ec38b, "_raw_spin_lock" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0x41f27fea, "ieee80211_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3cc06959, "ieee80211_restart_hw" },
	{ 0x8a6ac0e8, "ieee80211_register_hw" },
	{ 0xa1537223, "led_classdev_unregister" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x6d27ef64, "__bitmap_empty" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0af301, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0x96850d60, "input_unregister_device" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0x4cbbd171, "__bitmap_weight" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0x53968437, "dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2b0fdd62, "usb_ifnum_to_if" },
	{ 0xd2b2afe, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7267db00, "hwrng_unregister" },
	{ 0x8cdcad2c, "usb_unpoison_anchored_urbs" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xd1b1e58, "wait_for_completion_timeout" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0xf709f70e, "release_firmware" },
	{ 0x98ac4b9e, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xbb6b0fa, "usb_anchor_urb" },
	{ 0x1f975e52, "device_set_wakeup_enable" },
	{ 0xa385d0f, "usb_alloc_urb" },
	{ 0x221ab914, "ieee80211_stop_tx_ba_session" },
	{ 0x8cd289be, "ieee80211_queue_stopped" },
	{ 0x42b6ad27, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,mac80211,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E8270FFE0DFF5548B9CF69");
