//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "_TtP14AppStoreKitMac19ActionPresenterView_-Protocol.h"
#import "_TtP14AppStoreKitMac23ReloadablePresenterView_-Protocol.h"

@class ASKShelfContentTypeSet, NSError, NSIndexPath, NSIndexSet, NSNumber;

@protocol _TtP14AppStoreKitMac18ShelfPresenterView_ <_TtP14AppStoreKitMac19ActionPresenterView_, _TtP14AppStoreKitMac23ReloadablePresenterView_>
- (void)reloadDataAt:(NSIndexPath *)arg1;
- (void)reloadShelvesAt:(NSIndexSet *)arg1;
- (void)showWithShelfError:(NSError *)arg1 for:(NSNumber *)arg2;
- (void)prepareToDisplayWithTypes:(ASKShelfContentTypeSet *)arg1;
@end

