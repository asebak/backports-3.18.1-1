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
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc996d097, "del_timer" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x71afb92e, "ieee80211_beacon_get_tim" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x92c90e22, "queue_work" },
	{ 0x27aa9b0, "ieee80211_unregister_hw" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x7d11c268, "jiffies" },
	{ 0xedb98d7d, "ieee80211_stop_queues" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x6b02f236, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7e1a5ba3, "_raw_spin_unlock_irq" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x280f07c2, "skb_push" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8834396c, "mod_timer" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0xf480c81b, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x1c7691ed, "_raw_spin_lock_irq" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x81f3dcb5, "ieee80211_get_buffered_bc" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8a6ac0e8, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0x38ee1586, "prepare_to_wait" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0x73ec879a, "finish_wait" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,compat";


MODULE_INFO(srcversion, "F2FDAC85C7B84D14B8EFFBB");
