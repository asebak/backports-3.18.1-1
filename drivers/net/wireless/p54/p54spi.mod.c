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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9660b5c3, "driver_unregister" },
	{ 0xdaf8bbc5, "spi_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xd2b2afe, "complete" },
	{ 0xbbdf0b3a, "p54_free_skb" },
	{ 0xd22ba0d3, "wait_for_completion_interruptible_timeout" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf178e73b, "mutex_lock_interruptible" },
	{ 0x9d669763, "memcpy" },
	{ 0x40a5c4c, "consume_skb" },
	{ 0x2b47f22a, "p54_rx" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x289ccb58, "spi_sync" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2ea394a7, "ieee80211_queue_work" },
	{ 0xa81eba08, "p54_register_common" },
	{ 0x75a26fbd, "dev_err" },
	{ 0x38eecbf9, "p54_parse_eeprom" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0x3e833481, "p54_parse_firmware" },
	{ 0x8062e3b, "request_firmware" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x65d6d0f0, "gpio_direction_input" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x2d126e5f, "spi_setup" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0xbd7025a8, "p54_init_common" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x174f393a, "p54_free_common" },
	{ 0xf41404d5, "mutex_destroy" },
	{ 0xf709f70e, "release_firmware" },
	{ 0xfe990052, "gpio_free" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0x63fb629d, "p54_unregister_common" },
	{ 0xc22f24be, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,p54common,mac80211";


MODULE_INFO(srcversion, "4EB8CF6CFA2C02C4C0F7E72");
