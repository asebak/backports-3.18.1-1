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
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x848c9012, "rt2x00usb_resume" },
	{ 0x2eda62e8, "rt2x00usb_suspend" },
	{ 0xb3a6321f, "rt2x00usb_disconnect" },
	{ 0xe124b823, "rt2x00mac_tx_frames_pending" },
	{ 0x5daf32ab, "rt2x00mac_get_ringparam" },
	{ 0xc87415b, "rt2x00mac_get_antenna" },
	{ 0xba70ec81, "rt2x00mac_set_antenna" },
	{ 0xa228825b, "rt2x00mac_flush" },
	{ 0x8ca6dcb9, "rt2x00mac_rfkill_poll" },
	{ 0xc316a1ec, "rt2x00mac_conf_tx" },
	{ 0x6bfed568, "rt2x00mac_get_stats" },
	{ 0xb0beaa55, "rt2x00mac_sw_scan_complete" },
	{ 0x7660035c, "rt2x00mac_sw_scan_start" },
	{ 0xb5ff7bd6, "rt2x00mac_set_key" },
	{ 0x2b166304, "rt2x00mac_set_tim" },
	{ 0x5b0bdaa7, "rt2x00mac_configure_filter" },
	{ 0x4321e752, "rt2x00mac_bss_info_changed" },
	{ 0x37fdbb5d, "rt2x00mac_config" },
	{ 0x96d88a6f, "rt2x00mac_remove_interface" },
	{ 0xc1adbadc, "rt2x00mac_add_interface" },
	{ 0xd5dc73fe, "rt2x00mac_stop" },
	{ 0x82959fbd, "rt2x00mac_start" },
	{ 0x119bae8, "rt2x00mac_tx" },
	{ 0x5f0eb023, "rt2x00usb_flush_queue" },
	{ 0x4fb62949, "rt2x00usb_kick_queue" },
	{ 0xc06da507, "rt2x00usb_watchdog" },
	{ 0x97d398fa, "rt2x00usb_clear_entry" },
	{ 0x733d3b32, "rt2x00usb_uninitialize" },
	{ 0xa7b489be, "rt2x00usb_initialize" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb574cf4, "rt2x00usb_vendor_request" },
	{ 0xab5973c3, "rt2x00usb_disable_radio" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0x75a26fbd, "dev_err" },
	{ 0x6c486ea2, "rt2x00usb_vendor_req_buff_lock" },
	{ 0x40a5c4c, "consume_skb" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0x70f98cff, "rt2x00debug_dump_frame" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x280f07c2, "skb_push" },
	{ 0x4b176ed3, "skb_trim" },
	{ 0x9d669763, "memcpy" },
	{ 0x957dbd8, "rt2x00usb_vendor_request_buff" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x96bf71a2, "rt2x00usb_probe" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib,compat";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7D5E8940BB2474136A75AD8");
