#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xae4b0ceb, "module_layout" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xb2f0a763, "_raw_spin_unlock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x99b5ce2, "devm_kzalloc" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xb08ba1ba, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6f749e2, "backport_ktime_get_raw" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8f54f1e3, "ath_printk" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9529466a, "ieee80211_find_sta_by_ifaddr" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe09e14ef, "ath_hw_get_listen_time" },
	{ 0xfb4de67a, "ath_regd_get_band_ctl" },
	{ 0x15c30e6, "_raw_spin_unlock_bh" },
	{ 0xd3e6f60d, "cpu_possible_mask" },
	{ 0x25e3ff76, "ath_hw_cycle_counters_update" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x166ec38b, "_raw_spin_lock" },
	{ 0xb69e9bed, "ath_hw_setbssidmask" },
	{ 0x68e05d57, "getrawmonotonic" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x4cdb3178, "ns_to_timeval" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,ath,mac80211";


MODULE_INFO(srcversion, "458F543BB638499E044E8CC");
