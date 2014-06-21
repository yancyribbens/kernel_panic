/*
 * hello-2.c
 * Credits: http://www.tldp.org/LDP/lkmpg/2.6/html/lkmpg.html
 */
 
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello2_init(void)
{
	printk(KERN_INFO "Hello, world 2\n");
	return 0;
}

static void __exit hello2_exit(void)
{
	printk(KERN_INFO "Buh-bye, world 2\n");
}

module_init(hello2_init);
module_exit(hello2_exit);
