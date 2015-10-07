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
	{ 0xdd2d6c21, "skb_queue_head" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc4343f65, "skb_unlink" },
	{ 0xb9561097, "__netdev_alloc_skb" },
	{ 0x4e1b4a7c, "skb_dequeue_tail" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x27e1a049, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xdee481c9, "dev_kfree_skb_any" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5dd8018b, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A0783053E3D218C552A3D06");
