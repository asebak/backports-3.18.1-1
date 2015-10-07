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
	{ 0xdd2d6c21, "skb_queue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xac8c73f9, "generic_file_llseek" },
	{ 0x543b6c16, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2ea394a7, "ieee80211_queue_work" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xee931431, "ieee80211_cqm_rssi_notify" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x71afb92e, "ieee80211_beacon_get_tim" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x27aa9b0, "ieee80211_unregister_hw" },
	{ 0xa1425906, "ieee80211_channel_to_frequency" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x6a417ef4, "cancel_delayed_work_sync" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0xbb4e6cf7, "ieee80211_scan_completed" },
	{ 0x999e8297, "vfree" },
	{ 0x4b4bfb08, "debugfs_create_file" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4b176ed3, "skb_trim" },
	{ 0xedb98d7d, "ieee80211_stop_queues" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0x4bb1bde0, "ieee80211_tx_status" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xf141bf26, "cancel_delayed_work" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x6b02f236, "ieee80211_wake_queues" },
	{ 0x328a05f1, "strncpy" },
	{ 0x672769ca, "debugfs_remove" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x58976a81, "ieee80211_rx" },
	{ 0x280f07c2, "skb_push" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xb9d2dfb6, "simple_open" },
	{ 0xe8b7d2f3, "ieee80211_queue_delayed_work" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x6ce64b60, "skb_copy_expand" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xd91cc1b3, "ieee80211_get_hdrlen_from_skb" },
	{ 0x8a6ac0e8, "ieee80211_register_hw" },
	{ 0x6cf87dec, "ieee80211_pspoll_get" },
	{ 0x9cad48b9, "ieee80211_nullfunc_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x372431aa, "ieee80211_beacon_loss" },
	{ 0x9d669763, "memcpy" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x8062e3b, "request_firmware" },
	{ 0xcad4b920, "ieee80211_probereq_get" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99bb8806, "memmove" },
	{ 0x40a5c4c, "consume_skb" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xf709f70e, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "140FA2D38C22430C9467C70");
