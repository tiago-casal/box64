/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.5.0.24) *
 *******************************************************************/
#ifndef __wrappedlibssl3TYPES_H_
#define __wrappedlibssl3TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);
typedef int32_t (*iFpp_t)(void*, void*);
typedef void (*vFpip_t)(void*, int32_t, void*);
typedef void (*vFppp_t)(void*, void*, void*);
typedef intptr_t (*lFpip_t)(void*, int32_t, void*);
typedef int32_t (*iFlpppp_t)(intptr_t, void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(SSL_CTX_get_default_passwd_cb, pFp_t) \
	GO(SSL_CTX_get_verify_callback, pFp_t) \
	GO(SSL_get_verify_callback, pFp_t) \
	GO(SSL_CTX_sess_set_new_cb, vFpp_t) \
	GO(SSL_CTX_set_client_cert_cb, vFpp_t) \
	GO(SSL_CTX_set_cookie_generate_cb, vFpp_t) \
	GO(SSL_CTX_set_cookie_verify_cb, vFpp_t) \
	GO(SSL_CTX_set_default_passwd_cb, vFpp_t) \
	GO(SSL_CTX_set_keylog_callback, vFpp_t) \
	GO(SSL_CTX_set_msg_callback, vFpp_t) \
	GO(SSL_set_info_callback, vFpp_t) \
	GO(SSL_set_msg_callback, vFpp_t) \
	GO(SSL_set_psk_client_callback, vFpp_t) \
	GO(SSL_set_psk_server_callback, vFpp_t) \
	GO(SSL_set_psk_use_session_callback, vFpp_t) \
	GO(BIO_meth_set_create, iFpp_t) \
	GO(BIO_meth_set_ctrl, iFpp_t) \
	GO(BIO_meth_set_destroy, iFpp_t) \
	GO(BIO_meth_set_puts, iFpp_t) \
	GO(BIO_meth_set_read, iFpp_t) \
	GO(BIO_meth_set_write, iFpp_t) \
	GO(SSL_CTX_set_verify, vFpip_t) \
	GO(SSL_set_verify, vFpip_t) \
	GO(SSL_CTX_set_alpn_select_cb, vFppp_t) \
	GO(SSL_CTX_set_cert_verify_callback, vFppp_t) \
	GO(SSL_CTX_set_next_proto_select_cb, vFppp_t) \
	GO(SSL_CTX_callback_ctrl, lFpip_t) \
	GO(SSL_callback_ctrl, lFpip_t) \
	GO(SSL_get_ex_new_index, iFlpppp_t)

#endif // __wrappedlibssl3TYPES_H_
