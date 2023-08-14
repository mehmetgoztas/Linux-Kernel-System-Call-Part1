#include <linux/getprocessinfS22.h>
#include <linux/types.h>
#include <linux/sched.h>
#include <linux/kernel.h>
#include <asm/current.h>
#include <asm/system.h>
#include <asm/uaccess.h>

asmlinkage int sys_getprocessinfS22(int f,struct procdat *data){
	
	cli();
	struct procdat getprocessinfS22;

	if(f <= 22 && f > 0){
	  copy_from_user(&getprocessinfS22, data, sizeof(struct procdat));
	  getprocessinfS22.counter = current-> counter;
       	  getprocessinfS22.nice = current-> nice;
	  getprocessinfS22.pid = current-> pid;
	  getprocessinfS22.pidparent = current-> p_pptr -> pid;
	  getprocessinfS22.uid = (long)current-> uid;
	  getprocessinfS22.priority = current-> rt_priority;
	  getprocessinfS22.state = current->state;
	  getprocessinfS22.policy = current-> policy;
	  getprocessinfS22.prio = 20-(current -> nice);
	  copy_to_user(data, &getprocessinfS22,sizeof(struct procdat));
	}
	else if(f > 22){
	  copy_from_user(&getprocessinfS22, data, sizeof(struct procdat));
	  getprocessinfS22.state = current->state;
	  copy_to_user(data, &getprocessinfS22,sizeof(struct procdat));
	  return 0;
	}
	else{
	  return -1;
	}

	sti();
	return 0;

}
