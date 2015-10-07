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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2812019, "skb_pad" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb75e1218, "usb_kill_urb" },
	{ 0x92c90e22, "queue_work" },
	{ 0xdf7510c0, "rt2x00lib_resume" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x7d11c268, "jiffies" },
	{ 0x75a26fbd, "dev_err" },
	{ 0x78ce9841, "rt2x00lib_dmastart" },
	{ 0x9ebc1a83, "rt2x00queue_flush_queue" },
	{ 0x27e1a049, "printk" },
	{ 0xd726306, "usb_control_msg" },
	{ 0x33d9c9ea, "rt2x00queue_for_each_entry" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0xb7024998, "rt2x00queue_start_queue" },
	{ 0xf53d8915, "arm_delay_ops" },
	{ 0x5f212a29, "rt2x00lib_remove_dev" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0xa7c0bb01, "usb_get_dev" },
	{ 0xc4ccfcac, "rt2x00queue_get_entry" },
	{ 0x93fbae2, "usb_reset_device" },
	{ 0x5f1720b5, "rt2x00lib_rxdone" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1f8effc7, "usb_put_dev" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf1345f7f, "ieee80211_alloc_hw" },
	{ 0x1927f29a, "hrtimer_init" },
	{ 0xe31c2ba0, "ieee80211_free_hw" },
	{ 0x53968437, "dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9089a0d, "rt2x00lib_txdone_noinfo" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x419342a2, "rt2x00lib_dmadone" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0x35087464, "rt2x00lib_probe_dev" },
	{ 0xc83acee, "rt2x00queue_stop_queue" },
	{ 0x4e29f345, "rt2x00lib_suspend" },
	{ 0xa385d0f, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "5AFC37CC3FC7CC481CF83B6");
