/* $OpenBSD: tls13_tlsext.h,v 1.1 2019/01/17 00:56:57 beck Exp $ */
/*
 * Copyright (c) 2016, 2017 Joel Sing <jsing@openbsd.org>
 * Copyright (c) 2017 Doug Hogan <doug@openbsd.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef HEADER_SSL_TLS13_TLSEXT_H
#define HEADER_SSL_TLS13_TLSEXT_H

__BEGIN_HIDDEN_DECLS

int tls13_tlsext_alpn_clienthello_needs(SSL *s);
int tls13_tlsext_alpn_clienthello_build(SSL *s, CBB *cbb);
int tls13_tlsext_alpn_clienthello_parse(SSL *s, CBS *cbs, int *alert);
int tls13_tlsext_alpn_serverhello_needs(SSL *s);
int tls13_tlsext_alpn_serverhello_build(SSL *s, CBB *cbb);
int tls13_tlsext_alpn_serverhello_parse(SSL *s, CBS *cbs, int *alert);

int tls13_tlsext_ri_clienthello_needs(SSL *s);
int tls13_tlsext_ri_clienthello_build(SSL *s, CBB *cbb);
int tls13_tlsext_ri_clienthello_parse(SSL *s, CBS *cbs, int *alert);
int tls13_tlsext_ri_serverhello_needs(SSL *s);
int tls13_tlsext_ri_serverhello_build(SSL *s, CBB *cbb);
int tls13_tlsext_ri_serverhello_parse(SSL *s, CBS *cbs, int *alert);

int tls13_tlsext_sigalgs_clienthello_needs(SSL *s);
int tls13_tlsext_sigalgs_clienthello_build(SSL *s, CBB *cbb);
int tls13_tlsext_sigalgs_clienthello_parse(SSL *s, CBS *cbs, int *alert);
int tls13_tlsext_sigalgs_serverhello_needs(SSL *s);
int tls13_tlsext_sigalgs_serverhello_build(SSL *s, CBB *cbb);
int tls13_tlsext_sigalgs_serverhello_parse(SSL *s, CBS *cbs, int *alert);

int tls13_tlsext_sni_clienthello_needs(SSL *s);
int tls13_tlsext_sni_clienthello_build(SSL *s, CBB *cbb);
int tls13_tlsext_sni_clienthello_parse(SSL *s, CBS *cbs, int *alert);
int tls13_tlsext_sni_serverhello_needs(SSL *s);
int tls13_tlsext_sni_serverhello_build(SSL *s, CBB *cbb);
int tls13_tlsext_sni_serverhello_parse(SSL *s, CBS *cbs, int *alert);

int tls13_tlsext_supportedgroups_clienthello_needs(SSL *s);
int tls13_tlsext_supportedgroups_clienthello_build(SSL *s, CBB *cbb);
int tls13_tlsext_supportedgroups_clienthello_parse(SSL *s, CBS *cbs, int *alert);
int tls13_tlsext_supportedgroups_serverhello_needs(SSL *s);
int tls13_tlsext_supportedgroups_serverhello_build(SSL *s, CBB *cbb);
int tls13_tlsext_supportedgroups_serverhello_parse(SSL *s, CBS *cbs, int *alert);

int tls13_tlsext_ecpf_clienthello_needs(SSL *s);
int tls13_tlsext_ecpf_clienthello_build(SSL *s, CBB *cbb);
int tls13_tlsext_ecpf_clienthello_parse(SSL *s, CBS *cbs, int *alert);
int tls13_tlsext_ecpf_serverhello_needs(SSL *s);
int tls13_tlsext_ecpf_serverhello_build(SSL *s, CBB *cbb);
int tls13_tlsext_ecpf_serverhello_parse(SSL *s, CBS *cbs, int *alert);

int tls13_tlsext_ocsp_clienthello_needs(SSL *s);
int tls13_tlsext_ocsp_clienthello_build(SSL *s, CBB *cbb);
int tls13_tlsext_ocsp_clienthello_parse(SSL *s, CBS *cbs, int *alert);
int tls13_tlsext_ocsp_serverhello_needs(SSL *s);
int tls13_tlsext_ocsp_serverhello_build(SSL *s, CBB *cbb);
int tls13_tlsext_ocsp_serverhello_parse(SSL *s, CBS *cbs, int *alert);

int tls13_tlsext_sessionticket_clienthello_needs(SSL *s);
int tls13_tlsext_sessionticket_clienthello_build(SSL *s, CBB *cbb);
int tls13_tlsext_sessionticket_clienthello_parse(SSL *s, CBS *cbs, int *alert);
int tls13_tlsext_sessionticket_serverhello_needs(SSL *s);
int tls13_tlsext_sessionticket_serverhello_build(SSL *s, CBB *cbb);
int tls13_tlsext_sessionticket_serverhello_parse(SSL *s, CBS *cbs, int *alert);

#ifndef OPENSSL_NO_SRTP
int tls13_tlsext_srtp_clienthello_needs(SSL *s);
int tls13_tlsext_srtp_clienthello_build(SSL *s, CBB *cbb);
int tls13_tlsext_srtp_clienthello_parse(SSL *s, CBS *cbs, int *alert);
int tls13_tlsext_srtp_serverhello_needs(SSL *s);
int tls13_tlsext_srtp_serverhello_build(SSL *s, CBB *cbb);
int tls13_tlsext_srtp_serverhello_parse(SSL *s, CBS *cbs, int *alert);
#endif

int tls13_tlsext_clienthello_build(SSL *s, CBB *cbb);
int tls13_tlsext_clienthello_parse(SSL *s, CBS *cbs, int *alert);

int tls13_tlsext_serverhello_build(SSL *s, CBB *cbb);
int tls13_tlsext_serverhello_parse(SSL *s, CBS *cbs, int *alert);

__END_HIDDEN_DECLS

#endif
