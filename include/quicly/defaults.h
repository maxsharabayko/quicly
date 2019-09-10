/*
 * Copyright (c) 2017-2019 Fastly, Kazuho Oku
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */
#ifndef quicly_defaults_h
#define quicly_defaults_h

#ifdef __cplusplus
extern "C" {
#endif

#include "quicly.h"

extern const quicly_context_t quicly_spec_context;
extern const quicly_context_t quicly_performant_context;

/**
 *
 */
extern quicly_packet_allocator_t quicly_default_packet_allocator;
/**
 *
 */
quicly_encryptor_t *quicly_new_default_encryptor(ptls_hash_algorithm_t *hash, ptls_cipher_algorithm_t *cid_cipher,
                                                 ptls_aead_algorithm_t *token_aead, ptls_iovec_t key);
/**
 *
 */
void quicly_free_default_encryptor(quicly_encryptor_t *self);
/**
 *
 */
extern quicly_stream_scheduler_t quicly_default_stream_scheduler;
/**
 *
 */
extern quicly_now_t quicly_default_now;
/**
 *
 */
quicly_event_logger_t *quicly_new_default_event_logger(FILE *fp);
/**
 *
 */
void quicly_free_default_event_logger(quicly_event_logger_t *self);

#ifdef __cplusplus
}
#endif

#endif
