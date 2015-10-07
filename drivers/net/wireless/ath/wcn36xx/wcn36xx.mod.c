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
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x543b6c16, "debugfs_create_dir" },
	{ 0x32f7e276, "mem_map" },
	{ 0xf41404d5, "mutex_destroy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x361bbc23, "arm_dma_ops" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x71afb92e, "ieee80211_beacon_get_tim" },
	{ 0x92c90e22, "queue_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x27aa9b0, "ieee80211_unregister_hw" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x4b4bfb08, "debugfs_create_file" },
	{ 0xbdf4cb97, "debugfs_remove_recursive" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x7d11c268, "jiffies" },
	{ 0xedb98d7d, "ieee80211_stop_queues" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4cb8a763, "ieee80211_free_txskb" },
	{ 0x71c90087, "memcmp" },
	{ 0x6b02f236, "ieee80211_wake_queues" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xefd55b63, "platform_driver_register" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xb9d2dfb6, "simple_open" },
	{ 0x85848e98, "ieee80211_proberesp_get" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9a9c0ce0, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xf480c81b, "ieee80211_tx_status_irqsafe" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0xc2165d85, "__arm_iounmap" },
	{ 0xb6e89340, "ieee80211_find_sta" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0x18716533, "platform_get_resource_byname" },
	{ 0x8a6ac0e8, "ieee80211_register_hw" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0xb96a25f3, "ieee80211_start_tx_ba_session" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0x8062e3b, "request_firmware" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd2b2afe, "complete" },
	{ 0x40a5c4c, "consume_skb" },
	{ 0xd3a204c1, "platform_driver_unregister" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xd1b1e58, "wait_for_completion_timeout" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0xac8f37b2, "outer_cache" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xf709f70e, "release_firmware" },
	{ 0x43207dc0, "ieee80211_connection_loss" },
	{ 0x98ac4b9e, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,compat";

MODULE_ALIAS("platform:wcn36xx");

MODULE_INFO(srcversion, "E4EF11919F08F4314BB1CB5");
