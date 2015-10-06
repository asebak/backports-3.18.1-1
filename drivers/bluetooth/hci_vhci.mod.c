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
	{ 0x15600661, "no_llseek" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x23a5f9a3, "misc_deregister" },
	{ 0xd7b80a3d, "misc_register" },
	{ 0xd7442057, "bt_info" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xdd2d6c21, "skb_queue_head" },
	{ 0x73ec879a, "finish_wait" },
	{ 0x38ee1586, "prepare_to_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0x916d03ce, "hci_recv_frame" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4585b8da, "skb_queue_purge" },
	{ 0x280f07c2, "skb_push" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x47022514, "bt_err" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0x5dd8018b, "skb_put" },
	{ 0x649662da, "hci_register_dev" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x23e82f2b, "hci_alloc_dev" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x9da01691, "schedule_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x6bf38fe2, "nonseekable_open" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b277d5e, "hci_free_dev" },
	{ 0x4183a10a, "hci_unregister_dev" },
	{ 0x6a417ef4, "cancel_delayed_work_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,compat";


MODULE_INFO(srcversion, "EDFEC506DB394846C6F2CD7");
