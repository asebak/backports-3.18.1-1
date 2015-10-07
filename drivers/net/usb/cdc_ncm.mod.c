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
	{ 0x70540f32, "netdev_info" },
	{ 0x3b49eaa8, "ethtool_op_get_ts_info" },
	{ 0xb2f0a763, "_raw_spin_unlock" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x55679c3b, "usb_altnum_to_altsetting" },
	{ 0xcb6eb619, "usbnet_resume" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x42e2216b, "usbnet_probe" },
	{ 0xfa0fa24e, "usbnet_set_settings" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x8fdebe0, "usbnet_link_change" },
	{ 0x5ab13c17, "hrtimer_cancel" },
	{ 0xeeb8444c, "usbnet_disconnect" },
	{ 0xb08ba1ba, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb5e1307c, "usbnet_update_max_qlen" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x91715312, "sprintf" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xa2ed0fd7, "usbnet_nway_reset" },
	{ 0x75a26fbd, "dev_err" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0xab4d815b, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbd46083c, "usb_driver_claim_interface" },
	{ 0xf6d65835, "usbnet_get_drvinfo" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x1dc6a557, "usbnet_start_xmit" },
	{ 0x3dd19a8c, "usbnet_suspend" },
	{ 0x7e120380, "usbnet_get_link" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9659f858, "usbnet_get_settings" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x6084276b, "usbnet_read_cmd" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0x15c30e6, "_raw_spin_unlock_bh" },
	{ 0x591b1d09, "usbnet_get_ethernet_addr" },
	{ 0x4ac5a1cb, "usbnet_skb_return" },
	{ 0xdcea534e, "hrtimer_start" },
	{ 0xfa3abb27, "usb_driver_release_interface" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x68a97b3b, "usbnet_get_msglevel" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x166ec38b, "_raw_spin_lock" },
	{ 0x5a00325a, "usbnet_unlink_rx_urbs" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x1927f29a, "hrtimer_init" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0x53968437, "dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2b0fdd62, "usb_ifnum_to_if" },
	{ 0x3bac3ccf, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5dd8018b, "skb_put" },
	{ 0x390914fa, "usbnet_manage_power" },
	{ 0xb22ff455, "usbnet_write_cmd" },
	{ 0x7247afe4, "usbnet_set_msglevel" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,usbnet";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "E7533ED60345CB5EFFEB9DD");
