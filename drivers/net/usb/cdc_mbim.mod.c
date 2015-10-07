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
	{ 0xeeb8444c, "usbnet_disconnect" },
	{ 0x42e2216b, "usbnet_probe" },
	{ 0x355aade3, "usbnet_tx_timeout" },
	{ 0x5e0bbc12, "usbnet_change_mtu" },
	{ 0xc2dbf9e1, "eth_validate_addr" },
	{ 0xba32e914, "eth_mac_addr" },
	{ 0x1dc6a557, "usbnet_start_xmit" },
	{ 0xf75146df, "usbnet_stop" },
	{ 0xee665e6a, "usbnet_open" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xba2b67d7, "usb_match_id" },
	{ 0xab4d815b, "usb_set_interface" },
	{ 0xb79560cc, "usb_cdc_wdm_register" },
	{ 0xade0d135, "cdc_ncm_bind_common" },
	{ 0x3532c4bf, "cdc_ncm_select_altsetting" },
	{ 0x4b7fde60, "usb_autopm_put_interface" },
	{ 0x3e7b4ae3, "usb_autopm_get_interface" },
	{ 0x3dd19a8c, "usbnet_suspend" },
	{ 0xcb6eb619, "usbnet_resume" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0x9330f2f1, "cdc_ncm_unbind" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x8cbe850b, "pskb_expand_head" },
	{ 0x4ac5a1cb, "usbnet_skb_return" },
	{ 0x99bb8806, "memmove" },
	{ 0x280f07c2, "skb_push" },
	{ 0x9d669763, "memcpy" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0xb1cc6e09, "cdc_ncm_rx_verify_ndp16" },
	{ 0xf72bc576, "cdc_ncm_rx_verify_nth16" },
	{ 0xb59a7a8e, "netdev_err" },
	{ 0x15c30e6, "_raw_spin_unlock_bh" },
	{ 0xd910791, "cdc_ncm_fill_tx_frame" },
	{ 0xb08ba1ba, "_raw_spin_lock_bh" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,compat,cdc-wdm,cdc_ncm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "B9E1C44A5B5CC81168FE73E");
