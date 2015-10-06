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
	{ 0xd3a204c1, "platform_driver_unregister" },
	{ 0xefd55b63, "platform_driver_register" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x280f07c2, "skb_push" },
	{ 0xac4cde56, "kfree_skb" },
	{ 0x916d03ce, "hci_recv_frame" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd2b2afe, "complete" },
	{ 0xd1b1e58, "wait_for_completion_timeout" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7b1a5931, "st_register" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x649662da, "hci_register_dev" },
	{ 0x23e82f2b, "hci_alloc_dev" },
	{ 0x99b5ce2, "devm_kzalloc" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x6b277d5e, "hci_free_dev" },
	{ 0x4183a10a, "hci_unregister_dev" },
	{ 0x27e1a049, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x47022514, "bt_err" },
	{ 0x39a36960, "st_unregister" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc22f24be, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,bluetooth,st_drv";


MODULE_INFO(srcversion, "8B1EAD9913FB1F2A51A8DEA");
