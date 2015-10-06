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
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0x47022514, "bt_err" },
	{ 0xe300bf7, "schedule_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xf709f70e, "release_firmware" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x8062e3b, "request_firmware" },
	{ 0xa385d0f, "usb_alloc_urb" },
	{ 0x99b5ce2, "devm_kzalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0xb75e1218, "usb_kill_urb" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xc22f24be, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat,bluetooth";

MODULE_ALIAS("usb:v0A5Cp2033d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A7F7D09C30A475331968E4C");
