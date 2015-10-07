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
	{ 0x15692c87, "param_ops_int" },
	{ 0xcfca9b81, "ethtool_op_get_link" },
	{ 0xc2dbf9e1, "eth_validate_addr" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xecc7793e, "ssb_driver_unregister" },
	{ 0xfa41c2a1, "__ssb_driver_register" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xe4533fba, "phy_ethtool_sset" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xf468f71, "netif_receive_skb" },
	{ 0xa5b821b2, "eth_type_trans" },
	{ 0x2be0f12d, "dql_completed" },
	{ 0x6a45b943, "dev_kfree_skb_irq" },
	{ 0x84cc383c, "napi_complete" },
	{ 0xee40bca6, "phy_start" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x32641834, "phy_stop" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x61b3847, "netif_device_detach" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x3bac3ccf, "__netif_schedule" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb581a38e, "netif_device_attach" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xa381944f, "dql_reset" },
	{ 0xb5f9c972, "generic_mii_ioctl" },
	{ 0xa7cad762, "phy_mii_ioctl" },
	{ 0x89bc1db9, "phy_ethtool_gset" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8834396c, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x7d11c268, "jiffies" },
	{ 0x5a9c3e64, "netdev_warn" },
	{ 0xc3e855ce, "netif_carrier_on" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0xf39ba0ef, "phy_connect" },
	{ 0xaeb2dcf4, "mdiobus_register" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1fbb963d, "mdiobus_alloc_size" },
	{ 0x838567b9, "netif_carrier_off" },
	{ 0x24946a67, "register_netdev" },
	{ 0x8307dd80, "ssb_dma_translation" },
	{ 0xb7eea999, "dma_supported" },
	{ 0x75a26fbd, "dev_err" },
	{ 0x4b7ad03a, "ssb_bus_powerup" },
	{ 0xbf9dcebe, "netif_napi_add" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x69ff7fa5, "alloc_etherdev_mqs" },
	{ 0x85aac3ca, "ssb_clockspeed" },
	{ 0xf668ee46, "ssb_device_enable" },
	{ 0x3ea1e106, "ssb_device_is_enabled" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x263f6e9f, "phy_print_status" },
	{ 0x27e1a049, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb59a7a8e, "netdev_err" },
	{ 0xac8f37b2, "outer_cache" },
	{ 0x9d669763, "memcpy" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0x1d5ebf36, "free_netdev" },
	{ 0xadabc6ee, "ssb_bus_may_powerdown" },
	{ 0x2d8d215, "ssb_device_disable" },
	{ 0x8dafa6f9, "mdiobus_free" },
	{ 0xfba2ec4f, "mdiobus_unregister" },
	{ 0xaa7d0752, "phy_disconnect" },
	{ 0xd4be601d, "unregister_netdev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x12d05d5b, "__napi_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb2f0a763, "_raw_spin_unlock" },
	{ 0x166ec38b, "_raw_spin_lock" },
	{ 0x7e1a5ba3, "_raw_spin_unlock_irq" },
	{ 0x1c7691ed, "_raw_spin_lock_irq" },
	{ 0x70540f32, "netdev_info" },
	{ 0x32f7e276, "mem_map" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x361bbc23, "arm_dma_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ssb,compat";

MODULE_ALIAS("ssb:v4243id0806rev*");

MODULE_INFO(srcversion, "A2204C38B4DE002EABA6D95");
