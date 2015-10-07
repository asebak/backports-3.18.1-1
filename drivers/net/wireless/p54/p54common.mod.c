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
	{ 0x70105e8c, "ieee80211_rx_irqsafe" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf41404d5, "mutex_destroy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1e3308b4, "led_classdev_register" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x867fa9a6, "dev_printk" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x71afb92e, "ieee80211_beacon_get_tim" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x27aa9b0, "ieee80211_unregister_hw" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x1551dc51, "bitmap_find_free_region" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x6a417ef4, "cancel_delayed_work_sync" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0xf4075d07, "__ieee80211_get_assoc_led_name" },
	{ 0xc4343f65, "skb_unlink" },
	{ 0x4b176ed3, "skb_trim" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0xf95f8844, "ieee80211_stop_queue" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x4585b8da, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x75a26fbd, "dev_err" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4cb8a763, "ieee80211_free_txskb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x280f07c2, "skb_push" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x310917fe, "sort" },
	{ 0xe8b7d2f3, "ieee80211_queue_delayed_work" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0xc0d76fb5, "__ieee80211_get_rx_led_name" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xb2270341, "wiphy_rfkill_set_hw_state" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xf480c81b, "ieee80211_tx_status_irqsafe" },
	{ 0x8251bcc3, "bitmap_release_region" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0xd22ba0d3, "wait_for_completion_interruptible_timeout" },
	{ 0xffd4db06, "__ieee80211_get_tx_led_name" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0x41f27fea, "ieee80211_wake_queue" },
	{ 0x3771b461, "crc_ccitt" },
	{ 0x388af1cd, "__ieee80211_get_radio_led_name" },
	{ 0xd91cc1b3, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8a6ac0e8, "ieee80211_register_hw" },
	{ 0xa1537223, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0af301, "regulatory_hint" },
	{ 0x372431aa, "ieee80211_beacon_loss" },
	{ 0x9d669763, "memcpy" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0x53968437, "dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd2b2afe, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x40a5c4c, "consume_skb" },
	{ 0x5dd8018b, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "003D54347E906F105A3084B");
