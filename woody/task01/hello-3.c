/*
 * hello-3.c
 * Credits: http://www.tldp.org/LDP/lkmpg/2.6/html/lkmpg.html
 */
 
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int hello3_data __initdata = 3;

static int __init hello3_init(void)
{
	printk(KERN_INFO "Hello, world %d\n", hello3_data);
	return 0;
}

static void __exit hello3_exit(void)
{
	printk(KERN_INFO "Buh-bye, world %d\n", hello3_data);
}

module_init(hello3_init);
module_exit(hello3_exit);
