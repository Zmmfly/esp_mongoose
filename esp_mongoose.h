#ifndef __ESP_MONGOOSE_H__
#define __ESP_MONGOOSE_H__

#include "sdkconfig.h"

#if MG_DEF_CHECK_BY_VALUE
#ifdef CONFIG_MG_MAX_HTTP_HEADERS
#define MG_MAX_HTTP_HEADERS CONFIG_MG_MAX_HTTP_HEADERS
#else
#define MG_MAX_HTTP_HEADERS 5
#endif

#ifdef CONFIG_MG_ENABLE_SOCKETPAIR
#define MG_ENABLE_SOCKETPAIR CONFIG_MG_ENABLE_SOCKETPAIR
#else
#define MG_ENABLE_SOCKETPAIR 0
#endif

#ifdef CONFIG_MG_ENABLE_LINES
#define MG_ENABLE_LINES CONFIG_MG_ENABLE_LINES
#else
#define MG_ENABLE_LINES 0
#endif

#ifdef CONFIG_MG_ENABLE_DIRECTORY_LISTING
#define MG_ENABLE_DIRECTORY_LISTING CONFIG_MG_ENABLE_DIRECTORY_LISTING
#else
#define MG_ENABLE_DIRECTORY_LISTING 0
#endif

#ifdef CONFIG_MG_ENABLE_SSI
#define MG_ENABLE_SSI CONFIG_MG_ENABLE_SSI
#else
// #define MG_ENABLE_SSI 0
#endif

#ifdef CONFIG_MG_ENABLE_MBEDTLS
#define MG_ENABLE_MBEDTLS CONFIG_MG_ENABLE_MBEDTLS
#else
#define MG_ENABLE_MBEDTLS 0
#endif

#else
#ifdef CONFIG_MG_MAX_HTTP_HEADERS
#define MG_MAX_HTTP_HEADERS CONFIG_MG_MAX_HTTP_HEADERS
#else
#define MG_MAX_HTTP_HEADERS 5
#endif

#if defined(CONFIG_MG_ENABLE_SOCKETPAIR ) && CONFIG_MG_ENABLE_SOCKETPAIR
#define MG_ENABLE_SOCKETPAIR
#else
// #define MG_ENABLE_SOCKETPAIR 0
#endif

#if defined(CONFIG_MG_ENABLE_LINES) && CONFIG_MG_ENABLE_LINES
#define MG_ENABLE_LINES
#else
// #define MG_ENABLE_LINES 0
#endif

#if defined(CONFIG_MG_ENABLE_DIRECTORY_LISTING) && CONFIG_MG_ENABLE_DIRECTORY_LISTING
#define MG_ENABLE_DIRECTORY_LISTING
#else
// #define MG_ENABLE_DIRECTORY_LISTING 0
#endif

#if defined(CONFIG_MG_ENABLE_SSI) && CONFIG_MG_ENABLE_SSI
#define MG_ENABLE_SSI
#else
// #define MG_ENABLE_SSI 0
#endif

#if defined(CONFIG_MG_ENABLE_MBEDTLS) && CONFIG_MG_ENABLE_MBEDTLS
#define MG_ENABLE_MBEDTLS CONFIG_MG_ENABLE_MBEDTLS
#else
#define MG_ENABLE_MBEDTLS 0
#endif

#endif

#ifdef __cplusplus
extern "C" {
#endif
#include "mongoose/mongoose.h"
#ifdef __cplusplus
}
#endif

#endif