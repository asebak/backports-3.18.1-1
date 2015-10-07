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
	{ 0x71ec0e80, "ath9k_hw_set_txq_props" },
	{ 0x4ba7eec6, "ath9k_hw_init" },
	{ 0xafa11f66, "ath9k_cmn_get_channel" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xe5080804, "ath9k_hw_deinit" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x618c3ec7, "ath9k_hw_cfg_output" },
	{ 0xb2f0a763, "_raw_spin_unlock" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x543b6c16, "debugfs_create_dir" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x85fbf683, "device_release_driver" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x87b15804, "ath9k_hw_set_gpio" },
	{ 0xb476ed32, "ath9k_cmn_init_crypto" },
	{ 0x2ea394a7, "ieee80211_queue_work" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x307a72d0, "ath9k_cmn_process_rate" },
	{ 0x1e3308b4, "led_classdev_register" },
	{ 0xd3dbfbc4, "_find_first_zero_bit_le" },
	{ 0xba889bc6, "ath9k_hw_btcoex_enable" },
	{ 0xeb0374b5, "ath9k_hw_wait" },
	{ 0x7e56dd74, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0x52859077, "ath9k_hw_stopdmarecv" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x8b743c27, "ath_key_delete" },
	{ 0x24944104, "ath9k_cmn_update_txpow" },
	{ 0xb08ba1ba, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe300bf7, "schedule_work" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x71afb92e, "ieee80211_beacon_get_tim" },
	{ 0x60a7dbc5, "ath9k_hw_gpio_get" },
	{ 0x488c5d5, "ath_regd_init" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb75e1218, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x27aa9b0, "ieee80211_unregister_hw" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x6a417ef4, "cancel_delayed_work_sync" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x3465652e, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xb69d70a5, "ath9k_hw_setrxfilter" },
	{ 0xe05cde11, "ath9k_hw_get_txq_props" },
	{ 0x54292172, "ath9k_hw_releasetxqueue" },
	{ 0x9b82bc9e, "ath9k_hw_reset_tsf" },
	{ 0x4b4bfb08, "debugfs_create_file" },
	{ 0x1c87bb8c, "wiphy_rfkill_start_polling" },
	{ 0x4a2d05d0, "ath9k_cmn_reload_chainmask" },
	{ 0x91715312, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x3a2bcda6, "ath9k_cmn_init_channels_rates" },
	{ 0x4b176ed3, "skb_trim" },
	{ 0xedb98d7d, "ieee80211_stop_queues" },
	{ 0x835fe962, "usb_unanchor_urb" },
	{ 0x45d851da, "complete_all" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0x4bb1bde0, "ieee80211_tx_status" },
	{ 0x8f54f1e3, "ath_printk" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xcfebfc9b, "ath9k_hw_setopmode" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x78901a61, "wait_for_completion" },
	{ 0x703d15b1, "ath9k_hw_disable" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x36824f49, "ath9k_hw_resettxqueue" },
	{ 0xde0e99e6, "ath9k_hw_gettsf64" },
	{ 0x5f754e5a, "memset" },
	{ 0xeeb37b7, "default_llseek" },
	{ 0x75a26fbd, "dev_err" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x97cf1900, "ath9k_hw_set_sta_beacon_timers" },
	{ 0x2b321cf2, "ath9k_hw_set_tsfadjust" },
	{ 0xe80f31dd, "ath9k_cmn_beacon_config_ap" },
	{ 0x6b02f236, "ieee80211_wake_queues" },
	{ 0x2d15177d, "ath9k_cmn_debug_stat_rx" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x17b6580e, "ath9k_hw_btcoex_disable" },
	{ 0xf4c3febf, "ath9k_hw_getrxfilter" },
	{ 0x2338dc53, "ath9k_hw_ani_monitor" },
	{ 0x7064c298, "ath_is_mybeacon" },
	{ 0x52d0e48f, "ath9k_cmn_beacon_config_adhoc" },
	{ 0xd726306, "usb_control_msg" },
	{ 0xb70796d, "ath9k_cmn_process_rssi" },
	{ 0x84b183ae, "strncmp" },
	{ 0xaafdb617, "ath_is_world_regd" },
	{ 0x8a6a9c55, "ath9k_cmn_debug_base_eeprom" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x58976a81, "ieee80211_rx" },
	{ 0x280f07c2, "skb_push" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x4c1182cb, "bitmap_scnprintf" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8834396c, "mod_timer" },
	{ 0x39b80fed, "ath9k_cmn_debug_recv" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xb9d2dfb6, "simple_open" },
	{ 0x31c4edef, "wiphy_rfkill_stop_polling" },
	{ 0xa7fe44b0, "request_firmware_nowait" },
	{ 0x95d7a4a8, "ath9k_hw_write_associd" },
	{ 0xe8b7d2f3, "ieee80211_queue_delayed_work" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0xba3740da, "ath_reg_notifier_apply" },
	{ 0xc789422b, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xce30e30e, "ath9k_hw_init_btcoex_hw" },
	{ 0x9a9c0ce0, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xcf986f12, "ath9k_cmn_debug_phy_err" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0x70fd2a39, "ath9k_hw_beaconq_setup" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0xda2348c2, "ath9k_hw_name" },
	{ 0x6bb9786d, "ath9k_hw_init_global_settings" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0xa7c0bb01, "usb_get_dev" },
	{ 0x85f3e36d, "usb_kill_anchored_urbs" },
	{ 0x94ba0b8c, "ath9k_hw_settsf64" },
	{ 0x15c30e6, "_raw_spin_unlock_bh" },
	{ 0xb2270341, "wiphy_rfkill_set_hw_state" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x5b05fe81, "usb_bulk_msg" },
	{ 0x1f8effc7, "usb_put_dev" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0xfb4c87ac, "ath9k_hw_beaconinit" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0xb6e89340, "ieee80211_find_sta" },
	{ 0x81f3dcb5, "ieee80211_get_buffered_bc" },
	{ 0xfac1c9c8, "usb_interrupt_msg" },
	{ 0xe82ac208, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xef609cc5, "ath9k_hw_setrxabort" },
	{ 0xaf0a6dde, "ath9k_cmn_beacon_config_sta" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x166ec38b, "_raw_spin_lock" },
	{ 0xb69e9bed, "ath_hw_setbssidmask" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xc104a48c, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x533dccc6, "ath9k_hw_phy_disable" },
	{ 0xd91cc1b3, "ieee80211_get_hdrlen_from_skb" },
	{ 0xa05f634f, "ath9k_hw_setpower" },
	{ 0xf98b5cc2, "__ieee80211_create_tpt_led_trigger" },
	{ 0x8a6ac0e8, "ieee80211_register_hw" },
	{ 0xa1537223, "led_classdev_unregister" },
	{ 0x163f36a4, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0af301, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0x9ce1ce77, "ath9k_hw_setmcastfilter" },
	{ 0xb96a25f3, "ieee80211_start_tx_ba_session" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0x3f02fdc4, "ath9k_hw_startpcureceive" },
	{ 0xd5506a7b, "ath9k_hw_setuptxqueue" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0x8062e3b, "request_firmware" },
	{ 0x6d17f2eb, "ath9k_hw_reset" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0x6c1eae05, "ath9k_cmn_rx_accept" },
	{ 0x4cbbd171, "__bitmap_weight" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2b0fdd62, "usb_ifnum_to_if" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd2b2afe, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x86da227a, "ath9k_hw_btcoex_init_3wire" },
	{ 0x3fe8f183, "ath_key_config" },
	{ 0x518c72ce, "ath9k_cmn_debug_modal_eeprom" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xd1b1e58, "wait_for_completion_timeout" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x94d37b79, "ath9k_hw_reset_calvalid" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0xf709f70e, "release_firmware" },
	{ 0x98ac4b9e, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xbb6b0fa, "usb_anchor_urb" },
	{ 0xa385d0f, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,ath9k_common,compat,mac80211,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3FB45F601FB2248F63DC8D7");
