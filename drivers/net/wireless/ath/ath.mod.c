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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xdafea66e, "perf_tp_event" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xb08ba1ba, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x9621849f, "ring_buffer_event_data" },
	{ 0xb9dc45c8, "freq_reg_info" },
	{ 0xc40c4753, "filter_current_check_discard" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x981c20df, "trace_define_field" },
	{ 0x29767b9e, "__ieee80211_get_channel" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2ccd5670, "wiphy_apply_custom_regulatory" },
	{ 0xfef8a166, "trace_current_buffer_lock_reserve" },
	{ 0xbca4d4f9, "ftrace_event_reg" },
	{ 0x15c30e6, "_raw_spin_unlock_bh" },
	{ 0xdba126c1, "reg_initiator_name" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x7afa89fc, "vsnprintf" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd21b5b09, "trace_event_raw_init" },
	{ 0xd788742d, "perf_trace_buf_prepare" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x1e3a88fb, "trace_seq_printf" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x498d293a, "trace_buffer_unlock_commit" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "6BA137F3C33F2FF62E2EAF1");
