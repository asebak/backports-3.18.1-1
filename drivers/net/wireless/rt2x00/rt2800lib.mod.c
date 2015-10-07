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
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2812019, "skb_pad" },
	{ 0x54909b18, "rt2x00lib_get_bssidx" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x70f98cff, "rt2x00debug_dump_frame" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x75a26fbd, "dev_err" },
	{ 0xc316a1ec, "rt2x00mac_conf_tx" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x280f07c2, "skb_push" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x19506873, "rt2x00lib_txdone" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0x9a9c0ce0, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3771b461, "crc_ccitt" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x53968437, "dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x98ac4b9e, "ieee80211_start_tx_ba_cb_irqsafe" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "355463BB5DCE0D4FB95FBAF");
