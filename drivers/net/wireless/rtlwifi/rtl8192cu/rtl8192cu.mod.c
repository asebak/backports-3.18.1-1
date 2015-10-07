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
	{ 0x62a9880c, "rtl_cam_delete_one_entry" },
	{ 0xff43316d, "rtl_fw_cb" },
	{ 0xf99c6fc0, "rtl_cam_get_free_entry" },
	{ 0xdb04ca8f, "rtl92c_phy_set_rfpath_switch" },
	{ 0xcb5cbe31, "rtl_usb_disconnect" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xee1ff8b2, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x6829370e, "rtl92c_phy_set_txpower_level" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd5ae4b9b, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xae3c1946, "rtl92c_dm_check_txpower_tracking" },
	{ 0xde11f411, "rtl_ps_disable_nic" },
	{ 0x7e615ddd, "rtl92c_dm_watchdog" },
	{ 0xf6591c6a, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x74553f9, "_rtl92c_phy_rf_serial_write" },
	{ 0x31d9097d, "rtl_get_tcb_desc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe300bf7, "schedule_work" },
	{ 0xf47349f6, "_rtl92c_phy_rf_serial_read" },
	{ 0x2f8956f7, "rtl92c_phy_set_bw_mode" },
	{ 0x35d2c8d7, "rtl92c_phy_lc_calibrate" },
	{ 0xb3314d48, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xb859e6bd, "rtl_efuse_shadow_map_update" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x6268d6e, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1dda1877, "rtl_phy_scan_operation_backup" },
	{ 0xd36b6bda, "rtl92c_dm_init_edca_turbo" },
	{ 0x1620060c, "rtl92c_phy_iq_calibrate" },
	{ 0x944fa7b9, "rtl92c_dm_init" },
	{ 0xa0eed44, "rtl_usb_probe" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x424bb1b4, "rtl92c_phy_set_bb_reg" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x14922d2c, "rtl_ps_enable_nic" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x27e1a049, "printk" },
	{ 0xca11f3c9, "rtl92c_dm_rf_saving" },
	{ 0x16b9411, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x58976a81, "ieee80211_rx" },
	{ 0xeec7390e, "dm_writepowerindex" },
	{ 0x280f07c2, "skb_push" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x19ee8b35, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x5ef72bf3, "_rtl92c_phy_set_rf_sleep" },
	{ 0xa7fe44b0, "request_firmware_nowait" },
	{ 0xa885dffe, "rtlwifi_rate_mapping" },
	{ 0x45e00dde, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x1fc6ea1, "rtl92c_download_fw" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x2ddd4837, "rtl_rfreg_delay" },
	{ 0xa383ae45, "rtl92c_phy_set_io_cmd" },
	{ 0xb6e89340, "ieee80211_find_sta" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xb8680ef5, "rtl_cam_mark_invalid" },
	{ 0xc0ea6bd9, "rtl92c_phy_rf_config" },
	{ 0x9d669763, "memcpy" },
	{ 0xc1f62dce, "rtl_cam_del_entry" },
	{ 0xfc6f88f, "rtl_cam_empty_entry" },
	{ 0x30642f93, "rtl92ce_phy_set_rf_on" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0xc3e45412, "rtl92c_phy_query_bb_reg" },
	{ 0xd71c0044, "_rtl92c_store_pwrIndex_diffrate_offset" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0xce8c4013, "rtl_cam_reset_all_entry" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7f52bd75, "rtl_process_phyinfo" },
	{ 0xc488304d, "dm_restorepowerindex" },
	{ 0xe1894084, "efuse_read_1byte" },
	{ 0x505f06f9, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0xa665eca4, "rtl92c_fill_h2c_cmd" },
	{ 0xaf7388f0, "rtl92c_phy_sw_chnl" },
	{ 0x980848e2, "rtl_addr_delay" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl8192c-common,rtl_usb,compat,mac80211";

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "07C83C300C399962FE96B25");
