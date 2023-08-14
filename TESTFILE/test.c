#include <linux/getprocessinfS22.h>


main(){
struct procdat data;
int a = getprocessinfS22(-1,&data);
printf("%d\n",a);
int b = getprocessinfS22(12,&data);
printf("%ld\n",data.nice);
printf("%ld\n",data.prio);
printf("%d\n",(int)data.pidparent);
printf("%d\n",(int)data.pid);
printf("%d\n",a);

return 0;
}

