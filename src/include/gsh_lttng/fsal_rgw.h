#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER fsalrgw

#if !defined(GANESHA_LTTNG_FSALRGW_H) || \
	defined(TRACEPOINT_HEADER_MULTI_READ)
#define GANESHA_LTTNG_FSALRGW_H

#include <stdint.h>
#include <lttng/tracepoint.h>

/**
 * Trace
 */
TRACEPOINT_EVENT(
	fsalrgw,
	tp_mdcache,
	TP_ARGS(const char *, function,
		int, line,
		void *, obj_handle),
	TP_FIELDS(
		ctf_string(function, function)
		ctf_integer(int, line, line)
		ctf_integer_hex(void *, obj_handle, obj_handle)
	)
)

TRACEPOINT_LOGLEVEL(
	fsalrgw,
	tp_mdcache,
	TRACE_INFO)

/**
 * Trace rgw_lookup
 */
TRACEPOINT_EVENT(
	fsalrgw,
	rgw_lookup,
	TP_ARGS(const char *, function,
		int, line,
		const char *, path,
		void *, obj_handle,
		const char *, str),
	TP_FIELDS(
		ctf_string(function, function)
		ctf_integer(int, line, line)
		ctf_string(path, path)
		ctf_integer_hex(void *, obj_handle, obj_handle)
		ctf_string(str, str)
	)
)

TRACEPOINT_LOGLEVEL(fsalrgw, rgw_lookup, TRACE_INFO)

/**
 * Trace rgw_getattr
 */
TRACEPOINT_EVENT(
	fsalrgw,
	rgw_getattr,
	TP_ARGS(const char *, function,
		int, line,
		const char *, path,
		void *, rgw_file_handle),
	TP_FIELDS(
		ctf_string(function, function)
		ctf_integer(int, line, line)
		ctf_string(path, path)
		ctf_integer_hex(void *, rgw_file_handle, rgw_file_handle)
	)
)

TRACEPOINT_LOGLEVEL(fsalrgw, rgw_getattr, TRACE_INFO)

/**
 * Trace rgw_fsal_readdir
 */
TRACEPOINT_EVENT(
	fsalrgw,
	rgw_fsal_readdir,
	TP_ARGS(const char *, function,
		int, line,
		void *, obj_handle),
	TP_FIELDS(
		ctf_string(function, function)
		ctf_integer(int, line, line)
		ctf_integer_hex(void *, obj_handle, obj_handle)
	)
)

TRACEPOINT_LOGLEVEL(fsalrgw, rgw_fsal_readdir, TRACE_INFO)


#endif /* GANESHA_LTTNG_FSALRGW_H */

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "gsh_lttng/fsal_rgw.h"

#include <lttng/tracepoint-event.h>
