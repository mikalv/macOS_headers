//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSAsset, NSArray, NSError, NSString;
@protocol MSSubscriber;

@protocol MSSubscriberDelegate <NSObject>
- (void)subscriber:(id <MSSubscriber>)arg1 didFailToRetriveSubscriptionUpdateWithError:(NSError *)arg2;
- (void)subscriber:(id <MSSubscriber>)arg1 didFinishRetrievingAsset:(MSAsset *)arg2 error:(NSError *)arg3;
- (void)subscriber:(id <MSSubscriber>)arg1 didRequestAssetRetrievalForAssetCollections:(NSArray *)arg2 streamID:(NSString *)arg3;

@optional
- (void)subscriber:(id <MSSubscriber>)arg1 didReceiveDeleteForAssetCollections:(NSArray *)arg2 streamID:(NSString *)arg3;
- (void)subscriberDidResetSync:(id <MSSubscriber>)arg1;
- (void)subscriberDidCompleteCheckForNewAssetCollections:(id <MSSubscriber>)arg1;
- (void)subscriber:(id <MSSubscriber>)arg1 didResetSyncForStreamID:(NSString *)arg2;
- (void)subscriber:(id <MSSubscriber>)arg1 didFindDisappearedSubscriptionforStreamID:(NSString *)arg2;
- (void)subscriber:(id <MSSubscriber>)arg1 didFinishRequestingAssetRetrievalForStreamID:(NSString *)arg2;
- (void)subscriber:(id <MSSubscriber>)arg1 willBeginRequestingAssetRetrievalForStreamID:(NSString *)arg2;
- (void)subscriberWillCheckForNewAssetCollections:(id <MSSubscriber>)arg1;
@end

