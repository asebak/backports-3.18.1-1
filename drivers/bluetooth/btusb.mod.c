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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x4b7fde60, "usb_autopm_put_interface" },
	{ 0x3e7b4ae3, "usb_autopm_get_interface" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf709f70e, "release_firmware" },
	{ 0x4730eadf, "__hci_cmd_sync_ev" },
	{ 0x8062e3b, "request_firmware" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd7442057, "bt_info" },
	{ 0x71c90087, "memcmp" },
	{ 0x91c9a325, "bt_to_errno" },
	{ 0xdf3e0a86, "__hci_cmd_sync" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xba2b67d7, "usb_match_id" },
	{ 0xab4d815b, "usb_set_interface" },
	{ 0x649662da, "hci_register_dev" },
	{ 0xbd46083c, "usb_driver_claim_interface" },
	{ 0x2b0fdd62, "usb_ifnum_to_if" },
	{ 0x23e82f2b, "hci_alloc_dev" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0x99b5ce2, "devm_kzalloc" },
	{ 0x6b277d5e, "hci_free_dev" },
	{ 0xfa3abb27, "usb_driver_release_interface" },
	{ 0x4183a10a, "hci_unregister_dev" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x85f3e36d, "usb_kill_anchored_urbs" },
	{ 0x7e1a5ba3, "_raw_spin_unlock_irq" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x515de376, "usb_scuttle_anchored_urbs" },
	{ 0x19b8b42d, "usb_get_from_anchor" },
	{ 0x1c7691ed, "_raw_spin_lock_irq" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x916d03ce, "hci_recv_frame" },
	{ 0xb2f0a763, "_raw_spin_unlock" },
	{ 0x9d669763, "memcpy" },
	{ 0x5dd8018b, "skb_put" },
	{ 0x166ec38b, "_raw_spin_lock" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7d11c268, "jiffies" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x47022514, "bt_err" },
	{ 0x835fe962, "usb_unanchor_urb" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0xbb6b0fa, "usb_anchor_urb" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xa385d0f, "usb_alloc_urb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe300bf7, "schedule_work" },
	{ 0xc22f24be, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,bluetooth";

MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489pE042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp2003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17CBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BCE987C02D0FD0E1B3EB5F9");
