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
	{ 0x6b5db0a8, "ath6kl_core_destroy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf88c3301, "sg_init_table" },
	{ 0xddcbf3fc, "ath6kl_hif_intr_bh_handler" },
	{ 0x459da14, "ath6kl_core_cleanup" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x32f7e276, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaebf074, "dev_set_drvdata" },
	{ 0x91cfb84a, "ath6kl_hif_rw_comp_handler" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x3ad9e427, "ath6kl_dbg" },
	{ 0x3ad2e9f2, "ath6kl_core_create" },
	{ 0x86c8ad2e, "malloc_sizes" },
	{ 0x24afd194, "sdio_writesb" },
	{ 0x3a31235a, "sdio_enable_func" },
	{ 0x15fa2168, "sdio_claim_irq" },
	{ 0xef34bde5, "mmc_wait_for_cmd" },
	{ 0xb08ba1ba, "_raw_spin_lock_bh" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x92c90e22, "queue_work" },
	{ 0x48efa767, "mutex_unlock" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x7d11c268, "jiffies" },
	{ 0x712779d7, "sdio_get_host_pm_caps" },
	{ 0x29e69cf, "__tracepoint_ath6kl_sdio_scat" },
	{ 0x536ff674, "__init_waitqueue_head" },
	{ 0xe9a59ee1, "mmc_wait_for_req" },
	{ 0x4c6ddcb4, "ath6kl_err" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x27cf1694, "ath6kl_warn" },
	{ 0xb0fab0ca, "__mutex_init" },
	{ 0xb8e5b00c, "ath6kl_dbg_dump" },
	{ 0x49143d74, "mmc_set_data_timeout" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xffbf6de, "mutex_lock" },
	{ 0x3f85afcf, "ath6kl_cfg80211_suspend" },
	{ 0x7944871f, "sdio_readsb" },
	{ 0x20899e4d, "sdio_unregister_driver" },
	{ 0x2bcd81ca, "sdio_set_host_pm_flags" },
	{ 0xd2e6c88b, "ath6kl_cfg80211_resume" },
	{ 0x3b1ecf00, "ath6kl_stop_txrx" },
	{ 0x15c30e6, "_raw_spin_unlock_bh" },
	{ 0x9ba03bca, "sdio_release_irq" },
	{ 0xb18af2f0, "ath6kl_core_init" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x5952a882, "__raw_spin_lock_init" },
	{ 0x8758668a, "kmem_cache_alloc_trace" },
	{ 0xa5a2fc3, "__wake_up" },
	{ 0xb6c4b943, "sdio_memcpy_toio" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x38ee1586, "prepare_to_wait" },
	{ 0x73ec879a, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4dfd651a, "sdio_register_driver" },
	{ 0x84307324, "sdio_memcpy_fromio" },
	{ 0xf3f9375, "sdio_claim_host" },
	{ 0xc22f24be, "dev_get_drvdata" },
	{ 0xd76abf5e, "sdio_set_block_size" },
	{ 0x1ed64f2c, "sdio_disable_func" },
	{ 0x640c344e, "__tracepoint_ath6kl_sdio" },
	{ 0xfe1c3f19, "sdio_release_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath6kl_core,compat";

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");
MODULE_ALIAS("sdio:c*v0271d0402*");

MODULE_INFO(srcversion, "CDB13056DC6D1D7C2E8B9F7");
