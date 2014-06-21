/*
 * hello.c
 * Credits: http://www.tldp.org/LDP/lkmpg/2.6/html/lkmpg.html
 */
 
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#define DRIVER_AUTHOR "Author-man man man man..."
#define DRIVER_DESC "Hello World kernel module for task01"

static int __init hello_init(void)
{
	printk(KERN_INFO "Hello, world\n");
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_INFO "Buh-bye, world\n");
}

module_init(hello_init);
module_exit(hello_exit);

/*
 * Makes the kernel happy!
 */
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_SUPPORTED_DEVICE("Fedora 20 VM");
