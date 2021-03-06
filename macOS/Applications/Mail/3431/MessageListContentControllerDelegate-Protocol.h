//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MessageListContentController, NSArray, NSIndexSet, NSSet;

@protocol MessageListContentControllerDelegate <NSObject>
- (BOOL)messageListContentController:(MessageListContentController *)arg1 canIncludeItemsOfType:(long long)arg2;
- (void)messageListContentControllerDidChangeSort:(MessageListContentController *)arg1;
- (void)messageListContentControllerDidUpdateConversations:(MessageListContentController *)arg1;
- (void)messageListContentControllerDidFinishLoading:(MessageListContentController *)arg1;
- (void)messageListContentControllerDidProcessUpdates:(MessageListContentController *)arg1;
- (void)messageListContentController:(MessageListContentController *)arg1 refreshedObjects:(NSSet *)arg2;
- (void)messageListContentController:(MessageListContentController *)arg1 foundPinnedIndex:(long long)arg2 withOffset:(double)arg3;
- (void)messageListContentController:(MessageListContentController *)arg1 foundSelectionIndexes:(NSIndexSet *)arg2 shouldAnimate:(BOOL)arg3;
- (void)messageListContentControllerNeedsReload:(MessageListContentController *)arg1;
- (void)messageListContentController:(MessageListContentController *)arg1 didApplyChanges:(NSArray *)arg2;
- (void)messageListContentController:(MessageListContentController *)arg1 willApplyChanges:(NSArray *)arg2;
- (void)messageListContentControllerWillProcessUpdates:(MessageListContentController *)arg1;
@end

