//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCReadingListObserving-Protocol.h"
#import "FCUserInfoObserving-Protocol.h"

@class FCReadingList, FCUserInfo, NSString;
@protocol FRSavedTabCountManagerDelegate;

@interface FRSavedTabCountManager : NSObject <FCUserInfoObserving, FCReadingListObserving>
{
    id <FRSavedTabCountManagerDelegate> _delegate;
    FCReadingList *_readingList;
    FCUserInfo *_userInfo;
}

@property(readonly, nonatomic) FCUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(nonatomic) __weak id <FRSavedTabCountManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateBadge:(id)arg1;
@property(readonly, nonatomic) unsigned long long badgeCount;
- (void)_scheduleBadgeUpdate;
- (void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4;
- (void)userInfoDidChangeDateLastViewedSaved:(id)arg1 fromCloud:(BOOL)arg2;
- (void)dealloc;
- (id)initWithReadingList:(id)arg1 userInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

