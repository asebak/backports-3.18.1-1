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
	{ 0xb2f0a763, "_raw_spin_unlock" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xf3e3bb9d, "__lbtf_cmd" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xe398fa0c, "lbtf_cmd_copyback" },
	{ 0xf4626eab, "lbtf_cmd_response_rx" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xf4e8c3a8, "lbtf_send_tx_feedback" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x2937fc61, "lbtf_add_card" },
	{ 0xb75e1218, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf705832f, "lbtf_remove_card" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xc85e6899, "lbtf_debug" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0xaf91d89f, "__kernel_param_lock" },
	{ 0x8834396c, "mod_timer" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0xa7c0bb01, "usb_get_dev" },
	{ 0xb3de4eb2, "lbtf_rx" },
	{ 0x93fbae2, "usb_reset_device" },
	{ 0x1f8effc7, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0xd11c0dc1, "__kernel_param_unlock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x166ec38b, "_raw_spin_lock" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x38ee1586, "prepare_to_wait" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0x8062e3b, "request_firmware" },
	{ 0x73ec879a, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa961e807, "lbtf_bcn_sent" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0xf709f70e, "release_firmware" },
	{ 0xa385d0f, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,libertas_tf";

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E93485DD7D1BE76BE53D48E");
