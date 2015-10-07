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
	{ 0x89c69446, "wl12xx_cmd_build_probe_req" },
	{ 0xc9786340, "wlcore_boot_upload_nvs" },
	{ 0x53dff67d, "wl12xx_debug_level" },
	{ 0x9d0991fe, "wlcore_set_key" },
	{ 0x21487838, "wl1271_acx_init_mem_config" },
	{ 0xac8c73f9, "generic_file_llseek" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x543b6c16, "debugfs_create_dir" },
	{ 0x8c537909, "wlcore_event_beacon_loss" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x36eb474, "wlcore_event_dummy_packet" },
	{ 0xbb344919, "wlcore_event_inactive_sta" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x9262a470, "wlcore_event_ba_rx_constraint" },
	{ 0xd40dc97b, "wl1271_acx_pm_config" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0xb40ae0a9, "wlcore_calc_packet_alignment" },
	{ 0xe79fbbc, "wlcore_event_rssi_trigger" },
	{ 0x9be0f8b3, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x3c60d3a8, "wlcore_probe" },
	{ 0x37ea7aa3, "wlcore_alloc_hw" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x4b4bfb08, "debugfs_create_file" },
	{ 0x26ec8511, "wl1271_acx_set_ht_capabilities" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8fd34274, "wl1271_cmd_configure" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0x3c8b0781, "wl1271_cmd_data_path" },
	{ 0x5f754e5a, "memset" },
	{ 0xe727f819, "wl12xx_acx_mem_cfg" },
	{ 0xf141bf26, "cancel_delayed_work" },
	{ 0xe54bf3a2, "wlcore_event_sched_scan_completed" },
	{ 0x52d4d0fe, "wlcore_boot_upload_firmware" },
	{ 0x5c1e6c18, "wl1271_acx_sleep_auth" },
	{ 0x27e1a049, "printk" },
	{ 0x8e32d9f9, "wlcore_set_partition" },
	{ 0x7fd2b6d5, "wlcore_enable_interrupts" },
	{ 0xd1e4d4b6, "wl1271_cmd_test" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0xefd55b63, "platform_driver_register" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0xb9d2dfb6, "simple_open" },
	{ 0xe8b7d2f3, "ieee80211_queue_delayed_work" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x71e80108, "wlcore_event_channel_switch" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x4e5bfd26, "wlcore_disable_interrupts" },
	{ 0x20634647, "wlcore_remove" },
	{ 0x71d15042, "wlcore_event_max_tx_failure" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x854cc4bc, "wlcore_scan_sched_scan_results" },
	{ 0xcb416472, "wlcore_event_soft_gemini_sense" },
	{ 0xc4f68d59, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdf8af3a, "wlcore_tx_complete" },
	{ 0x5294fba, "wl1271_format_buffer" },
	{ 0x9d669763, "memcpy" },
	{ 0x6fa5f0f, "wl1271_debugfs_update_stats" },
	{ 0x8f3f9032, "wlcore_set_scan_chan_params" },
	{ 0x2c3fc42a, "wlcore_boot_run_firmware" },
	{ 0xe3b2d493, "wlcore_translate_addr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6b665fbc, "wlcore_scan_sched_scan_ssid_list" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xcfa4e87d, "wlcore_event_roc_complete" },
	{ 0xd3a204c1, "platform_driver_unregister" },
	{ 0xbf6d68a1, "wl1271_cmd_send" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0x48e98aec, "wl1271_tx_min_rate_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,compat,mac80211";

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "AFB8D4D6850CFCE6D0B020F");
