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
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x4c5b2aba, "mwifiex_cancel_hs" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x695b2cfd, "down_interruptible" },
	{ 0xb75e1218, "usb_kill_urb" },
	{ 0x92c90e22, "queue_work" },
	{ 0xeeebf52c, "mwifiex_write_data_complete" },
	{ 0x82b30aa5, "mwifiex_process_sleep_confirm_resp" },
	{ 0x4b176ed3, "skb_trim" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5d2f656f, "mwifiex_add_card" },
	{ 0x75a26fbd, "dev_err" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x280f07c2, "skb_push" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0xa7c0bb01, "usb_get_dev" },
	{ 0x93fbae2, "usb_reset_device" },
	{ 0x5b05fe81, "usb_bulk_msg" },
	{ 0x1f8effc7, "usb_put_dev" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xdb554304, "mwifiex_process_hs_config" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc9f5df35, "up" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0x53968437, "dev_warn" },
	{ 0xa5944411, "mwifiex_deauthenticate_all" },
	{ 0x1d6506f7, "mwifiex_remove_card" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1150e75a, "mwifiex_enable_hs" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xa5a4df79, "mwifiex_init_shutdown_fw" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0xa385d0f, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,mwifiex";

MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2046d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "B98C585B8E92A59DA6C3F4A");
