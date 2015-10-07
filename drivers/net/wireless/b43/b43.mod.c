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
	{ 0x3f27b72, "bcma_core_pci_down" },
	{ 0xdd2d6c21, "skb_queue_head" },
	{ 0x8307dd80, "ssb_dma_translation" },
	{ 0x3bd5d6a0, "device_remove_file" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2bcafb09, "bcma_pmu_spuravoid_pllupdate" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xb2f0a763, "_raw_spin_unlock" },
	{ 0xac8c73f9, "generic_file_llseek" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x543b6c16, "debugfs_create_dir" },
	{ 0x32f7e276, "mem_map" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x2ea394a7, "ieee80211_queue_work" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x1e3308b4, "led_classdev_register" },
	{ 0x361bbc23, "arm_dma_ops" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x3a31235a, "sdio_enable_func" },
	{ 0xac9dedeb, "bcma_core_pci_irq_ctl" },
	{ 0x15fa2168, "sdio_claim_irq" },
	{ 0x6b2f7922, "ieee80211_rts_get" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe300bf7, "schedule_work" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0xed910931, "ssb_commit_settings" },
	{ 0x71afb92e, "ieee80211_beacon_get_tim" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x27aa9b0, "ieee80211_unregister_hw" },
	{ 0xa1425906, "ieee80211_channel_to_frequency" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x6a417ef4, "cancel_delayed_work_sync" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x4b7ad03a, "ssb_bus_powerup" },
	{ 0xc87481dd, "ssb_bus_sdiobus_register" },
	{ 0x4b4bfb08, "debugfs_create_file" },
	{ 0x1c87bb8c, "wiphy_rfkill_start_polling" },
	{ 0xf4075d07, "__ieee80211_get_assoc_led_name" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfa41c2a1, "__ssb_driver_register" },
	{ 0x4d405db8, "param_ops_string" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0xf95f8844, "ieee80211_stop_queue" },
	{ 0x4bb1bde0, "ieee80211_tx_status" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x78901a61, "wait_for_completion" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xecc7793e, "ssb_driver_unregister" },
	{ 0x7315c6a7, "ssb_chipco_gpio_control" },
	{ 0x75a26fbd, "dev_err" },
	{ 0x8295e2e5, "bcma_core_pci_up" },
	{ 0x7e442909, "bcma_core_dma_translation" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x4cb8a763, "ieee80211_free_txskb" },
	{ 0x6b02f236, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x328a05f1, "strncpy" },
	{ 0xf668ee46, "ssb_device_enable" },
	{ 0x7e1a5ba3, "_raw_spin_unlock_irq" },
	{ 0x672769ca, "debugfs_remove" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x58976a81, "ieee80211_rx" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x78da021b, "bcma_core_set_clockmode" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0xb052568c, "__bcma_driver_register" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x68ef9735, "ieee80211_ctstoself_get" },
	{ 0xb9d2dfb6, "simple_open" },
	{ 0xc1c70601, "debugfs_create_bool" },
	{ 0xa7fe44b0, "request_firmware_nowait" },
	{ 0x4c759827, "byte_rev_table" },
	{ 0xe8b7d2f3, "ieee80211_queue_delayed_work" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x75bb4cf7, "device_create_file" },
	{ 0x20899e4d, "sdio_unregister_driver" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x318f6e3b, "bcma_chipco_gpio_control" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0xc0d76fb5, "__ieee80211_get_rx_led_name" },
	{ 0x8c82111b, "bcma_core_is_enabled" },
	{ 0xe0c73aa3, "ssb_pmu_set_ldo_voltage" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2d8d215, "ssb_device_disable" },
	{ 0x88fba6be, "bcma_core_enable" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x9ba03bca, "sdio_release_irq" },
	{ 0xb2270341, "wiphy_rfkill_set_hw_state" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x97c8fd93, "bcma_driver_unregister" },
	{ 0xa4359486, "bcma_core_pll_ctl" },
	{ 0x1c7691ed, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x624a6406, "hwrng_register" },
	{ 0xffd4db06, "__ieee80211_get_tx_led_name" },
	{ 0xb2e7fa05, "ssb_set_devtypedata" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x166ec38b, "_raw_spin_lock" },
	{ 0x41f27fea, "ieee80211_wake_queue" },
	{ 0x50c0ed37, "ieee80211_generic_frame_duration" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x388af1cd, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xed9acc39, "ssb_bus_unregister" },
	{ 0x8a6ac0e8, "ieee80211_register_hw" },
	{ 0xa1537223, "led_classdev_unregister" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0xb7eea999, "dma_supported" },
	{ 0x8062e3b, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0xadabc6ee, "ssb_bus_may_powerdown" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xd2b2afe, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x4dfd651a, "sdio_register_driver" },
	{ 0x40a5c4c, "consume_skb" },
	{ 0xf3f9375, "sdio_claim_host" },
	{ 0x4ad75c65, "ssb_pmu_set_ldo_paref" },
	{ 0x7267db00, "hwrng_unregister" },
	{ 0x5dd8018b, "skb_put" },
	{ 0x3ea1e106, "ssb_device_is_enabled" },
	{ 0xac8f37b2, "outer_cache" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0x43ef437c, "bcma_core_disable" },
	{ 0xd76abf5e, "sdio_set_block_size" },
	{ 0xf709f70e, "release_firmware" },
	{ 0x45dc7c79, "ssb_pmu_spuravoid_pllupdate" },
	{ 0x5c28cca5, "ieee80211_get_tkip_p1k_iv" },
	{ 0x8492a430, "ieee80211_get_response_rate" },
	{ 0x1ed64f2c, "sdio_disable_func" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xfe1c3f19, "sdio_release_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bcma,ssb,compat,mac80211,cfg80211";

MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");
MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");

MODULE_INFO(srcversion, "19169463FB2D236FC57FEC2");
