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
	{ 0x942dc435, "module_layout" },
	{ 0x9f94f925, "pcmcia_dev_present" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x1fedf0f4, "__request_region" },
	{ 0xd83ea029, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x5d375018, "pcmcia_enable_device" },
	{ 0x349cba85, "strchr" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x6a1ceaf2, "dev_set_drvdata" },
	{ 0xc1e7cdc7, "pcmcia_register_driver" },
	{ 0xb254854e, "usb_init_urb" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x4a4fab21, "usb_reset_endpoint" },
	{ 0x2c74531e, "pci_disable_device" },
	{ 0x79144edd, "i2c_transfer" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe0130dce, "usb_kill_urb" },
	{ 0xec6c52c, "usb_deregister_dev" },
	{ 0xf2eff307, "remove_proc_entry" },
	{ 0x1c044cbc, "device_destroy" },
	{ 0x6c2f5f92, "usb_reset_configuration" },
	{ 0xaffa0a94, "parport_find_base" },
	{ 0xf287ea9c, "__register_chrdev" },
	{ 0x8b631ba0, "driver_for_each_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xfb5f846a, "cancel_delayed_work_sync" },
	{ 0x9297e8ae, "mutex_unlock" },
	{ 0x595d8c1e, "pci_bus_write_config_word" },
	{ 0x91715312, "sprintf" },
	{ 0xfca96a39, "pcmcia_request_io" },
	{ 0x7d11c268, "jiffies" },
	{ 0xad37de41, "__netdev_alloc_skb" },
	{ 0xacd41431, "netif_rx" },
	{ 0xf432dd3d, "__init_waitqueue_head" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xff7559e4, "ioport_resource" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x5310fe6d, "current_task" },
	{ 0x2e2b40d2, "strncat" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x562b9321, "usb_deregister" },
	{ 0x3e18b1c5, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x6ff5f4cc, "parport_unregister_device" },
	{ 0x12e34f2e, "usb_set_interface" },
	{ 0x6b47929d, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x607533d9, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x22766ce1, "usb_register_dev" },
	{ 0xc8fd129f, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x5ae4fa58, "mutex_lock" },
	{ 0x28f46d49, "device_create" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x81420ac3, "parport_claim" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xc24bd382, "pcmcia_loop_config" },
	{ 0x7383e503, "init_net" },
	{ 0xa697d7f6, "parport_release" },
	{ 0x559e4f9b, "i2c_del_adapter" },
	{ 0xa8a6f639, "__check_region" },
	{ 0x9642e329, "usb_submit_urb" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x466f16e, "pci_bus_read_config_word" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xbc99cf1e, "usb_reset_device" },
	{ 0xf1bea6f1, "schedule_delayed_work" },
	{ 0x26777fe8, "parport_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x3dad62f1, "usb_clear_halt" },
	{ 0xca0af888, "alloc_netdev_mqs" },
	{ 0x9276b9c9, "create_proc_entry" },
	{ 0x7c61340c, "__release_region" },
	{ 0xa3313886, "pci_unregister_driver" },
	{ 0x3dc4df62, "__dev_get_by_name" },
	{ 0xa2e429a9, "kmem_cache_alloc_trace" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xadb5559d, "param_ops_byte" },
	{ 0xcf21d241, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0x4845c423, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xc9394754, "pcmcia_unregister_driver" },
	{ 0x8b1ce044, "__pci_register_driver" },
	{ 0xdeb87602, "usb_register_driver" },
	{ 0xec35ed81, "class_destroy" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0x2ece1902, "unregister_netdev" },
	{ 0xbb7e36e8, "i2c_bit_add_bus" },
	{ 0x28318305, "snprintf" },
	{ 0xde861d8f, "__netif_schedule" },
	{ 0xb0e602eb, "memmove" },
	{ 0x6981228d, "consume_skb" },
	{ 0x487d9343, "param_ops_ushort" },
	{ 0x43afb8ef, "pcmcia_disable_device" },
	{ 0xf28c90c8, "skb_put" },
	{ 0xfa9023e1, "pci_enable_device" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x491f0a43, "__class_create" },
	{ 0x466649c3, "dev_get_drvdata" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,parport,i2c-algo-bit";

MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("pci:v0000001Cd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pcmcia:m0377c0001f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "DD1875A37B0FA1F617D7650");
