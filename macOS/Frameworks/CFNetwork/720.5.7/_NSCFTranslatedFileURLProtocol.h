//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

__attribute__((visibility("hidden")))
@interface _NSCFTranslatedFileURLProtocol : NSURLProtocol
{
    const struct CFURLProtocolInstanceCallbacks *_callbacks;
    struct CFURLProtocolClient _cfurlClient;
    const void *_info;
}

+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (const struct CFURLProtocolImplementation *)pimpl;
- (id).cxx_construct;
- (void)stopLoading;
- (void)startLoading;
- (struct CFURLProtocolClient *)cfurlClient;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end

