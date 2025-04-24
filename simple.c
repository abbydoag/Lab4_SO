#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>
//meotodo 1
static int __init simple_init(void){
    printk(KERN_INFO "Loading Module \nLab 4");
    return 0;
} 
//metodo 2
static void __exit simple_exit(void){
    printk(KERN_INFO "Removing Module \nPS: El mario kart esta caro");
}

module_init(simple_init);
module_exit(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Ejecicio 2 Lab_4");
MODULE_AUTHOR("Abby Donis");