/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "question.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

qns_output *
qns_probe_1(qns_input *argp, CLIENT *clnt)
{
	static qns_output clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, qns_probe,
		(xdrproc_t) xdr_qns_input, (caddr_t) argp,
		(xdrproc_t) xdr_qns_output, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

qns_output *
qns_checkanswer_1(qns_input *argp, CLIENT *clnt)
{
	static qns_output clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, qns_checkanswer,
		(xdrproc_t) xdr_qns_input, (caddr_t) argp,
		(xdrproc_t) xdr_qns_output, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

qns_output *
qns_getscore_1(qns_input *argp, CLIENT *clnt)
{
	static qns_output clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, qns_getscore,
		(xdrproc_t) xdr_qns_input, (caddr_t) argp,
		(xdrproc_t) xdr_qns_output, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

qns_output *
qns_getrank_1(qns_input *argp, CLIENT *clnt)
{
	static qns_output clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, qns_getrank,
		(xdrproc_t) xdr_qns_input, (caddr_t) argp,
		(xdrproc_t) xdr_qns_output, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

qns_output *
qns_exit_1(qns_input *argp, CLIENT *clnt)
{
	static qns_output clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, qns_exit,
		(xdrproc_t) xdr_qns_input, (caddr_t) argp,
		(xdrproc_t) xdr_qns_output, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
