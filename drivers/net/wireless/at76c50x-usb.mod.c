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
	{ 0x6d044c26, "param_ops_uint" },
	{ 0xfd6293c2, "boot_tvec_bases" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x5a14c745, "led_trigger_unregister_simple" },
	{ 0xf709f70e, "release_firmware" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0xe05efa45, "led_trigger_register_simple" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xbb4e6cf7, "ieee80211_scan_completed" },
	{ 0x61a87211, "led_trigger_event" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x93fbae2, "usb_reset_device" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x8a6ac0e8, "ieee80211_register_hw" },
	{ 0xb81960ca, "snprintf" },
	{ 0xa385d0f, "usb_alloc_urb" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x593a99b, "init_timer_key" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0x867fa9a6, "dev_printk" },
	{ 0x8062e3b, "request_firmware" },
	{ 0xa7c0bb01, "usb_get_dev" },
	{ 0x70105e8c, "ieee80211_rx_irqsafe" },
	{ 0xa1425906, "ieee80211_channel_to_frequency" },
	{ 0x7fe1a403, "cfg80211_find_ie" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x6b02f236, "ieee80211_wake_queues" },
	{ 0xf480c81b, "ieee80211_tx_status_irqsafe" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8834396c, "mod_timer" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0x5dd8018b, "skb_put" },
	{ 0x4b176ed3, "skb_trim" },
	{ 0x280f07c2, "skb_push" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xf141bf26, "cancel_delayed_work" },
	{ 0x2ea394a7, "ieee80211_queue_work" },
	{ 0xe8b7d2f3, "ieee80211_queue_delayed_work" },
	{ 0x5f754e5a, "memset" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xedb98d7d, "ieee80211_stop_queues" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7d11c268, "jiffies" },
	{ 0x75a26fbd, "dev_err" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xd726306, "usb_control_msg" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x1f8effc7, "usb_put_dev" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x27e1a049, "printk" },
	{ 0x27aa9b0, "ieee80211_unregister_hw" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0xb75e1218, "usb_kill_urb" },
	{ 0x82072614, "tasklet_kill" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,mac80211,cfg80211";

MODULE_ALIAS("usb:v03EBp7603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p011Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0919d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055DpA000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2219d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2227d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p5743d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p0A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p3220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF35d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7606d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2233d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12FDp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7614d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7617d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7615d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "394DDF79D460AAA48A2DCC2");
