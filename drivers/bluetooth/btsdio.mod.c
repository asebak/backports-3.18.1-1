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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x20899e4d, "sdio_unregister_driver" },
	{ 0x4dfd651a, "sdio_register_driver" },
	{ 0xd7442057, "bt_info" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xdd2d6c21, "skb_queue_head" },
	{ 0x22c71aca, "skb_pull" },
	{ 0x24afd194, "sdio_writesb" },
	{ 0x280f07c2, "skb_push" },
	{ 0x5a354ad3, "skb_dequeue" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x916d03ce, "hci_recv_frame" },
	{ 0x5dd8018b, "skb_put" },
	{ 0x815baba6, "__alloc_skb" },
	{ 0x7944871f, "sdio_readsb" },
	{ 0x338cc888, "sdio_readb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x15fa2168, "sdio_claim_irq" },
	{ 0x3a31235a, "sdio_enable_func" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xfe1c3f19, "sdio_release_host" },
	{ 0x1ed64f2c, "sdio_disable_func" },
	{ 0x9ba03bca, "sdio_release_irq" },
	{ 0x3d081d6a, "sdio_writeb" },
	{ 0xf3f9375, "sdio_claim_host" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x4585b8da, "skb_queue_purge" },
	{ 0xe300bf7, "schedule_work" },
	{ 0xd577203d, "skb_queue_tail" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x649662da, "hci_register_dev" },
	{ 0x23e82f2b, "hci_alloc_dev" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x99b5ce2, "devm_kzalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6b277d5e, "hci_free_dev" },
	{ 0x4183a10a, "hci_unregister_dev" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0xc22f24be, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,compat";

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "279853D597594F161355581");
