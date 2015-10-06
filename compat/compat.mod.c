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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xd4f4627f, "genl_register_family" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x99b5ce2, "devm_kzalloc" },
	{ 0xef2aa357, "genl_unregister_family" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x595643d2, "skb_clone" },
	{ 0xe300bf7, "schedule_work" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xdc5f9244, "sock_queue_err_skb" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x912c69a4, "of_find_property" },
	{ 0x328a05f1, "strncpy" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x101cb6bf, "devres_alloc" },
	{ 0x974d3794, "sk_free" },
	{ 0xa20ce1b8, "net_msg_warn" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x9e6906b6, "devres_release" },
	{ 0x1000e51, "schedule" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x59456150, "devres_add" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x248247e3, "regulator_register" },
	{ 0x68e05d57, "getrawmonotonic" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd798bba7, "genl_register_mc_group" },
	{ 0xff43c511, "genl_register_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7e11c2f7, "regulator_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9507D05EA3734510A08C282");
