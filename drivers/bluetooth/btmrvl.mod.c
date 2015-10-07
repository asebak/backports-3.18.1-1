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
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x543b6c16, "debugfs_create_dir" },
	{ 0xa62c6361, "debugfs_create_u8" },
	{ 0xdf3e0a86, "__hci_cmd_sync" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x649662da, "hci_register_dev" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xe7a9a84, "remove_wait_queue" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4b4bfb08, "debugfs_create_file" },
	{ 0x4183a10a, "hci_unregister_dev" },
	{ 0x6c7a8755, "skb_realloc_headroom" },
	{ 0xbdf4cb97, "debugfs_remove_recursive" },
	{ 0x85e55162, "kthread_create_on_node" },
	{ 0x47022514, "bt_err" },
	{ 0xb3f74764, "debugfs_create_x16" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x4585b8da, "skb_queue_purge" },
	{ 0xeeb37b7, "default_llseek" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x6f4fe32, "kthread_stop" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0x23e82f2b, "hci_alloc_dev" },
	{ 0x280f07c2, "skb_push" },
	{ 0xb9d2dfb6, "simple_open" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0x78548c34, "of_property_read_u8_array" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x739d1c69, "wake_up_process" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x5d9c15c3, "of_find_node_by_name" },
	{ 0x3149f0a3, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x38ee1586, "prepare_to_wait" },
	{ 0x73ec879a, "finish_wait" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6b277d5e, "hci_free_dev" },
	{ 0x5dd8018b, "skb_put" },
	{ 0xc22f24be, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "93DF33D01CDDE9E604627CB");
