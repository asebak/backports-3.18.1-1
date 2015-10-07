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
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x99b5ce2, "devm_kzalloc" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4b4bfb08, "debugfs_create_file" },
	{ 0x8f54f1e3, "ath_printk" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xde0e99e6, "ath9k_hw_gettsf64" },
	{ 0xeeb37b7, "default_llseek" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xb9d2dfb6, "simple_open" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xd91cc1b3, "ieee80211_get_hdrlen_from_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99bb8806, "memmove" },
	{ 0x6c3110d9, "ath_hw_keyreset" },
	{ 0x926f739, "ath9k_hw_set_txpowerlimit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,cfg80211,ath,ath9k_hw";


MODULE_INFO(srcversion, "D5F3911CE3E0E59AC72CC2F");
