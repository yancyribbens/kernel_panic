/*
 * hello-3.c
 * Credits: http://www.tldp.org/LDP/lkmpg/2.6/html/lkmpg.html
 */
 
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#define DRIVER_AUTHOR "Woodrow Keifenheim"
#define DRIVER_DESC "Hello World kernel module for task01"

static int hello4_data __initdata = 4;

static int __init hello4_init(void)
{
	printk(KERN_INFO "Hello, world %d\n", hello4_data);
	return 0;
}

static void __exit hello4_exit(void)
{
	printk(KERN_INFO "Buh-bye, world %d\n", hello4_data);
}

module_init(hello4_init);
module_exit(hello4_exit);

/*
 * Makes the kernel happy!
 */
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_SUPPORTED_DEVICE("Fedora 20 VM");
