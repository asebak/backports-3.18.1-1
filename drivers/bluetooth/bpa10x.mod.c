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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0x916d03ce, "hci_recv_frame" },
	{ 0x9d669763, "memcpy" },
	{ 0x5dd8018b, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x85f3e36d, "usb_kill_anchored_urbs" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x835fe962, "usb_unanchor_urb" },
	{ 0x47022514, "bt_err" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0xbb6b0fa, "usb_anchor_urb" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0x280f07c2, "skb_push" },
	{ 0xa385d0f, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x649662da, "hci_register_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x23e82f2b, "hci_alloc_dev" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0x99b5ce2, "devm_kzalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x6b277d5e, "hci_free_dev" },
	{ 0x4183a10a, "hci_unregister_dev" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0xc22f24be, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,bluetooth";

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2022EF25A53F8ADEF0B6C16");
