#include <linux/kobject.h>
#include <linux/module.h>
#include <linux/init.h>

static struct kobject *lava_kobj = NULL;

static int __init lava_bus_init(void)
{
    int res = 0;

    lava_kobj = kobject_create_and_add("lava", NULL);

    return res;
}

static void __exit lava_exit(void)
{
}

module_init(lava_init);
module_exit(lava_exit);
MODULE_DESCRIPTION("Lava device driver");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("EmbeddedOS <congnt264@gmail.com>");
