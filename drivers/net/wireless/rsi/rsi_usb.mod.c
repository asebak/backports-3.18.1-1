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
	{ 0x95042df8, "rsi_91x_init" },
	{ 0xc411a2ab, "complete_and_exit" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x85e55162, "kthread_create_on_node" },
	{ 0x7201b98a, "rsi_dbg" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x78901a61, "wait_for_completion" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x6f4fe32, "kthread_stop" },
	{ 0x711466ed, "rsi_mac80211_detach" },
	{ 0x9efd67cd, "rsi_read_pkt" },
	{ 0xd726306, "usb_control_msg" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0x5b05fe81, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x739d1c69, "wake_up_process" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x38ee1586, "prepare_to_wait" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0x8062e3b, "request_firmware" },
	{ 0x73ec879a, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x319c7738, "rsi_91x_deinit" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0xf709f70e, "release_firmware" },
	{ 0xa385d0f, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rsi_91x,compat";

MODULE_ALIAS("usb:v0303p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Bp0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Bp0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Bp9330d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AAF3B20D618FC87B62FEF70");
