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
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xb2f0a763, "_raw_spin_unlock" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0xe300bf7, "schedule_work" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb75e1218, "usb_kill_urb" },
	{ 0x2d410025, "usb_deregister_dev" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x3e7b4ae3, "usb_autopm_get_interface" },
	{ 0x7d11c268, "jiffies" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x75a26fbd, "dev_err" },
	{ 0xc22e75d2, "_raw_spin_unlock_irqrestore" },
	{ 0xa27cdf1f, "usb_deregister" },
	{ 0xf178e73b, "mutex_lock_interruptible" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0xa56e86d9, "usb_register_dev" },
	{ 0x7e1a5ba3, "_raw_spin_unlock_irq" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0xebb35bf8, "noop_llseek" },
	{ 0xd07c8db4, "_dev_info" },
	{ 0x644ab02, "usb_submit_urb" },
	{ 0x1000e51, "schedule" },
	{ 0x1c7691ed, "_raw_spin_lock_irq" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0x166ec38b, "_raw_spin_lock" },
	{ 0xafa620b7, "_raw_spin_lock_irqsave" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x38ee1586, "prepare_to_wait" },
	{ 0x3976e757, "usb_register_driver" },
	{ 0x73ec879a, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd11fd647, "usb_free_urb" },
	{ 0x4b7fde60, "usb_autopm_put_interface" },
	{ 0xa385d0f, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=compat";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc09ip*in*");

MODULE_INFO(srcversion, "F77B92264A20685664C293C");
