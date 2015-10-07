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
	{ 0x70105e8c, "ieee80211_rx_irqsafe" },
	{ 0xc411a2ab, "complete_and_exit" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x543b6c16, "debugfs_create_dir" },
	{ 0xa663b010, "single_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x3f84fb37, "seq_puts" },
	{ 0xee931431, "ieee80211_cqm_rssi_notify" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x4f837502, "seq_printf" },
	{ 0x27aa9b0, "ieee80211_unregister_hw" },
	{ 0xa1425906, "ieee80211_channel_to_frequency" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x4b4bfb08, "debugfs_create_file" },
	{ 0xbdf4cb97, "debugfs_remove_recursive" },
	{ 0x8c079e03, "seq_read" },
	{ 0x85e55162, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0xedb98d7d, "ieee80211_stop_queues" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0xf95f8844, "ieee80211_stop_queue" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0x78901a61, "wait_for_completion" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x4585b8da, "skb_queue_purge" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4cb8a763, "ieee80211_free_txskb" },
	{ 0x6f4fe32, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x280f07c2, "skb_push" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x310917fe, "sort" },
	{ 0x9a9c0ce0, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0x973d0f9e, "kstrtoul_from_user" },
	{ 0xf480c81b, "ieee80211_tx_status_irqsafe" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x739d1c69, "wake_up_process" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x41f27fea, "ieee80211_wake_queue" },
	{ 0x50c0ed37, "ieee80211_generic_frame_duration" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0x8a6ac0e8, "ieee80211_register_hw" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x8a282acb, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb96a25f3, "ieee80211_start_tx_ba_session" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0x38ee1586, "prepare_to_wait" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0x73ec879a, "finish_wait" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x40a5c4c, "consume_skb" },
	{ 0x5dd8018b, "skb_put" },
	{ 0x98ac4b9e, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x8cd289be, "ieee80211_queue_stopped" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,compat,cfg80211";


MODULE_INFO(srcversion, "EB124907C9564DF9809E1E2");
