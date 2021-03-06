//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/NSNetServiceBrowserDelegate-Protocol.h>
#import <MediaRemote/NSNetServiceDelegate-Protocol.h>

@class NSMutableSet, NSNetServiceBrowser, NSString;
@protocol MRTelevisionDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRTelevisionController : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSNetServiceBrowser *_serviceBrowser;
    NSMutableSet *_discoveredTelevisions;
    NSMutableSet *_resolvingServices;
    BOOL _discovering;
    id <MRTelevisionDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isDiscovering) BOOL discovering; // @synthesize discovering=_discovering;
@property(nonatomic) id <MRTelevisionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)endDiscovery;
- (void)beginDiscovery;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

