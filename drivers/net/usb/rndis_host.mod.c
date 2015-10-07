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
	{ 0xf9a482f9, "msleep" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xcb6eb619, "usbnet_resume" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x42e2216b, "usbnet_probe" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xbb588764, "usbnet_cdc_unbind" },
	{ 0xeeb8444c, "usbnet_disconnect" },
	{ 0x595643d2, "skb_clone" },
	{ 0x520c490d, "usbnet_generic_cdc_bind" },
	{ 0xf75146df, "usbnet_stop" },
	{ 0x4b176ed3, "skb_trim" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x75a26fbd, "dev_err" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0xd726306, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x1dc6a557, "usbnet_start_xmit" },
	{ 0x3dd19a8c, "usbnet_suspend" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0x6ce64b60, "skb_copy_expand" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0x355aade3, "usbnet_tx_timeout" },
	{ 0x4ac5a1cb, "usbnet_skb_return" },
	{ 0xfa3abb27, "usb_driver_release_interface" },
	{ 0xee665e6a, "usbnet_open" },
	{ 0xfac1c9c8, "usb_interrupt_msg" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xc2dbf9e1, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0x53968437, "dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99bb8806, "memmove" },
	{ 0xba32e914, "eth_mac_addr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,usbnet,cdc_ether";

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");

MODULE_INFO(srcversion, "00AA1C081659B77CCD87752");
