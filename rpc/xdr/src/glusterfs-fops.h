/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _GLUSTERFS_FOPS_H_RPCGEN
#define _GLUSTERFS_FOPS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#include "compat.h"

enum glusterfs_fop_t {
	GF_FOP_NULL = 0,
	GF_FOP_STAT = 0 + 1,
	GF_FOP_READLINK = 0 + 2,
	GF_FOP_MKNOD = 0 + 3,
	GF_FOP_MKDIR = 0 + 4,
	GF_FOP_UNLINK = 0 + 5,
	GF_FOP_RMDIR = 0 + 6,
	GF_FOP_SYMLINK = 0 + 7,
	GF_FOP_RENAME = 0 + 8,
	GF_FOP_LINK = 0 + 9,
	GF_FOP_TRUNCATE = 0 + 10,
	GF_FOP_OPEN = 0 + 11,
	GF_FOP_READ = 0 + 12,
	GF_FOP_WRITE = 0 + 13,
	GF_FOP_STATFS = 0 + 14,
	GF_FOP_FLUSH = 0 + 15,
	GF_FOP_FSYNC = 0 + 16,
	GF_FOP_SETXATTR = 0 + 17,
	GF_FOP_GETXATTR = 0 + 18,
	GF_FOP_REMOVEXATTR = 0 + 19,
	GF_FOP_OPENDIR = 0 + 20,
	GF_FOP_FSYNCDIR = 0 + 21,
	GF_FOP_ACCESS = 0 + 22,
	GF_FOP_CREATE = 0 + 23,
	GF_FOP_FTRUNCATE = 0 + 24,
	GF_FOP_FSTAT = 0 + 25,
	GF_FOP_LK = 0 + 26,
	GF_FOP_LOOKUP = 0 + 27,
	GF_FOP_READDIR = 0 + 28,
	GF_FOP_INODELK = 0 + 29,
	GF_FOP_FINODELK = 0 + 30,
	GF_FOP_ENTRYLK = 0 + 31,
	GF_FOP_FENTRYLK = 0 + 32,
	GF_FOP_XATTROP = 0 + 33,
	GF_FOP_FXATTROP = 0 + 34,
	GF_FOP_FGETXATTR = 0 + 35,
	GF_FOP_FSETXATTR = 0 + 36,
	GF_FOP_RCHECKSUM = 0 + 37,
	GF_FOP_SETATTR = 0 + 38,
	GF_FOP_FSETATTR = 0 + 39,
	GF_FOP_READDIRP = 0 + 40,
	GF_FOP_FORGET = 0 + 41,
	GF_FOP_RELEASE = 0 + 42,
	GF_FOP_RELEASEDIR = 0 + 43,
	GF_FOP_GETSPEC = 0 + 44,
	GF_FOP_FREMOVEXATTR = 0 + 45,
	GF_FOP_FALLOCATE = 0 + 46,
	GF_FOP_DISCARD = 0 + 47,
	GF_FOP_ZEROFILL = 0 + 48,
	GF_FOP_IPC = 0 + 49,
	GF_FOP_SEEK = 0 + 50,
	GF_FOP_LEASE = 0 + 51,
	GF_FOP_COMPOUND = 0 + 52,
	GF_FOP_GETACTIVELK = 0 + 53,
	GF_FOP_SETACTIVELK = 0 + 54,
	GF_FOP_MAXVALUE = 0 + 55,
};
typedef enum glusterfs_fop_t glusterfs_fop_t;

enum glusterfs_event_t {
	GF_EVENT_PARENT_UP = 1,
	GF_EVENT_POLLIN = 1 + 1,
	GF_EVENT_POLLOUT = 1 + 2,
	GF_EVENT_POLLERR = 1 + 3,
	GF_EVENT_CHILD_UP = 1 + 4,
	GF_EVENT_CHILD_DOWN = 1 + 5,
	GF_EVENT_CHILD_CONNECTING = 1 + 6,
	GF_EVENT_TRANSPORT_CLEANUP = 9,
	GF_EVENT_TRANSPORT_CONNECTED = 9 + 1,
	GF_EVENT_VOLFILE_MODIFIED = 9 + 2,
	GF_EVENT_GRAPH_NEW = 9 + 3,
	GF_EVENT_TRANSLATOR_INFO = 9 + 4,
	GF_EVENT_TRANSLATOR_OP = 9 + 5,
	GF_EVENT_AUTH_FAILED = 9 + 6,
	GF_EVENT_VOLUME_DEFRAG = 9 + 7,
	GF_EVENT_PARENT_DOWN = 9 + 8,
	GF_EVENT_VOLUME_BARRIER_OP = 9 + 9,
	GF_EVENT_UPCALL = 9 + 10,
	GF_EVENT_SCRUB_STATUS = 9 + 11,
	GF_EVENT_SOME_DESCENDENT_DOWN = 9 + 12,
	GF_EVENT_SCRUB_ONDEMAND = 9 + 13,
	GF_EVENT_SOME_DESCENDENT_UP = 9 + 14,
	GF_EVENT_MAXVAL = 9 + 15,
};
typedef enum glusterfs_event_t glusterfs_event_t;

enum glusterfs_compound_fop_t {
	GF_CFOP_NON_PREDEFINED = 0,
	GF_CFOP_XATTROP_WRITEV = 0 + 1,
	GF_CFOP_XATTROP_UNLOCK = 0 + 2,
	GF_CFOP_PUT = 0 + 3,
	GF_CFOP_MAXVALUE = 0 + 4,
};
typedef enum glusterfs_compound_fop_t glusterfs_compound_fop_t;

enum glusterfs_mgmt_t {
	GF_MGMT_NULL = 0,
	GF_MGMT_MAXVALUE = 0 + 1,
};
typedef enum glusterfs_mgmt_t glusterfs_mgmt_t;

enum gf_op_type_t {
	GF_OP_TYPE_NULL = 0,
	GF_OP_TYPE_FOP = 0 + 1,
	GF_OP_TYPE_MGMT = 0 + 2,
	GF_OP_TYPE_MAX = 0 + 3,
};
typedef enum gf_op_type_t gf_op_type_t;

enum glusterfs_lk_cmds_t {
	GF_LK_GETLK = 0,
	GF_LK_SETLK = 0 + 1,
	GF_LK_SETLKW = 0 + 2,
	GF_LK_RESLK_LCK = 0 + 3,
	GF_LK_RESLK_LCKW = 0 + 4,
	GF_LK_RESLK_UNLCK = 0 + 5,
	GF_LK_GETLK_FD = 0 + 6,
};
typedef enum glusterfs_lk_cmds_t glusterfs_lk_cmds_t;

enum glusterfs_lk_types_t {
	GF_LK_F_RDLCK = 0,
	GF_LK_F_WRLCK = 0 + 1,
	GF_LK_F_UNLCK = 0 + 2,
	GF_LK_EOL = 0 + 3,
};
typedef enum glusterfs_lk_types_t glusterfs_lk_types_t;

enum gf_lease_types_t {
	NONE = 0,
	GF_RD_LEASE = 1,
	GF_RW_LEASE = 2,
	GF_LEASE_MAX_TYPE = 2 + 1,
};
typedef enum gf_lease_types_t gf_lease_types_t;

enum gf_lease_cmds_t {
	GF_GET_LEASE = 1,
	GF_SET_LEASE = 2,
	GF_UNLK_LEASE = 3,
};
typedef enum gf_lease_cmds_t gf_lease_cmds_t;
#define LEASE_ID_SIZE 16 /* 128bits */

struct gf_lease {
	gf_lease_cmds_t cmd;
	gf_lease_types_t lease_type;
	char lease_id[LEASE_ID_SIZE];
	u_int lease_flags;
};
typedef struct gf_lease gf_lease;

enum glusterfs_lk_recovery_cmds_t {
	F_RESLK_LCK = 200,
	F_RESLK_LCKW = 200 + 1,
	F_RESLK_UNLCK = 200 + 2,
	F_GETLK_FD = 200 + 3,
};
typedef enum glusterfs_lk_recovery_cmds_t glusterfs_lk_recovery_cmds_t;

enum gf_lk_domain_t {
	GF_LOCK_POSIX = 0,
	GF_LOCK_INTERNAL = 1,
};
typedef enum gf_lk_domain_t gf_lk_domain_t;

enum entrylk_cmd {
	ENTRYLK_LOCK = 0,
	ENTRYLK_UNLOCK = 1,
	ENTRYLK_LOCK_NB = 2,
};
typedef enum entrylk_cmd entrylk_cmd;

enum entrylk_type {
	ENTRYLK_RDLCK = 0,
	ENTRYLK_WRLCK = 1,
};
typedef enum entrylk_type entrylk_type;
#define GF_MAX_LOCK_OWNER_LEN 1024 /* 1kB as per NLM */
#define GF_LKOWNER_BUF_SIZE ((GF_MAX_LOCK_OWNER_LEN * 2) + (GF_MAX_LOCK_OWNER_LEN / 8))

struct gf_lkowner_t {
	int len;
	char data[GF_MAX_LOCK_OWNER_LEN];
};
typedef struct gf_lkowner_t gf_lkowner_t;

enum gf_xattrop_flags_t {
	GF_XATTROP_ADD_ARRAY = 0,
	GF_XATTROP_ADD_ARRAY64 = 1,
	GF_XATTROP_OR_ARRAY = 2,
	GF_XATTROP_AND_ARRAY = 3,
	GF_XATTROP_GET_AND_SET = 4,
	GF_XATTROP_ADD_ARRAY_WITH_DEFAULT = 5,
	GF_XATTROP_ADD_ARRAY64_WITH_DEFAULT = 6,
};
typedef enum gf_xattrop_flags_t gf_xattrop_flags_t;

enum gf_seek_what_t {
	GF_SEEK_DATA = 0,
	GF_SEEK_HOLE = 1,
};
typedef enum gf_seek_what_t gf_seek_what_t;

enum gf_upcall_flags_t {
	GF_UPCALL_NULL = 0,
	GF_UPCALL = 1,
	GF_UPCALL_CI_STAT = 2,
	GF_UPCALL_CI_XATTR = 3,
	GF_UPCALL_CI_RENAME = 4,
	GF_UPCALL_CI_NLINK = 5,
	GF_UPCALL_CI_FORGET = 6,
	GF_UPCALL_LEASE_RECALL = 7,
	GF_UPCALL_FLAGS_MAXVALUE = 8,
};
typedef enum gf_upcall_flags_t gf_upcall_flags_t;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_glusterfs_fop_t (XDR *, glusterfs_fop_t*);
extern  bool_t xdr_glusterfs_event_t (XDR *, glusterfs_event_t*);
extern  bool_t xdr_glusterfs_compound_fop_t (XDR *, glusterfs_compound_fop_t*);
extern  bool_t xdr_glusterfs_mgmt_t (XDR *, glusterfs_mgmt_t*);
extern  bool_t xdr_gf_op_type_t (XDR *, gf_op_type_t*);
extern  bool_t xdr_glusterfs_lk_cmds_t (XDR *, glusterfs_lk_cmds_t*);
extern  bool_t xdr_glusterfs_lk_types_t (XDR *, glusterfs_lk_types_t*);
extern  bool_t xdr_gf_lease_types_t (XDR *, gf_lease_types_t*);
extern  bool_t xdr_gf_lease_cmds_t (XDR *, gf_lease_cmds_t*);
extern  bool_t xdr_gf_lease (XDR *, gf_lease*);
extern  bool_t xdr_glusterfs_lk_recovery_cmds_t (XDR *, glusterfs_lk_recovery_cmds_t*);
extern  bool_t xdr_gf_lk_domain_t (XDR *, gf_lk_domain_t*);
extern  bool_t xdr_entrylk_cmd (XDR *, entrylk_cmd*);
extern  bool_t xdr_entrylk_type (XDR *, entrylk_type*);
extern  bool_t xdr_gf_lkowner_t (XDR *, gf_lkowner_t*);
extern  bool_t xdr_gf_xattrop_flags_t (XDR *, gf_xattrop_flags_t*);
extern  bool_t xdr_gf_seek_what_t (XDR *, gf_seek_what_t*);
extern  bool_t xdr_gf_upcall_flags_t (XDR *, gf_upcall_flags_t*);

#else /* K&R C */
extern bool_t xdr_glusterfs_fop_t ();
extern bool_t xdr_glusterfs_event_t ();
extern bool_t xdr_glusterfs_compound_fop_t ();
extern bool_t xdr_glusterfs_mgmt_t ();
extern bool_t xdr_gf_op_type_t ();
extern bool_t xdr_glusterfs_lk_cmds_t ();
extern bool_t xdr_glusterfs_lk_types_t ();
extern bool_t xdr_gf_lease_types_t ();
extern bool_t xdr_gf_lease_cmds_t ();
extern bool_t xdr_gf_lease ();
extern bool_t xdr_glusterfs_lk_recovery_cmds_t ();
extern bool_t xdr_gf_lk_domain_t ();
extern bool_t xdr_entrylk_cmd ();
extern bool_t xdr_entrylk_type ();
extern bool_t xdr_gf_lkowner_t ();
extern bool_t xdr_gf_xattrop_flags_t ();
extern bool_t xdr_gf_seek_what_t ();
extern bool_t xdr_gf_upcall_flags_t ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_GLUSTERFS_FOPS_H_RPCGEN */
