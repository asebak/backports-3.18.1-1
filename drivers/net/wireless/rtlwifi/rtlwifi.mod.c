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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb2f0a763, "_raw_spin_unlock" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xb08ba1ba, "_raw_spin_lock_bh" },
	{ 0xe300bf7, "schedule_work" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x2c2eb33a, "ieee80211_resume_disconnect" },
	{ 0x3d37e59b, "rate_control_send_low" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0xb9dc45c8, "freq_reg_info" },
	{ 0x1c87bb8c, "wiphy_rfkill_start_polling" },
	{ 0x91715312, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xf141bf26, "cancel_delayed_work" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xf33a5135, "ieee80211_rate_control_register" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x2ccd5670, "wiphy_apply_custom_regulatory" },
	{ 0x8834396c, "mod_timer" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0x31c4edef, "wiphy_rfkill_stop_polling" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0xc789422b, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9a9c0ce0, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x15c30e6, "_raw_spin_unlock_bh" },
	{ 0xb2270341, "wiphy_rfkill_set_hw_state" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xb6e89340, "ieee80211_find_sta" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x166ec38b, "_raw_spin_lock" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xd91cc1b3, "ieee80211_get_hdrlen_from_skb" },
	{ 0x3cd4431d, "ieee80211_rate_control_unregister" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb96a25f3, "ieee80211_start_tx_ba_session" },
	{ 0x8062e3b, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd2b2afe, "complete" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xf709f70e, "release_firmware" },
	{ 0x27dfde63, "queue_delayed_work" },
	{ 0x43207dc0, "ieee80211_connection_loss" },
	{ 0x98ac4b9e, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x1f975e52, "device_set_wakeup_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,compat,cfg80211";


MODULE_INFO(srcversion, "44A5F49216740D2B9E16476");
