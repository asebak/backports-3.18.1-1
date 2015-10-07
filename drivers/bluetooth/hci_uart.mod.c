#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0xa204ee8b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5147e693, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb2f0a763, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb43a926b, __VMLINUX_SYMBOL_STR(backport_dependency_symbol) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x33615850, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9c1a51d1, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0x12e75894, __VMLINUX_SYMBOL_STR(tty_unthrottle) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x8337363b, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0xa120d33c, __VMLINUX_SYMBOL_STR(tty_unregister_ldisc) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xcf14b4bb, __VMLINUX_SYMBOL_STR(tty_ldisc_flush) },
	{ 0xbd2e2372, __VMLINUX_SYMBOL_STR(n_tty_ioctl_helper) },
	{ 0x56cf3853, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x45e29e1d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9005ffe9, __VMLINUX_SYMBOL_STR(tty_driver_flush_buffer) },
	{ 0xb67026a2, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5952a882, __VMLINUX_SYMBOL_STR(__raw_spin_lock_init) },
	{ 0x65d09116, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x166ec38b, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x8c182e9b, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0xc078b554, __VMLINUX_SYMBOL_STR(tty_register_ldisc) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x17dcab4a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,bluetooth";


MODULE_INFO(srcversion, "B69461356383AEB0DA3A14F");
