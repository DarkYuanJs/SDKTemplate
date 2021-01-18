#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MoPubManager.h"

FOUNDATION_EXPORT double MoPub_SDK_PluginVersionNumber;
FOUNDATION_EXPORT const unsigned char MoPub_SDK_PluginVersionString[];

