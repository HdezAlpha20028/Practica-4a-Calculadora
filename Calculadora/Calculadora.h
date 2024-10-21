/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALCULADORA_H_RPCGEN
#define _CALCULADORA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct dupla_int {
	int a;
	int b;
};
typedef struct dupla_int dupla_int;

#define CALCULADORA_PROG 0x23451111
#define CALCULADORA_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define SUMA 1
extern  int * suma_1(dupla_int *, CLIENT *);
extern  int * suma_1_svc(dupla_int *, struct svc_req *);
#define RESTA 2
extern  int * resta_1(dupla_int *, CLIENT *);
extern  int * resta_1_svc(dupla_int *, struct svc_req *);
#define MULTIPLICA 3
extern  int * multiplica_1(dupla_int *, CLIENT *);
extern  int * multiplica_1_svc(dupla_int *, struct svc_req *);
#define DIVIDE 4
extern  int * divide_1(dupla_int *, CLIENT *);
extern  int * divide_1_svc(dupla_int *, struct svc_req *);
extern int calculadora_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SUMA 1
extern  int * suma_1();
extern  int * suma_1_svc();
#define RESTA 2
extern  int * resta_1();
extern  int * resta_1_svc();
#define MULTIPLICA 3
extern  int * multiplica_1();
extern  int * multiplica_1_svc();
#define DIVIDE 4
extern  int * divide_1();
extern  int * divide_1_svc();
extern int calculadora_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_dupla_int (XDR *, dupla_int*);

#else /* K&R C */
extern bool_t xdr_dupla_int ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALCULADORA_H_RPCGEN */
