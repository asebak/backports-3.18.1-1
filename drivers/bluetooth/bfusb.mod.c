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
	{ 0x4183a10a, "hci_unregister_dev" },
	{ 0xb75e1218, "usb_kill_urb" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x916d03ce, "hci_recv_frame" },
	{ 0x416154a8, "_raw_write_unlock_irqrestore" },
	{ 0x103c66f3, "_raw_write_lock_irqsave" },
	{ 0xada2b2a2, "_raw_read_unlock" },
	{ 0x45b6aa66, "_raw_read_lock" },
	{ 0x5dd8018b, "skb_put" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0x280f07c2, "skb_push" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa385d0f, "usb_alloc_urb" },
	{ 0xdd2d6c21, "skb_queue_head" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0xc4343f65, "skb_unlink" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6b277d5e, "hci_free_dev" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x649662da, "hci_register_dev" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x23e82f2b, "hci_alloc_dev" },
	{ 0xf709f70e, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x47022514, "bt_err" },
	{ 0x5b05fe81, "usb_bulk_msg" },
	{ 0x9d669763, "memcpy" },
	{ 0xd726306, "usb_control_msg" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xd7442057, "bt_info" },
	{ 0x8062e3b, "request_firmware" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x28288ce, "__rwlock_init" },
	{ 0x99b5ce2, "devm_kzalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4585b8da, "skb_queue_purge" },
	{ 0xc22f24be, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,bluetooth";

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "47EAA26E39B7E0FB054F7EA");
