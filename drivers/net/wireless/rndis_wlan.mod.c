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
	{ 0x4d405db8, "param_ops_string" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xcb6eb619, "usbnet_resume" },
	{ 0x3dd19a8c, "usbnet_suspend" },
	{ 0xeeb8444c, "usbnet_disconnect" },
	{ 0x42e2216b, "usbnet_probe" },
	{ 0xb4894328, "rndis_tx_fixup" },
	{ 0x6342648a, "rndis_rx_fixup" },
	{ 0xada58b66, "rndis_status" },
	{ 0x355aade3, "usbnet_tx_timeout" },
	{ 0xc2dbf9e1, "eth_validate_addr" },
	{ 0xba32e914, "eth_mac_addr" },
	{ 0x1dc6a557, "usbnet_start_xmit" },
	{ 0xf75146df, "usbnet_stop" },
	{ 0xee665e6a, "usbnet_open" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x91715312, "sprintf" },
	{ 0x97255bdf, "strlen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x3db0cf7b, "cfg80211_roamed" },
	{ 0xc3cb1b33, "cfg80211_connect_result" },
	{ 0xaddb4a7e, "cfg80211_ibss_joined" },
	{ 0x8a2ff237, "cfg80211_disconnected" },
	{ 0xc3e855ce, "netif_carrier_on" },
	{ 0x1c034a5a, "usbnet_resume_rx" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb59a7a8e, "netdev_err" },
	{ 0xd6e9e3f5, "usbnet_purge_paused_rxq" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xa1425906, "ieee80211_channel_to_frequency" },
	{ 0xb859f38b, "krealloc" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x838567b9, "netif_carrier_off" },
	{ 0xb5cb27ce, "wiphy_register" },
	{ 0x3e2e2496, "generic_rndis_bind" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0xa1c1df08, "wiphy_new" },
	{ 0x67f25a9f, "wiphy_free" },
	{ 0xadbb90db, "wiphy_unregister" },
	{ 0x244c278c, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x6a417ef4, "cancel_delayed_work_sync" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x2a39fe18, "cfg80211_cqm_rssi_notify" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x27dfde63, "queue_delayed_work" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x48ce980c, "cfg80211_scan_done" },
	{ 0x465c61e0, "cfg80211_put_bss" },
	{ 0x96d81f02, "cfg80211_inform_bss_width" },
	{ 0x29767b9e, "__ieee80211_get_channel" },
	{ 0x15c30e6, "_raw_spin_unlock_bh" },
	{ 0xb08ba1ba, "_raw_spin_lock_bh" },
	{ 0x5f754e5a, "memset" },
	{ 0x5a9c3e64, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0xa96d9c28, "rndis_command" },
	{ 0x9d669763, "memcpy" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x653f14c1, "cfg80211_michael_mic_failure" },
	{ 0x78fa5007, "cfg80211_pmksa_candidate_notify" },
	{ 0x7cf2519, "usbnet_pause_rx" },
	{ 0x70540f32, "netdev_info" },
	{ 0x92c90e22, "queue_work" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe2d5255a, "strcmp" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,rndis_host,compat,cfg80211";

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "CE55DA16A1FCBDB1A87B900");
