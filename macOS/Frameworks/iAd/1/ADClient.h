//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADClient : NSObject
{
}

+ (id)sharedClient;
- (void)prepareForAdRequests;
- (void)segmentDataForSignedInUserWithBlock:(CDUnknownBlockType)arg1;
- (void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2;
- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;
- (void)lookupAdConversionDetails:(CDUnknownBlockType)arg1;
- (void)determineAppInstallationAttributionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

