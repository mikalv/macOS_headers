//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapsSupport/MSPContainerPersister.h>

#import <MapsSupport/MSPMapsPushDaemonProxyObserver-Protocol.h>

@class NSString;

@interface MSPRemoteHistoryContainerPersister : MSPContainerPersister <MSPMapsPushDaemonProxyObserver>
{
}

- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)historyDidChange;
- (void)favoritesDidChange;
- (void)commitEditedContents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchContentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reportErrorIfAny:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

