#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>


static int hello_init(void){
	printk(KERN_ALERT "this is driver  program practice");
	return 0;

}

static void hello_exit(void){
	printk(KERN_ALERT "this is driver program doing firstly");
	return 0;
}


module_init(hello_init);
module_exit(hello_exit);


MODULE_AUTHOR("jyothi");
MODULE_DESCRIPTION("first programm");
MODULE_LICENSE("GPL");

