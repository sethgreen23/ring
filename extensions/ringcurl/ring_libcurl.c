#include "ring.h"

/*
**  Copyright (c) 2013-2016 Mahmoud Fayed <msfclipper@yahoo.com>
*/

#include <curl/curl.h>
RING_FUNC(ring_get_curlopt_verbose)
{
	RING_API_RETNUMBER(CURLOPT_VERBOSE);
}

RING_FUNC(ring_get_curlopt_header)
{
	RING_API_RETNUMBER(CURLOPT_HEADER);
}

RING_FUNC(ring_get_curlopt_noprogress)
{
	RING_API_RETNUMBER(CURLOPT_NOPROGRESS);
}

RING_FUNC(ring_get_curlopt_nosignal)
{
	RING_API_RETNUMBER(CURLOPT_NOSIGNAL);
}

RING_FUNC(ring_get_curlopt_wildcardmatch)
{
	RING_API_RETNUMBER(CURLOPT_WILDCARDMATCH);
}

RING_FUNC(ring_get_curlopt_writefunction)
{
	RING_API_RETNUMBER(CURLOPT_WRITEFUNCTION);
}

RING_FUNC(ring_get_curlopt_writedata)
{
	RING_API_RETNUMBER(CURLOPT_WRITEDATA);
}

RING_FUNC(ring_get_curlopt_readfunction)
{
	RING_API_RETNUMBER(CURLOPT_READFUNCTION);
}

RING_FUNC(ring_get_curlopt_readdata)
{
	RING_API_RETNUMBER(CURLOPT_READDATA);
}

RING_FUNC(ring_get_curlopt_ioctlfunction)
{
	RING_API_RETNUMBER(CURLOPT_IOCTLFUNCTION);
}

RING_FUNC(ring_get_curlopt_ioctldata)
{
	RING_API_RETNUMBER(CURLOPT_IOCTLDATA);
}

RING_FUNC(ring_get_curlopt_seekfunction)
{
	RING_API_RETNUMBER(CURLOPT_SEEKFUNCTION);
}

RING_FUNC(ring_get_curlopt_seekdata)
{
	RING_API_RETNUMBER(CURLOPT_SEEKDATA);
}

RING_FUNC(ring_get_curlopt_sockoptfunction)
{
	RING_API_RETNUMBER(CURLOPT_SOCKOPTFUNCTION);
}

RING_FUNC(ring_get_curlopt_sockoptdata)
{
	RING_API_RETNUMBER(CURLOPT_SOCKOPTDATA);
}

RING_FUNC(ring_get_curlopt_opensocketfunction)
{
	RING_API_RETNUMBER(CURLOPT_OPENSOCKETFUNCTION);
}

RING_FUNC(ring_get_curlopt_opensocketdata)
{
	RING_API_RETNUMBER(CURLOPT_OPENSOCKETDATA);
}

RING_FUNC(ring_get_curlopt_closesocketfunction)
{
	RING_API_RETNUMBER(CURLOPT_CLOSESOCKETFUNCTION);
}

RING_FUNC(ring_get_curlopt_closesocketdata)
{
	RING_API_RETNUMBER(CURLOPT_CLOSESOCKETDATA);
}

RING_FUNC(ring_get_curlopt_progressfunction)
{
	RING_API_RETNUMBER(CURLOPT_PROGRESSFUNCTION);
}

RING_FUNC(ring_get_curlopt_progressdata)
{
	RING_API_RETNUMBER(CURLOPT_PROGRESSDATA);
}

RING_FUNC(ring_get_curlopt_xferinfofunction)
{
	RING_API_RETNUMBER(CURLOPT_XFERINFOFUNCTION);
}

RING_FUNC(ring_get_curlopt_xferinfodata)
{
	RING_API_RETNUMBER(CURLOPT_XFERINFODATA);
}

RING_FUNC(ring_get_curlopt_headerfunction)
{
	RING_API_RETNUMBER(CURLOPT_HEADERFUNCTION);
}

RING_FUNC(ring_get_curlopt_headerdata)
{
	RING_API_RETNUMBER(CURLOPT_HEADERDATA);
}

RING_FUNC(ring_get_curlopt_debugfunction)
{
	RING_API_RETNUMBER(CURLOPT_DEBUGFUNCTION);
}

RING_FUNC(ring_get_curlopt_debugdata)
{
	RING_API_RETNUMBER(CURLOPT_DEBUGDATA);
}

RING_FUNC(ring_get_curlopt_ssl_ctx_function)
{
	RING_API_RETNUMBER(CURLOPT_SSL_CTX_FUNCTION);
}

RING_FUNC(ring_get_curlopt_ssl_ctx_data)
{
	RING_API_RETNUMBER(CURLOPT_SSL_CTX_DATA);
}

RING_FUNC(ring_get_curlopt_conv_to_network_function)
{
	RING_API_RETNUMBER(CURLOPT_CONV_TO_NETWORK_FUNCTION);
}

RING_FUNC(ring_get_curlopt_conv_from_network_function)
{
	RING_API_RETNUMBER(CURLOPT_CONV_FROM_NETWORK_FUNCTION);
}

RING_FUNC(ring_get_curlopt_conv_from_utf8_function)
{
	RING_API_RETNUMBER(CURLOPT_CONV_FROM_UTF8_FUNCTION);
}

RING_FUNC(ring_get_curlopt_interleavefunction)
{
	RING_API_RETNUMBER(CURLOPT_INTERLEAVEFUNCTION);
}

RING_FUNC(ring_get_curlopt_interleavedata)
{
	RING_API_RETNUMBER(CURLOPT_INTERLEAVEDATA);
}

RING_FUNC(ring_get_curlopt_chunk_bgn_function)
{
	RING_API_RETNUMBER(CURLOPT_CHUNK_BGN_FUNCTION);
}

RING_FUNC(ring_get_curlopt_chunk_end_function)
{
	RING_API_RETNUMBER(CURLOPT_CHUNK_END_FUNCTION);
}

RING_FUNC(ring_get_curlopt_chunk_data)
{
	RING_API_RETNUMBER(CURLOPT_CHUNK_DATA);
}

RING_FUNC(ring_get_curlopt_fnmatch_function)
{
	RING_API_RETNUMBER(CURLOPT_FNMATCH_FUNCTION);
}

RING_FUNC(ring_get_curlopt_fnmatch_data)
{
	RING_API_RETNUMBER(CURLOPT_FNMATCH_DATA);
}

RING_FUNC(ring_get_curlopt_errorbuffer)
{
	RING_API_RETNUMBER(CURLOPT_ERRORBUFFER);
}

RING_FUNC(ring_get_curlopt_stderr)
{
	RING_API_RETNUMBER(CURLOPT_STDERR);
}

RING_FUNC(ring_get_curlopt_failonerror)
{
	RING_API_RETNUMBER(CURLOPT_FAILONERROR);
}

RING_FUNC(ring_get_curlopt_url)
{
	RING_API_RETNUMBER(CURLOPT_URL);
}

RING_FUNC(ring_get_curlopt_protocols)
{
	RING_API_RETNUMBER(CURLOPT_PROTOCOLS);
}

RING_FUNC(ring_get_curlopt_redir_protocols)
{
	RING_API_RETNUMBER(CURLOPT_REDIR_PROTOCOLS);
}

RING_FUNC(ring_get_curlopt_proxy)
{
	RING_API_RETNUMBER(CURLOPT_PROXY);
}

RING_FUNC(ring_get_curlopt_proxyport)
{
	RING_API_RETNUMBER(CURLOPT_PROXYPORT);
}

RING_FUNC(ring_get_curlopt_proxytype)
{
	RING_API_RETNUMBER(CURLOPT_PROXYTYPE);
}

RING_FUNC(ring_get_curlopt_noproxy)
{
	RING_API_RETNUMBER(CURLOPT_NOPROXY);
}

RING_FUNC(ring_get_curlopt_httpproxytunnel)
{
	RING_API_RETNUMBER(CURLOPT_HTTPPROXYTUNNEL);
}

RING_FUNC(ring_get_curlopt_socks5_gssapi_service)
{
	RING_API_RETNUMBER(CURLOPT_SOCKS5_GSSAPI_SERVICE);
}

RING_FUNC(ring_get_curlopt_socks5_gssapi_nec)
{
	RING_API_RETNUMBER(CURLOPT_SOCKS5_GSSAPI_NEC);
}

RING_FUNC(ring_get_curlopt_interface)
{
	RING_API_RETNUMBER(CURLOPT_INTERFACE);
}

RING_FUNC(ring_get_curlopt_localport)
{
	RING_API_RETNUMBER(CURLOPT_LOCALPORT);
}

RING_FUNC(ring_get_curlopt_localportrange)
{
	RING_API_RETNUMBER(CURLOPT_LOCALPORTRANGE);
}

RING_FUNC(ring_get_curlopt_dns_cache_timeout)
{
	RING_API_RETNUMBER(CURLOPT_DNS_CACHE_TIMEOUT);
}

RING_FUNC(ring_get_curlopt_dns_use_global_cache)
{
	RING_API_RETNUMBER(CURLOPT_DNS_USE_GLOBAL_CACHE);
}

RING_FUNC(ring_get_curlopt_buffersize)
{
	RING_API_RETNUMBER(CURLOPT_BUFFERSIZE);
}

RING_FUNC(ring_get_curlopt_port)
{
	RING_API_RETNUMBER(CURLOPT_PORT);
}

RING_FUNC(ring_get_curlopt_tcp_nodelay)
{
	RING_API_RETNUMBER(CURLOPT_TCP_NODELAY);
}

RING_FUNC(ring_get_curlopt_address_scope)
{
	RING_API_RETNUMBER(CURLOPT_ADDRESS_SCOPE);
}

RING_FUNC(ring_get_curlopt_tcp_keepalive)
{
	RING_API_RETNUMBER(CURLOPT_TCP_KEEPALIVE);
}

RING_FUNC(ring_get_curlopt_tcp_keepidle)
{
	RING_API_RETNUMBER(CURLOPT_TCP_KEEPIDLE);
}

RING_FUNC(ring_get_curlopt_tcp_keepintvl)
{
	RING_API_RETNUMBER(CURLOPT_TCP_KEEPINTVL);
}

RING_FUNC(ring_get_curlopt_unix_socket_path)
{
	RING_API_RETNUMBER(CURLOPT_UNIX_SOCKET_PATH);
}

RING_FUNC(ring_get_curlopt_netrc)
{
	RING_API_RETNUMBER(CURLOPT_NETRC);
}

RING_FUNC(ring_get_curlopt_netrc_file)
{
	RING_API_RETNUMBER(CURLOPT_NETRC_FILE);
}

RING_FUNC(ring_get_curlopt_userpwd)
{
	RING_API_RETNUMBER(CURLOPT_USERPWD);
}

RING_FUNC(ring_get_curlopt_proxyuserpwd)
{
	RING_API_RETNUMBER(CURLOPT_PROXYUSERPWD);
}

RING_FUNC(ring_get_curlopt_username)
{
	RING_API_RETNUMBER(CURLOPT_USERNAME);
}

RING_FUNC(ring_get_curlopt_password)
{
	RING_API_RETNUMBER(CURLOPT_PASSWORD);
}

RING_FUNC(ring_get_curlopt_login_options)
{
	RING_API_RETNUMBER(CURLOPT_LOGIN_OPTIONS);
}

RING_FUNC(ring_get_curlopt_proxyusername)
{
	RING_API_RETNUMBER(CURLOPT_PROXYUSERNAME);
}

RING_FUNC(ring_get_curlopt_proxypassword)
{
	RING_API_RETNUMBER(CURLOPT_PROXYPASSWORD);
}

RING_FUNC(ring_get_curlopt_httpauth)
{
	RING_API_RETNUMBER(CURLOPT_HTTPAUTH);
}

RING_FUNC(ring_get_curlopt_tlsauth_username)
{
	RING_API_RETNUMBER(CURLOPT_TLSAUTH_USERNAME);
}

RING_FUNC(ring_get_curlopt_tlsauth_password)
{
	RING_API_RETNUMBER(CURLOPT_TLSAUTH_PASSWORD);
}

RING_FUNC(ring_get_curlopt_tlsauth_type)
{
	RING_API_RETNUMBER(CURLOPT_TLSAUTH_TYPE);
}

RING_FUNC(ring_get_curlopt_proxyauth)
{
	RING_API_RETNUMBER(CURLOPT_PROXYAUTH);
}

RING_FUNC(ring_get_curlopt_sasl_ir)
{
	RING_API_RETNUMBER(CURLOPT_SASL_IR);
}

RING_FUNC(ring_get_curlopt_xoauth2_bearer)
{
	RING_API_RETNUMBER(CURLOPT_XOAUTH2_BEARER);
}

RING_FUNC(ring_get_curlopt_autoreferer)
{
	RING_API_RETNUMBER(CURLOPT_AUTOREFERER);
}

RING_FUNC(ring_get_curlopt_accept_encoding)
{
	RING_API_RETNUMBER(CURLOPT_ACCEPT_ENCODING);
}

RING_FUNC(ring_get_curlopt_transfer_encoding)
{
	RING_API_RETNUMBER(CURLOPT_TRANSFER_ENCODING);
}

RING_FUNC(ring_get_curlopt_followlocation)
{
	RING_API_RETNUMBER(CURLOPT_FOLLOWLOCATION);
}

RING_FUNC(ring_get_curlopt_unrestricted_auth)
{
	RING_API_RETNUMBER(CURLOPT_UNRESTRICTED_AUTH);
}

RING_FUNC(ring_get_curlopt_maxredirs)
{
	RING_API_RETNUMBER(CURLOPT_MAXREDIRS);
}

RING_FUNC(ring_get_curlopt_postredir)
{
	RING_API_RETNUMBER(CURLOPT_POSTREDIR);
}

RING_FUNC(ring_get_curlopt_put)
{
	RING_API_RETNUMBER(CURLOPT_PUT);
}

RING_FUNC(ring_get_curlopt_post)
{
	RING_API_RETNUMBER(CURLOPT_POST);
}

RING_FUNC(ring_get_curlopt_postfields)
{
	RING_API_RETNUMBER(CURLOPT_POSTFIELDS);
}

RING_FUNC(ring_get_curlopt_postfieldsize)
{
	RING_API_RETNUMBER(CURLOPT_POSTFIELDSIZE);
}

RING_FUNC(ring_get_curlopt_postfieldsize_large)
{
	RING_API_RETNUMBER(CURLOPT_POSTFIELDSIZE_LARGE);
}

RING_FUNC(ring_get_curlopt_copypostfields)
{
	RING_API_RETNUMBER(CURLOPT_COPYPOSTFIELDS);
}

RING_FUNC(ring_get_curlopt_httppost)
{
	RING_API_RETNUMBER(CURLOPT_HTTPPOST);
}

RING_FUNC(ring_get_curlopt_referer)
{
	RING_API_RETNUMBER(CURLOPT_REFERER);
}

RING_FUNC(ring_get_curlopt_useragent)
{
	RING_API_RETNUMBER(CURLOPT_USERAGENT);
}

RING_FUNC(ring_get_curlopt_httpheader)
{
	RING_API_RETNUMBER(CURLOPT_HTTPHEADER);
}

RING_FUNC(ring_get_curlopt_headeropt)
{
	RING_API_RETNUMBER(CURLOPT_HEADEROPT);
}

RING_FUNC(ring_get_curlopt_proxyheader)
{
	RING_API_RETNUMBER(CURLOPT_PROXYHEADER);
}

RING_FUNC(ring_get_curlopt_http200aliases)
{
	RING_API_RETNUMBER(CURLOPT_HTTP200ALIASES);
}

RING_FUNC(ring_get_curlopt_cookie)
{
	RING_API_RETNUMBER(CURLOPT_COOKIE);
}

RING_FUNC(ring_get_curlopt_cookiefile)
{
	RING_API_RETNUMBER(CURLOPT_COOKIEFILE);
}

RING_FUNC(ring_get_curlopt_cookiejar)
{
	RING_API_RETNUMBER(CURLOPT_COOKIEJAR);
}

RING_FUNC(ring_get_curlopt_cookiesession)
{
	RING_API_RETNUMBER(CURLOPT_COOKIESESSION);
}

RING_FUNC(ring_get_curlopt_cookielist)
{
	RING_API_RETNUMBER(CURLOPT_COOKIELIST);
}

RING_FUNC(ring_get_curlopt_httpget)
{
	RING_API_RETNUMBER(CURLOPT_HTTPGET);
}

RING_FUNC(ring_get_curlopt_http_version)
{
	RING_API_RETNUMBER(CURLOPT_HTTP_VERSION);
}

RING_FUNC(ring_get_curlopt_ignore_content_length)
{
	RING_API_RETNUMBER(CURLOPT_IGNORE_CONTENT_LENGTH);
}

RING_FUNC(ring_get_curlopt_http_content_decoding)
{
	RING_API_RETNUMBER(CURLOPT_HTTP_CONTENT_DECODING);
}

RING_FUNC(ring_get_curlopt_http_transfer_decoding)
{
	RING_API_RETNUMBER(CURLOPT_HTTP_TRANSFER_DECODING);
}

RING_FUNC(ring_get_curlopt_expect_100_timeout_ms)
{
	RING_API_RETNUMBER(CURLOPT_EXPECT_100_TIMEOUT_MS);
}

RING_FUNC(ring_get_curlopt_mail_from)
{
	RING_API_RETNUMBER(CURLOPT_MAIL_FROM);
}

RING_FUNC(ring_get_curlopt_mail_rcpt)
{
	RING_API_RETNUMBER(CURLOPT_MAIL_RCPT);
}

RING_FUNC(ring_get_curlopt_mail_auth)
{
	RING_API_RETNUMBER(CURLOPT_MAIL_AUTH);
}

RING_FUNC(ring_get_curlopt_tftp_blksize)
{
	RING_API_RETNUMBER(CURLOPT_TFTP_BLKSIZE);
}

RING_FUNC(ring_get_curlopt_ftpport)
{
	RING_API_RETNUMBER(CURLOPT_FTPPORT);
}

RING_FUNC(ring_get_curlopt_quote)
{
	RING_API_RETNUMBER(CURLOPT_QUOTE);
}

RING_FUNC(ring_get_curlopt_postquote)
{
	RING_API_RETNUMBER(CURLOPT_POSTQUOTE);
}

RING_FUNC(ring_get_curlopt_prequote)
{
	RING_API_RETNUMBER(CURLOPT_PREQUOTE);
}

RING_FUNC(ring_get_curlopt_append)
{
	RING_API_RETNUMBER(CURLOPT_APPEND);
}

RING_FUNC(ring_get_curlopt_ftp_use_eprt)
{
	RING_API_RETNUMBER(CURLOPT_FTP_USE_EPRT);
}

RING_FUNC(ring_get_curlopt_ftp_use_epsv)
{
	RING_API_RETNUMBER(CURLOPT_FTP_USE_EPSV);
}

RING_FUNC(ring_get_curlopt_ftp_use_pret)
{
	RING_API_RETNUMBER(CURLOPT_FTP_USE_PRET);
}

RING_FUNC(ring_get_curlopt_ftp_create_missing_dirs)
{
	RING_API_RETNUMBER(CURLOPT_FTP_CREATE_MISSING_DIRS);
}

RING_FUNC(ring_get_curlopt_ftp_response_timeout)
{
	RING_API_RETNUMBER(CURLOPT_FTP_RESPONSE_TIMEOUT);
}

RING_FUNC(ring_get_curlopt_ftp_alternative_to_user)
{
	RING_API_RETNUMBER(CURLOPT_FTP_ALTERNATIVE_TO_USER);
}

RING_FUNC(ring_get_curlopt_ftp_skip_pasv_ip)
{
	RING_API_RETNUMBER(CURLOPT_FTP_SKIP_PASV_IP);
}

RING_FUNC(ring_get_curlopt_ftpsslauth)
{
	RING_API_RETNUMBER(CURLOPT_FTPSSLAUTH);
}

RING_FUNC(ring_get_curlopt_ftp_ssl_ccc)
{
	RING_API_RETNUMBER(CURLOPT_FTP_SSL_CCC);
}

RING_FUNC(ring_get_curlopt_ftp_account)
{
	RING_API_RETNUMBER(CURLOPT_FTP_ACCOUNT);
}

RING_FUNC(ring_get_curlopt_ftp_filemethod)
{
	RING_API_RETNUMBER(CURLOPT_FTP_FILEMETHOD);
}

RING_FUNC(ring_get_curlopt_rtsp_request)
{
	RING_API_RETNUMBER(CURLOPT_RTSP_REQUEST);
}

RING_FUNC(ring_get_curlopt_rtsp_session_id)
{
	RING_API_RETNUMBER(CURLOPT_RTSP_SESSION_ID);
}

RING_FUNC(ring_get_curlopt_rtsp_stream_uri)
{
	RING_API_RETNUMBER(CURLOPT_RTSP_STREAM_URI);
}

RING_FUNC(ring_get_curlopt_rtsp_transport)
{
	RING_API_RETNUMBER(CURLOPT_RTSP_TRANSPORT);
}

RING_FUNC(ring_get_curlopt_rtsp_client_cseq)
{
	RING_API_RETNUMBER(CURLOPT_RTSP_CLIENT_CSEQ);
}

RING_FUNC(ring_get_curlopt_rtsp_server_cseq)
{
	RING_API_RETNUMBER(CURLOPT_RTSP_SERVER_CSEQ);
}

RING_FUNC(ring_get_curlopt_transfertext)
{
	RING_API_RETNUMBER(CURLOPT_TRANSFERTEXT);
}

RING_FUNC(ring_get_curlopt_proxy_transfer_mode)
{
	RING_API_RETNUMBER(CURLOPT_PROXY_TRANSFER_MODE);
}

RING_FUNC(ring_get_curlopt_crlf)
{
	RING_API_RETNUMBER(CURLOPT_CRLF);
}

RING_FUNC(ring_get_curlopt_range)
{
	RING_API_RETNUMBER(CURLOPT_RANGE);
}

RING_FUNC(ring_get_curlopt_resume_from)
{
	RING_API_RETNUMBER(CURLOPT_RESUME_FROM);
}

RING_FUNC(ring_get_curlopt_resume_from_large)
{
	RING_API_RETNUMBER(CURLOPT_RESUME_FROM_LARGE);
}

RING_FUNC(ring_get_curlopt_customrequest)
{
	RING_API_RETNUMBER(CURLOPT_CUSTOMREQUEST);
}

RING_FUNC(ring_get_curlopt_filetime)
{
	RING_API_RETNUMBER(CURLOPT_FILETIME);
}

RING_FUNC(ring_get_curlopt_dirlistonly)
{
	RING_API_RETNUMBER(CURLOPT_DIRLISTONLY);
}

RING_FUNC(ring_get_curlopt_nobody)
{
	RING_API_RETNUMBER(CURLOPT_NOBODY);
}

RING_FUNC(ring_get_curlopt_infilesize)
{
	RING_API_RETNUMBER(CURLOPT_INFILESIZE);
}

RING_FUNC(ring_get_curlopt_infilesize_large)
{
	RING_API_RETNUMBER(CURLOPT_INFILESIZE_LARGE);
}

RING_FUNC(ring_get_curlopt_upload)
{
	RING_API_RETNUMBER(CURLOPT_UPLOAD);
}

RING_FUNC(ring_get_curlopt_maxfilesize)
{
	RING_API_RETNUMBER(CURLOPT_MAXFILESIZE);
}

RING_FUNC(ring_get_curlopt_maxfilesize_large)
{
	RING_API_RETNUMBER(CURLOPT_MAXFILESIZE_LARGE);
}

RING_FUNC(ring_get_curlopt_timecondition)
{
	RING_API_RETNUMBER(CURLOPT_TIMECONDITION);
}

RING_FUNC(ring_get_curlopt_timevalue)
{
	RING_API_RETNUMBER(CURLOPT_TIMEVALUE);
}

RING_FUNC(ring_get_curlopt_timeout)
{
	RING_API_RETNUMBER(CURLOPT_TIMEOUT);
}

RING_FUNC(ring_get_curlopt_timeout_ms)
{
	RING_API_RETNUMBER(CURLOPT_TIMEOUT_MS);
}

RING_FUNC(ring_get_curlopt_low_speed_limit)
{
	RING_API_RETNUMBER(CURLOPT_LOW_SPEED_LIMIT);
}

RING_FUNC(ring_get_curlopt_low_speed_time)
{
	RING_API_RETNUMBER(CURLOPT_LOW_SPEED_TIME);
}

RING_FUNC(ring_get_curlopt_max_send_speed_large)
{
	RING_API_RETNUMBER(CURLOPT_MAX_SEND_SPEED_LARGE);
}

RING_FUNC(ring_get_curlopt_max_recv_speed_large)
{
	RING_API_RETNUMBER(CURLOPT_MAX_RECV_SPEED_LARGE);
}

RING_FUNC(ring_get_curlopt_maxconnects)
{
	RING_API_RETNUMBER(CURLOPT_MAXCONNECTS);
}

RING_FUNC(ring_get_curlopt_fresh_connect)
{
	RING_API_RETNUMBER(CURLOPT_FRESH_CONNECT);
}

RING_FUNC(ring_get_curlopt_forbid_reuse)
{
	RING_API_RETNUMBER(CURLOPT_FORBID_REUSE);
}

RING_FUNC(ring_get_curlopt_connecttimeout)
{
	RING_API_RETNUMBER(CURLOPT_CONNECTTIMEOUT);
}

RING_FUNC(ring_get_curlopt_connecttimeout_ms)
{
	RING_API_RETNUMBER(CURLOPT_CONNECTTIMEOUT_MS);
}

RING_FUNC(ring_get_curlopt_ipresolve)
{
	RING_API_RETNUMBER(CURLOPT_IPRESOLVE);
}

RING_FUNC(ring_get_curlopt_connect_only)
{
	RING_API_RETNUMBER(CURLOPT_CONNECT_ONLY);
}

RING_FUNC(ring_get_curlopt_use_ssl)
{
	RING_API_RETNUMBER(CURLOPT_USE_SSL);
}

RING_FUNC(ring_get_curlopt_resolve)
{
	RING_API_RETNUMBER(CURLOPT_RESOLVE);
}

RING_FUNC(ring_get_curlopt_dns_interface)
{
	RING_API_RETNUMBER(CURLOPT_DNS_INTERFACE);
}

RING_FUNC(ring_get_curlopt_dns_local_ip4)
{
	RING_API_RETNUMBER(CURLOPT_DNS_LOCAL_IP4);
}

RING_FUNC(ring_get_curlopt_dns_local_ip6)
{
	RING_API_RETNUMBER(CURLOPT_DNS_LOCAL_IP6);
}

RING_FUNC(ring_get_curlopt_dns_servers)
{
	RING_API_RETNUMBER(CURLOPT_DNS_SERVERS);
}

RING_FUNC(ring_get_curlopt_accepttimeout_ms)
{
	RING_API_RETNUMBER(CURLOPT_ACCEPTTIMEOUT_MS);
}

RING_FUNC(ring_get_curlopt_sslcert)
{
	RING_API_RETNUMBER(CURLOPT_SSLCERT);
}

RING_FUNC(ring_get_curlopt_sslcerttype)
{
	RING_API_RETNUMBER(CURLOPT_SSLCERTTYPE);
}

RING_FUNC(ring_get_curlopt_sslkey)
{
	RING_API_RETNUMBER(CURLOPT_SSLKEY);
}

RING_FUNC(ring_get_curlopt_sslkeytype)
{
	RING_API_RETNUMBER(CURLOPT_SSLKEYTYPE);
}

RING_FUNC(ring_get_curlopt_keypasswd)
{
	RING_API_RETNUMBER(CURLOPT_KEYPASSWD);
}

RING_FUNC(ring_get_curlopt_ssl_enable_alpn)
{
	RING_API_RETNUMBER(CURLOPT_SSL_ENABLE_ALPN);
}

RING_FUNC(ring_get_curlopt_ssl_enable_npn)
{
	RING_API_RETNUMBER(CURLOPT_SSL_ENABLE_NPN);
}

RING_FUNC(ring_get_curlopt_sslengine)
{
	RING_API_RETNUMBER(CURLOPT_SSLENGINE);
}

RING_FUNC(ring_get_curlopt_sslengine_default)
{
	RING_API_RETNUMBER(CURLOPT_SSLENGINE_DEFAULT);
}

RING_FUNC(ring_get_curlopt_sslversion)
{
	RING_API_RETNUMBER(CURLOPT_SSLVERSION);
}

RING_FUNC(ring_get_curlopt_ssl_verifyhost)
{
	RING_API_RETNUMBER(CURLOPT_SSL_VERIFYHOST);
}

RING_FUNC(ring_get_curlopt_ssl_verifypeer)
{
	RING_API_RETNUMBER(CURLOPT_SSL_VERIFYPEER);
}

RING_FUNC(ring_get_curlopt_ssl_verifystatus)
{
	RING_API_RETNUMBER(CURLOPT_SSL_VERIFYSTATUS);
}

RING_FUNC(ring_get_curlopt_cainfo)
{
	RING_API_RETNUMBER(CURLOPT_CAINFO);
}

RING_FUNC(ring_get_curlopt_issuercert)
{
	RING_API_RETNUMBER(CURLOPT_ISSUERCERT);
}

RING_FUNC(ring_get_curlopt_capath)
{
	RING_API_RETNUMBER(CURLOPT_CAPATH);
}

RING_FUNC(ring_get_curlopt_crlfile)
{
	RING_API_RETNUMBER(CURLOPT_CRLFILE);
}

RING_FUNC(ring_get_curlopt_certinfo)
{
	RING_API_RETNUMBER(CURLOPT_CERTINFO);
}

RING_FUNC(ring_get_curlopt_pinnedpublickey)
{
	RING_API_RETNUMBER(CURLOPT_PINNEDPUBLICKEY);
}

RING_FUNC(ring_get_curlopt_random_file)
{
	RING_API_RETNUMBER(CURLOPT_RANDOM_FILE);
}

RING_FUNC(ring_get_curlopt_egdsocket)
{
	RING_API_RETNUMBER(CURLOPT_EGDSOCKET);
}

RING_FUNC(ring_get_curlopt_ssl_cipher_list)
{
	RING_API_RETNUMBER(CURLOPT_SSL_CIPHER_LIST);
}

RING_FUNC(ring_get_curlopt_ssl_sessionid_cache)
{
	RING_API_RETNUMBER(CURLOPT_SSL_SESSIONID_CACHE);
}

RING_FUNC(ring_get_curlopt_ssl_options)
{
	RING_API_RETNUMBER(CURLOPT_SSL_OPTIONS);
}

RING_FUNC(ring_get_curlopt_krblevel)
{
	RING_API_RETNUMBER(CURLOPT_KRBLEVEL);
}

RING_FUNC(ring_get_curlopt_gssapi_delegation)
{
	RING_API_RETNUMBER(CURLOPT_GSSAPI_DELEGATION);
}

RING_FUNC(ring_get_curlopt_ssh_auth_types)
{
	RING_API_RETNUMBER(CURLOPT_SSH_AUTH_TYPES);
}

RING_FUNC(ring_get_curlopt_ssh_host_public_key_md5)
{
	RING_API_RETNUMBER(CURLOPT_SSH_HOST_PUBLIC_KEY_MD5);
}

RING_FUNC(ring_get_curlopt_ssh_public_keyfile)
{
	RING_API_RETNUMBER(CURLOPT_SSH_PUBLIC_KEYFILE);
}

RING_FUNC(ring_get_curlopt_ssh_private_keyfile)
{
	RING_API_RETNUMBER(CURLOPT_SSH_PRIVATE_KEYFILE);
}

RING_FUNC(ring_get_curlopt_ssh_knownhosts)
{
	RING_API_RETNUMBER(CURLOPT_SSH_KNOWNHOSTS);
}

RING_FUNC(ring_get_curlopt_ssh_keyfunction)
{
	RING_API_RETNUMBER(CURLOPT_SSH_KEYFUNCTION);
}

RING_FUNC(ring_get_curlopt_ssh_keydata)
{
	RING_API_RETNUMBER(CURLOPT_SSH_KEYDATA);
}

RING_FUNC(ring_get_curlopt_private)
{
	RING_API_RETNUMBER(CURLOPT_PRIVATE);
}

RING_FUNC(ring_get_curlopt_share)
{
	RING_API_RETNUMBER(CURLOPT_SHARE);
}

RING_FUNC(ring_get_curlopt_new_file_perms)
{
	RING_API_RETNUMBER(CURLOPT_NEW_FILE_PERMS);
}

RING_FUNC(ring_get_curlopt_new_directory_perms)
{
	RING_API_RETNUMBER(CURLOPT_NEW_DIRECTORY_PERMS);
}

RING_FUNC(ring_get_curlopt_telnetoptions)
{
	RING_API_RETNUMBER(CURLOPT_TELNETOPTIONS);
}

RING_FUNC(ring_get_curle_ok)
{
	RING_API_RETNUMBER(CURLE_OK);
}

RING_FUNC(ring_get_curle_unknown_option)
{
	RING_API_RETNUMBER(CURLE_UNKNOWN_OPTION);
}

RING_FUNC(ring_get_curle_not_built_in)
{
	RING_API_RETNUMBER(CURLE_NOT_BUILT_IN);
}


RING_FUNC(ring_curl_easy_init)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETCPOINTER(curl_easy_init(),"CURL");
}


RING_FUNC(ring_curl_easy_cleanup)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	curl_easy_cleanup((CURL *) RING_API_GETCPOINTER(1,"CURL"));
}


RING_FUNC(ring_curl_easy_setopt)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	{
		CURLcode *pValue ; 
		pValue = (CURLcode *) malloc(sizeof(CURLcode)) ;
		*pValue = curl_easy_setopt((CURL *) RING_API_GETCPOINTER(1,"CURL"), (CURLoption ) RING_API_GETNUMBER(2), (int) RING_API_GETNUMBER(3));
		RING_API_RETCPOINTER(pValue,"CURLcode");
	}
}


RING_FUNC(ring_curl_easy_setopt_2)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	{
		CURLcode *pValue ; 
		pValue = (CURLcode *) malloc(sizeof(CURLcode)) ;
		*pValue = curl_easy_setopt((CURL *) RING_API_GETCPOINTER(1,"CURL"), (CURLoption ) RING_API_GETNUMBER(2),RING_API_GETSTRING(3));
		RING_API_RETCPOINTER(pValue,"CURLcode");
	}
}


RING_FUNC(ring_curl_easy_setopt_3)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	{
		CURLcode *pValue ; 
		pValue = (CURLcode *) malloc(sizeof(CURLcode)) ;
		*pValue = curl_easy_setopt((CURL *) RING_API_GETCPOINTER(1,"CURL"), (CURLoption ) RING_API_GETNUMBER(2),(void *) RING_API_GETCPOINTER(3,"void"));
		RING_API_RETCPOINTER(pValue,"CURLcode");
	}
}


RING_FUNC(ring_curl_easy_perform)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	{
		CURLcode *pValue ; 
		pValue = (CURLcode *) malloc(sizeof(CURLcode)) ;
		*pValue = curl_easy_perform((CURL *) RING_API_GETCPOINTER(1,"CURL"));
		RING_API_RETCPOINTER(pValue,"CURLcode");
	}
}


RING_FUNC(ring_curl_version)
{
	if ( RING_API_PARACOUNT != 0 ) {
		RING_API_ERROR(RING_API_BADPARACOUNT);
		return ;
	}
	RING_API_RETSTRING(curl_version());
}


RING_FUNC(ring_curl_getdate)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISSTRING(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISPOINTER(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	{
		time_t *pValue ; 
		pValue = (time_t *) malloc(sizeof(time_t)) ;
		*pValue = curl_getdate(RING_API_GETSTRING(1),(time_t *) RING_API_GETCPOINTER(2,"time_t"));
		RING_API_RETCPOINTER(pValue,"time_t");
	}
}


RING_FUNC(ring_curl_formfree)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	curl_formfree((struct curl_httppost *) RING_API_GETCPOINTER(1,"struct curl_httppost"));
}


RING_FUNC(ring_curl_slist_append)
{
	if ( RING_API_PARACOUNT != 2 ) {
		RING_API_ERROR(RING_API_MISS2PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETCPOINTER(curl_slist_append((struct curl_slist *) RING_API_GETCPOINTER(1,"struct curl_slist"),RING_API_GETSTRING(2)),"struct curl_slist");
}


RING_FUNC(ring_curl_slist_free_all)
{
	if ( RING_API_PARACOUNT != 1 ) {
		RING_API_ERROR(RING_API_MISS1PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	curl_slist_free_all((struct curl_slist *) RING_API_GETCPOINTER(1,"struct curl_slist"));
}


RING_FUNC(ring_curl_easy_escape)
{
	if ( RING_API_PARACOUNT != 3 ) {
		RING_API_ERROR(RING_API_MISS3PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETSTRING(curl_easy_escape((CURL *) RING_API_GETCPOINTER(1,"CURL"),RING_API_GETSTRING(2), (int ) RING_API_GETNUMBER(3)));
}


RING_FUNC(ring_curl_easy_unescape)
{
	if ( RING_API_PARACOUNT != 4 ) {
		RING_API_ERROR(RING_API_MISS4PARA);
		return ;
	}
	if ( ! RING_API_ISPOINTER(1) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(2) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISNUMBER(3) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	if ( ! RING_API_ISSTRING(4) ) {
		RING_API_ERROR(RING_API_BADPARATYPE);
		return ;
	}
	RING_API_RETSTRING(curl_easy_unescape((CURL *) RING_API_GETCPOINTER(1,"CURL"),RING_API_GETSTRING(2), (int ) RING_API_GETNUMBER(3),RING_API_GETINTPOINTER(4)));
	RING_API_ACCEPTINTVALUE(4) ;
}

RING_API void ringlib_init(RingState *pRingState)
{
	ring_vm_funcregister("curl_easy_init",ring_curl_easy_init);
	ring_vm_funcregister("curl_easy_cleanup",ring_curl_easy_cleanup);
	ring_vm_funcregister("curl_easy_setopt",ring_curl_easy_setopt);
	ring_vm_funcregister("curl_easy_setopt_2",ring_curl_easy_setopt_2);
	ring_vm_funcregister("curl_easy_setopt_3",ring_curl_easy_setopt_3);
	ring_vm_funcregister("curl_easy_perform",ring_curl_easy_perform);
	ring_vm_funcregister("curl_version",ring_curl_version);
	ring_vm_funcregister("curl_getdate",ring_curl_getdate);
	ring_vm_funcregister("curl_formfree",ring_curl_formfree);
	ring_vm_funcregister("curl_slist_append",ring_curl_slist_append);
	ring_vm_funcregister("curl_slist_free_all",ring_curl_slist_free_all);
	ring_vm_funcregister("curl_easy_escape",ring_curl_easy_escape);
	ring_vm_funcregister("curl_easy_unescape",ring_curl_easy_unescape);
	ring_vm_funcregister("get_curlopt_verbose",ring_get_curlopt_verbose);
	ring_vm_funcregister("get_curlopt_header",ring_get_curlopt_header);
	ring_vm_funcregister("get_curlopt_noprogress",ring_get_curlopt_noprogress);
	ring_vm_funcregister("get_curlopt_nosignal",ring_get_curlopt_nosignal);
	ring_vm_funcregister("get_curlopt_wildcardmatch",ring_get_curlopt_wildcardmatch);
	ring_vm_funcregister("get_curlopt_writefunction",ring_get_curlopt_writefunction);
	ring_vm_funcregister("get_curlopt_writedata",ring_get_curlopt_writedata);
	ring_vm_funcregister("get_curlopt_readfunction",ring_get_curlopt_readfunction);
	ring_vm_funcregister("get_curlopt_readdata",ring_get_curlopt_readdata);
	ring_vm_funcregister("get_curlopt_ioctlfunction",ring_get_curlopt_ioctlfunction);
	ring_vm_funcregister("get_curlopt_ioctldata",ring_get_curlopt_ioctldata);
	ring_vm_funcregister("get_curlopt_seekfunction",ring_get_curlopt_seekfunction);
	ring_vm_funcregister("get_curlopt_seekdata",ring_get_curlopt_seekdata);
	ring_vm_funcregister("get_curlopt_sockoptfunction",ring_get_curlopt_sockoptfunction);
	ring_vm_funcregister("get_curlopt_sockoptdata",ring_get_curlopt_sockoptdata);
	ring_vm_funcregister("get_curlopt_opensocketfunction",ring_get_curlopt_opensocketfunction);
	ring_vm_funcregister("get_curlopt_opensocketdata",ring_get_curlopt_opensocketdata);
	ring_vm_funcregister("get_curlopt_closesocketfunction",ring_get_curlopt_closesocketfunction);
	ring_vm_funcregister("get_curlopt_closesocketdata",ring_get_curlopt_closesocketdata);
	ring_vm_funcregister("get_curlopt_progressfunction",ring_get_curlopt_progressfunction);
	ring_vm_funcregister("get_curlopt_progressdata",ring_get_curlopt_progressdata);
	ring_vm_funcregister("get_curlopt_xferinfofunction",ring_get_curlopt_xferinfofunction);
	ring_vm_funcregister("get_curlopt_xferinfodata",ring_get_curlopt_xferinfodata);
	ring_vm_funcregister("get_curlopt_headerfunction",ring_get_curlopt_headerfunction);
	ring_vm_funcregister("get_curlopt_headerdata",ring_get_curlopt_headerdata);
	ring_vm_funcregister("get_curlopt_debugfunction",ring_get_curlopt_debugfunction);
	ring_vm_funcregister("get_curlopt_debugdata",ring_get_curlopt_debugdata);
	ring_vm_funcregister("get_curlopt_ssl_ctx_function",ring_get_curlopt_ssl_ctx_function);
	ring_vm_funcregister("get_curlopt_ssl_ctx_data",ring_get_curlopt_ssl_ctx_data);
	ring_vm_funcregister("get_curlopt_conv_to_network_function",ring_get_curlopt_conv_to_network_function);
	ring_vm_funcregister("get_curlopt_conv_from_network_function",ring_get_curlopt_conv_from_network_function);
	ring_vm_funcregister("get_curlopt_conv_from_utf8_function",ring_get_curlopt_conv_from_utf8_function);
	ring_vm_funcregister("get_curlopt_interleavefunction",ring_get_curlopt_interleavefunction);
	ring_vm_funcregister("get_curlopt_interleavedata",ring_get_curlopt_interleavedata);
	ring_vm_funcregister("get_curlopt_chunk_bgn_function",ring_get_curlopt_chunk_bgn_function);
	ring_vm_funcregister("get_curlopt_chunk_end_function",ring_get_curlopt_chunk_end_function);
	ring_vm_funcregister("get_curlopt_chunk_data",ring_get_curlopt_chunk_data);
	ring_vm_funcregister("get_curlopt_fnmatch_function",ring_get_curlopt_fnmatch_function);
	ring_vm_funcregister("get_curlopt_fnmatch_data",ring_get_curlopt_fnmatch_data);
	ring_vm_funcregister("get_curlopt_errorbuffer",ring_get_curlopt_errorbuffer);
	ring_vm_funcregister("get_curlopt_stderr",ring_get_curlopt_stderr);
	ring_vm_funcregister("get_curlopt_failonerror",ring_get_curlopt_failonerror);
	ring_vm_funcregister("get_curlopt_url",ring_get_curlopt_url);
	ring_vm_funcregister("get_curlopt_protocols",ring_get_curlopt_protocols);
	ring_vm_funcregister("get_curlopt_redir_protocols",ring_get_curlopt_redir_protocols);
	ring_vm_funcregister("get_curlopt_proxy",ring_get_curlopt_proxy);
	ring_vm_funcregister("get_curlopt_proxyport",ring_get_curlopt_proxyport);
	ring_vm_funcregister("get_curlopt_proxytype",ring_get_curlopt_proxytype);
	ring_vm_funcregister("get_curlopt_noproxy",ring_get_curlopt_noproxy);
	ring_vm_funcregister("get_curlopt_httpproxytunnel",ring_get_curlopt_httpproxytunnel);
	ring_vm_funcregister("get_curlopt_socks5_gssapi_service",ring_get_curlopt_socks5_gssapi_service);
	ring_vm_funcregister("get_curlopt_socks5_gssapi_nec",ring_get_curlopt_socks5_gssapi_nec);
	ring_vm_funcregister("get_curlopt_interface",ring_get_curlopt_interface);
	ring_vm_funcregister("get_curlopt_localport",ring_get_curlopt_localport);
	ring_vm_funcregister("get_curlopt_localportrange",ring_get_curlopt_localportrange);
	ring_vm_funcregister("get_curlopt_dns_cache_timeout",ring_get_curlopt_dns_cache_timeout);
	ring_vm_funcregister("get_curlopt_dns_use_global_cache",ring_get_curlopt_dns_use_global_cache);
	ring_vm_funcregister("get_curlopt_buffersize",ring_get_curlopt_buffersize);
	ring_vm_funcregister("get_curlopt_port",ring_get_curlopt_port);
	ring_vm_funcregister("get_curlopt_tcp_nodelay",ring_get_curlopt_tcp_nodelay);
	ring_vm_funcregister("get_curlopt_address_scope",ring_get_curlopt_address_scope);
	ring_vm_funcregister("get_curlopt_tcp_keepalive",ring_get_curlopt_tcp_keepalive);
	ring_vm_funcregister("get_curlopt_tcp_keepidle",ring_get_curlopt_tcp_keepidle);
	ring_vm_funcregister("get_curlopt_tcp_keepintvl",ring_get_curlopt_tcp_keepintvl);
	ring_vm_funcregister("get_curlopt_unix_socket_path",ring_get_curlopt_unix_socket_path);
	ring_vm_funcregister("get_curlopt_netrc",ring_get_curlopt_netrc);
	ring_vm_funcregister("get_curlopt_netrc_file",ring_get_curlopt_netrc_file);
	ring_vm_funcregister("get_curlopt_userpwd",ring_get_curlopt_userpwd);
	ring_vm_funcregister("get_curlopt_proxyuserpwd",ring_get_curlopt_proxyuserpwd);
	ring_vm_funcregister("get_curlopt_username",ring_get_curlopt_username);
	ring_vm_funcregister("get_curlopt_password",ring_get_curlopt_password);
	ring_vm_funcregister("get_curlopt_login_options",ring_get_curlopt_login_options);
	ring_vm_funcregister("get_curlopt_proxyusername",ring_get_curlopt_proxyusername);
	ring_vm_funcregister("get_curlopt_proxypassword",ring_get_curlopt_proxypassword);
	ring_vm_funcregister("get_curlopt_httpauth",ring_get_curlopt_httpauth);
	ring_vm_funcregister("get_curlopt_tlsauth_username",ring_get_curlopt_tlsauth_username);
	ring_vm_funcregister("get_curlopt_tlsauth_password",ring_get_curlopt_tlsauth_password);
	ring_vm_funcregister("get_curlopt_tlsauth_type",ring_get_curlopt_tlsauth_type);
	ring_vm_funcregister("get_curlopt_proxyauth",ring_get_curlopt_proxyauth);
	ring_vm_funcregister("get_curlopt_sasl_ir",ring_get_curlopt_sasl_ir);
	ring_vm_funcregister("get_curlopt_xoauth2_bearer",ring_get_curlopt_xoauth2_bearer);
	ring_vm_funcregister("get_curlopt_autoreferer",ring_get_curlopt_autoreferer);
	ring_vm_funcregister("get_curlopt_accept_encoding",ring_get_curlopt_accept_encoding);
	ring_vm_funcregister("get_curlopt_transfer_encoding",ring_get_curlopt_transfer_encoding);
	ring_vm_funcregister("get_curlopt_followlocation",ring_get_curlopt_followlocation);
	ring_vm_funcregister("get_curlopt_unrestricted_auth",ring_get_curlopt_unrestricted_auth);
	ring_vm_funcregister("get_curlopt_maxredirs",ring_get_curlopt_maxredirs);
	ring_vm_funcregister("get_curlopt_postredir",ring_get_curlopt_postredir);
	ring_vm_funcregister("get_curlopt_put",ring_get_curlopt_put);
	ring_vm_funcregister("get_curlopt_post",ring_get_curlopt_post);
	ring_vm_funcregister("get_curlopt_postfields",ring_get_curlopt_postfields);
	ring_vm_funcregister("get_curlopt_postfieldsize",ring_get_curlopt_postfieldsize);
	ring_vm_funcregister("get_curlopt_postfieldsize_large",ring_get_curlopt_postfieldsize_large);
	ring_vm_funcregister("get_curlopt_copypostfields",ring_get_curlopt_copypostfields);
	ring_vm_funcregister("get_curlopt_httppost",ring_get_curlopt_httppost);
	ring_vm_funcregister("get_curlopt_referer",ring_get_curlopt_referer);
	ring_vm_funcregister("get_curlopt_useragent",ring_get_curlopt_useragent);
	ring_vm_funcregister("get_curlopt_httpheader",ring_get_curlopt_httpheader);
	ring_vm_funcregister("get_curlopt_headeropt",ring_get_curlopt_headeropt);
	ring_vm_funcregister("get_curlopt_proxyheader",ring_get_curlopt_proxyheader);
	ring_vm_funcregister("get_curlopt_http200aliases",ring_get_curlopt_http200aliases);
	ring_vm_funcregister("get_curlopt_cookie",ring_get_curlopt_cookie);
	ring_vm_funcregister("get_curlopt_cookiefile",ring_get_curlopt_cookiefile);
	ring_vm_funcregister("get_curlopt_cookiejar",ring_get_curlopt_cookiejar);
	ring_vm_funcregister("get_curlopt_cookiesession",ring_get_curlopt_cookiesession);
	ring_vm_funcregister("get_curlopt_cookielist",ring_get_curlopt_cookielist);
	ring_vm_funcregister("get_curlopt_httpget",ring_get_curlopt_httpget);
	ring_vm_funcregister("get_curlopt_http_version",ring_get_curlopt_http_version);
	ring_vm_funcregister("get_curlopt_ignore_content_length",ring_get_curlopt_ignore_content_length);
	ring_vm_funcregister("get_curlopt_http_content_decoding",ring_get_curlopt_http_content_decoding);
	ring_vm_funcregister("get_curlopt_http_transfer_decoding",ring_get_curlopt_http_transfer_decoding);
	ring_vm_funcregister("get_curlopt_expect_100_timeout_ms",ring_get_curlopt_expect_100_timeout_ms);
	ring_vm_funcregister("get_curlopt_mail_from",ring_get_curlopt_mail_from);
	ring_vm_funcregister("get_curlopt_mail_rcpt",ring_get_curlopt_mail_rcpt);
	ring_vm_funcregister("get_curlopt_mail_auth",ring_get_curlopt_mail_auth);
	ring_vm_funcregister("get_curlopt_tftp_blksize",ring_get_curlopt_tftp_blksize);
	ring_vm_funcregister("get_curlopt_ftpport",ring_get_curlopt_ftpport);
	ring_vm_funcregister("get_curlopt_quote",ring_get_curlopt_quote);
	ring_vm_funcregister("get_curlopt_postquote",ring_get_curlopt_postquote);
	ring_vm_funcregister("get_curlopt_prequote",ring_get_curlopt_prequote);
	ring_vm_funcregister("get_curlopt_append",ring_get_curlopt_append);
	ring_vm_funcregister("get_curlopt_ftp_use_eprt",ring_get_curlopt_ftp_use_eprt);
	ring_vm_funcregister("get_curlopt_ftp_use_epsv",ring_get_curlopt_ftp_use_epsv);
	ring_vm_funcregister("get_curlopt_ftp_use_pret",ring_get_curlopt_ftp_use_pret);
	ring_vm_funcregister("get_curlopt_ftp_create_missing_dirs",ring_get_curlopt_ftp_create_missing_dirs);
	ring_vm_funcregister("get_curlopt_ftp_response_timeout",ring_get_curlopt_ftp_response_timeout);
	ring_vm_funcregister("get_curlopt_ftp_alternative_to_user",ring_get_curlopt_ftp_alternative_to_user);
	ring_vm_funcregister("get_curlopt_ftp_skip_pasv_ip",ring_get_curlopt_ftp_skip_pasv_ip);
	ring_vm_funcregister("get_curlopt_ftpsslauth",ring_get_curlopt_ftpsslauth);
	ring_vm_funcregister("get_curlopt_ftp_ssl_ccc",ring_get_curlopt_ftp_ssl_ccc);
	ring_vm_funcregister("get_curlopt_ftp_account",ring_get_curlopt_ftp_account);
	ring_vm_funcregister("get_curlopt_ftp_filemethod",ring_get_curlopt_ftp_filemethod);
	ring_vm_funcregister("get_curlopt_rtsp_request",ring_get_curlopt_rtsp_request);
	ring_vm_funcregister("get_curlopt_rtsp_session_id",ring_get_curlopt_rtsp_session_id);
	ring_vm_funcregister("get_curlopt_rtsp_stream_uri",ring_get_curlopt_rtsp_stream_uri);
	ring_vm_funcregister("get_curlopt_rtsp_transport",ring_get_curlopt_rtsp_transport);
	ring_vm_funcregister("get_curlopt_rtsp_client_cseq",ring_get_curlopt_rtsp_client_cseq);
	ring_vm_funcregister("get_curlopt_rtsp_server_cseq",ring_get_curlopt_rtsp_server_cseq);
	ring_vm_funcregister("get_curlopt_transfertext",ring_get_curlopt_transfertext);
	ring_vm_funcregister("get_curlopt_proxy_transfer_mode",ring_get_curlopt_proxy_transfer_mode);
	ring_vm_funcregister("get_curlopt_crlf",ring_get_curlopt_crlf);
	ring_vm_funcregister("get_curlopt_range",ring_get_curlopt_range);
	ring_vm_funcregister("get_curlopt_resume_from",ring_get_curlopt_resume_from);
	ring_vm_funcregister("get_curlopt_resume_from_large",ring_get_curlopt_resume_from_large);
	ring_vm_funcregister("get_curlopt_customrequest",ring_get_curlopt_customrequest);
	ring_vm_funcregister("get_curlopt_filetime",ring_get_curlopt_filetime);
	ring_vm_funcregister("get_curlopt_dirlistonly",ring_get_curlopt_dirlistonly);
	ring_vm_funcregister("get_curlopt_nobody",ring_get_curlopt_nobody);
	ring_vm_funcregister("get_curlopt_infilesize",ring_get_curlopt_infilesize);
	ring_vm_funcregister("get_curlopt_infilesize_large",ring_get_curlopt_infilesize_large);
	ring_vm_funcregister("get_curlopt_upload",ring_get_curlopt_upload);
	ring_vm_funcregister("get_curlopt_maxfilesize",ring_get_curlopt_maxfilesize);
	ring_vm_funcregister("get_curlopt_maxfilesize_large",ring_get_curlopt_maxfilesize_large);
	ring_vm_funcregister("get_curlopt_timecondition",ring_get_curlopt_timecondition);
	ring_vm_funcregister("get_curlopt_timevalue",ring_get_curlopt_timevalue);
	ring_vm_funcregister("get_curlopt_timeout",ring_get_curlopt_timeout);
	ring_vm_funcregister("get_curlopt_timeout_ms",ring_get_curlopt_timeout_ms);
	ring_vm_funcregister("get_curlopt_low_speed_limit",ring_get_curlopt_low_speed_limit);
	ring_vm_funcregister("get_curlopt_low_speed_time",ring_get_curlopt_low_speed_time);
	ring_vm_funcregister("get_curlopt_max_send_speed_large",ring_get_curlopt_max_send_speed_large);
	ring_vm_funcregister("get_curlopt_max_recv_speed_large",ring_get_curlopt_max_recv_speed_large);
	ring_vm_funcregister("get_curlopt_maxconnects",ring_get_curlopt_maxconnects);
	ring_vm_funcregister("get_curlopt_fresh_connect",ring_get_curlopt_fresh_connect);
	ring_vm_funcregister("get_curlopt_forbid_reuse",ring_get_curlopt_forbid_reuse);
	ring_vm_funcregister("get_curlopt_connecttimeout",ring_get_curlopt_connecttimeout);
	ring_vm_funcregister("get_curlopt_connecttimeout_ms",ring_get_curlopt_connecttimeout_ms);
	ring_vm_funcregister("get_curlopt_ipresolve",ring_get_curlopt_ipresolve);
	ring_vm_funcregister("get_curlopt_connect_only",ring_get_curlopt_connect_only);
	ring_vm_funcregister("get_curlopt_use_ssl",ring_get_curlopt_use_ssl);
	ring_vm_funcregister("get_curlopt_resolve",ring_get_curlopt_resolve);
	ring_vm_funcregister("get_curlopt_dns_interface",ring_get_curlopt_dns_interface);
	ring_vm_funcregister("get_curlopt_dns_local_ip4",ring_get_curlopt_dns_local_ip4);
	ring_vm_funcregister("get_curlopt_dns_local_ip6",ring_get_curlopt_dns_local_ip6);
	ring_vm_funcregister("get_curlopt_dns_servers",ring_get_curlopt_dns_servers);
	ring_vm_funcregister("get_curlopt_accepttimeout_ms",ring_get_curlopt_accepttimeout_ms);
	ring_vm_funcregister("get_curlopt_sslcert",ring_get_curlopt_sslcert);
	ring_vm_funcregister("get_curlopt_sslcerttype",ring_get_curlopt_sslcerttype);
	ring_vm_funcregister("get_curlopt_sslkey",ring_get_curlopt_sslkey);
	ring_vm_funcregister("get_curlopt_sslkeytype",ring_get_curlopt_sslkeytype);
	ring_vm_funcregister("get_curlopt_keypasswd",ring_get_curlopt_keypasswd);
	ring_vm_funcregister("get_curlopt_ssl_enable_alpn",ring_get_curlopt_ssl_enable_alpn);
	ring_vm_funcregister("get_curlopt_ssl_enable_npn",ring_get_curlopt_ssl_enable_npn);
	ring_vm_funcregister("get_curlopt_sslengine",ring_get_curlopt_sslengine);
	ring_vm_funcregister("get_curlopt_sslengine_default",ring_get_curlopt_sslengine_default);
	ring_vm_funcregister("get_curlopt_sslversion",ring_get_curlopt_sslversion);
	ring_vm_funcregister("get_curlopt_ssl_verifyhost",ring_get_curlopt_ssl_verifyhost);
	ring_vm_funcregister("get_curlopt_ssl_verifypeer",ring_get_curlopt_ssl_verifypeer);
	ring_vm_funcregister("get_curlopt_ssl_verifystatus",ring_get_curlopt_ssl_verifystatus);
	ring_vm_funcregister("get_curlopt_cainfo",ring_get_curlopt_cainfo);
	ring_vm_funcregister("get_curlopt_issuercert",ring_get_curlopt_issuercert);
	ring_vm_funcregister("get_curlopt_capath",ring_get_curlopt_capath);
	ring_vm_funcregister("get_curlopt_crlfile",ring_get_curlopt_crlfile);
	ring_vm_funcregister("get_curlopt_certinfo",ring_get_curlopt_certinfo);
	ring_vm_funcregister("get_curlopt_pinnedpublickey",ring_get_curlopt_pinnedpublickey);
	ring_vm_funcregister("get_curlopt_random_file",ring_get_curlopt_random_file);
	ring_vm_funcregister("get_curlopt_egdsocket",ring_get_curlopt_egdsocket);
	ring_vm_funcregister("get_curlopt_ssl_cipher_list",ring_get_curlopt_ssl_cipher_list);
	ring_vm_funcregister("get_curlopt_ssl_sessionid_cache",ring_get_curlopt_ssl_sessionid_cache);
	ring_vm_funcregister("get_curlopt_ssl_options",ring_get_curlopt_ssl_options);
	ring_vm_funcregister("get_curlopt_krblevel",ring_get_curlopt_krblevel);
	ring_vm_funcregister("get_curlopt_gssapi_delegation",ring_get_curlopt_gssapi_delegation);
	ring_vm_funcregister("get_curlopt_ssh_auth_types",ring_get_curlopt_ssh_auth_types);
	ring_vm_funcregister("get_curlopt_ssh_host_public_key_md5",ring_get_curlopt_ssh_host_public_key_md5);
	ring_vm_funcregister("get_curlopt_ssh_public_keyfile",ring_get_curlopt_ssh_public_keyfile);
	ring_vm_funcregister("get_curlopt_ssh_private_keyfile",ring_get_curlopt_ssh_private_keyfile);
	ring_vm_funcregister("get_curlopt_ssh_knownhosts",ring_get_curlopt_ssh_knownhosts);
	ring_vm_funcregister("get_curlopt_ssh_keyfunction",ring_get_curlopt_ssh_keyfunction);
	ring_vm_funcregister("get_curlopt_ssh_keydata",ring_get_curlopt_ssh_keydata);
	ring_vm_funcregister("get_curlopt_private",ring_get_curlopt_private);
	ring_vm_funcregister("get_curlopt_share",ring_get_curlopt_share);
	ring_vm_funcregister("get_curlopt_new_file_perms",ring_get_curlopt_new_file_perms);
	ring_vm_funcregister("get_curlopt_new_directory_perms",ring_get_curlopt_new_directory_perms);
	ring_vm_funcregister("get_curlopt_telnetoptions",ring_get_curlopt_telnetoptions);
	ring_vm_funcregister("get_curle_ok",ring_get_curle_ok);
	ring_vm_funcregister("get_curle_unknown_option",ring_get_curle_unknown_option);
	ring_vm_funcregister("get_curle_not_built_in",ring_get_curle_not_built_in);
}
