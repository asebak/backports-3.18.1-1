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
	{ 0xeaa54a48, "sock_init_data" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x16c655c4, "up_read" },
	{ 0xd252ec68, "kernel_sendmsg" },
	{ 0x24c55e4d, "sockfd_lookup" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7600d352, "sock_no_setsockopt" },
	{ 0xb5233a84, "sock_no_getsockopt" },
	{ 0xe7a9a84, "remove_wait_queue" },
	{ 0x79dde135, "eth_change_mtu" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xfc470492, "sock_no_getname" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x70da601f, "bt_sock_register" },
	{ 0x85e55162, "kthread_create_on_node" },
	{ 0x376b22cb, "sock_no_poll" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd174d200, "down_read" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0xf9087b8b, "__pskb_pull_tail" },
	{ 0x76cef66d, "sock_no_mmap" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xadea4b10, "sock_no_recvmsg" },
	{ 0xa0eb0da4, "bt_sock_unlink" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x8e73a19a, "netif_rx_ni" },
	{ 0x5ba89905, "sock_no_socketpair" },
	{ 0xa9c78406, "sk_alloc" },
	{ 0x27e1a049, "printk" },
	{ 0x6814d62c, "sock_no_bind" },
	{ 0x71c90087, "memcmp" },
	{ 0xcc1fb551, "baswap" },
	{ 0x1d5ebf36, "free_netdev" },
	{ 0x24946a67, "register_netdev" },
	{ 0x2ef4402, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd08861d7, "sock_no_accept" },
	{ 0x974d3794, "sk_free" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x22c71aca, "skb_pull" },
	{ 0xdc34b069, "up_write" },
	{ 0x91f6904b, "init_net" },
	{ 0x40fa0447, "down_write" },
	{ 0x9abda1bf, "fput" },
	{ 0xd67f10fe, "sock_no_shutdown" },
	{ 0xcef077ce, "bt_sock_link" },
	{ 0x837f0809, "module_put" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe2dbb3c, "proto_register" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0x1000e51, "schedule" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0xc13fbbc3, "proto_unregister" },
	{ 0x75476b5b, "alloc_netdev_mqs" },
	{ 0xa5b821b2, "eth_type_trans" },
	{ 0x2ce86773, "__module_put_and_exit" },
	{ 0x739d1c69, "wake_up_process" },
	{ 0x3088f877, "ether_setup" },
	{ 0xdfaa36c8, "__module_get" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0x2369d3f7, "sock_no_connect" },
	{ 0xfd16820b, "_raw_write_unlock_bh" },
	{ 0xc2dbf9e1, "eth_validate_addr" },
	{ 0x3149f0a3, "add_wait_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0xb7b61546, "crc32_be" },
	{ 0x224a3b61, "sock_no_sendmsg" },
	{ 0xc4b4fd53, "set_user_nice" },
	{ 0x48e1fe87, "_raw_write_lock_bh" },
	{ 0x4637cee8, "bt_procfs_init" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0xd4be601d, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3bac3ccf, "__netif_schedule" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6dd73252, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,bluetooth";


MODULE_INFO(srcversion, "5450EBA279448CD63E13821");
