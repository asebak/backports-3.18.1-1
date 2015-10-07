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
	{ 0xcb6eb619, "usbnet_resume" },
	{ 0x3dd19a8c, "usbnet_suspend" },
	{ 0xeeb8444c, "usbnet_disconnect" },
	{ 0xa2ed0fd7, "usbnet_nway_reset" },
	{ 0x7247afe4, "usbnet_set_msglevel" },
	{ 0x68a97b3b, "usbnet_get_msglevel" },
	{ 0xfa0fa24e, "usbnet_set_settings" },
	{ 0x9659f858, "usbnet_get_settings" },
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
	{ 0x9eae7afb, "usbnet_status_stop" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x8fdebe0, "usbnet_link_change" },
	{ 0xd726306, "usb_control_msg" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5a87e98a, "usbnet_status_start" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0x42e2216b, "usbnet_probe" },
	{ 0x7d11c268, "jiffies" },
	{ 0xbe2c0274, "add_timer" },
	{ 0xb22ff455, "usbnet_write_cmd" },
	{ 0xe300bf7, "schedule_work" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0x75a26fbd, "dev_err" },
	{ 0x6084276b, "usbnet_read_cmd" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x838567b9, "netif_carrier_off" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xadc974ad, "usbnet_get_endpoints" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5e0bbc12, "usbnet_change_mtu" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf6d65835, "usbnet_get_drvinfo" },
	{ 0x595643d2, "skb_clone" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x4ac5a1cb, "usbnet_skb_return" },
	{ 0x4b176ed3, "skb_trim" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0xb59a7a8e, "netdev_err" },
	{ 0x280f07c2, "skb_push" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,compat";

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "ACE5546FACD96628A963DC7");
