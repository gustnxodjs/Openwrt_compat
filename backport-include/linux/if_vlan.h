#ifndef __BACKPORT_LINUX_IF_VLAN_H_
#define __BACKPORT_LINUX_IF_VLAN_H_
#include_next <linux/if_vlan.h>

#if LINUX_VERSION_CODE < KERNEL_VERSION(3,10,0)
#define vlan_insert_tag(__skb, __vlan_proto, __vlan_tci)	vlan_insert_tag(__skb, __vlan_tci)
#define __vlan_put_tag(__skb, __vlan_proto, __vlan_tci)		__vlan_put_tag(__skb, __vlan_tci)
#define vlan_put_tag(__skb, __vlan_proto, __vlan_tci)		vlan_put_tag(__skb, __vlan_tci)
#define __vlan_hwaccel_put_tag(__skb, __vlan_proto, __vlan_tag)	__vlan_hwaccel_put_tag(__skb, __vlan_tag)

#define __vlan_find_dev_deep(__real_dev, __vlan_proto, __vlan_id) __vlan_find_dev_deep(__real_dev, __vlan_id) 

#endif 

#ifndef VLAN_PRIO_MASK
#define VLAN_PRIO_MASK		0xe000 /* Priority Code Point */
#endif

#ifndef VLAN_PRIO_SHIFT
#define VLAN_PRIO_SHIFT		13
#endif

#endif /* __BACKPORT_LINUX_IF_VLAN_H_ */
