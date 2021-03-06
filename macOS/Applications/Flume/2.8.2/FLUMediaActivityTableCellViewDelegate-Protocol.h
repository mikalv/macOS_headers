//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FLUActivity, FLUMedia, NSEvent, NSString;

@protocol FLUMediaActivityTableCellViewDelegate <NSObject>
- (void)flu_didPressMediaActivityCellViewHideButtonForActivity:(FLUActivity *)arg1;
- (void)flu_didPressMediaActivityCellViewDeleteButtonForActivity:(FLUActivity *)arg1;
- (void)flu_didPressMediaActivityCellViewReportButtonForActivity:(FLUActivity *)arg1;
- (void)flu_didPressMediaActivityCellViewReplyButtonForActivity:(FLUActivity *)arg1;
- (void)flu_didPressMediaActivityCellViewLikeButtonForActivity:(FLUActivity *)arg1;
- (void)flu_didPressMediaActivityCellViewActivityURL:(NSString *)arg1 longPress:(BOOL)arg2;
- (void)flu_didPressMediaActivityCellViewActivityUsername:(NSString *)arg1 longPress:(BOOL)arg2;
- (void)flu_didPressMediaActivityCellViewActivityHashtag:(NSString *)arg1 longPress:(BOOL)arg2;
- (void)flu_didPressMediaActivityCellViewActivity:(FLUActivity *)arg1;
- (void)flu_didPressMediaActivityCellViewActivityLink:(id)arg1 longPress:(BOOL)arg2;
- (void)flu_didPressMediaActivityCellViewMediaButtonForActivity:(FLUActivity *)arg1 media:(FLUMedia *)arg2;
- (void)flu_didLongPressMediaActivityCellViewMediaButtonForActivityMedia:(FLUMedia *)arg1 event:(NSEvent *)arg2;
- (void)flu_didPressMediaActivityCellViewFollowButtonForActivity:(FLUActivity *)arg1;
- (void)flu_didPressMediaActivityCellViewAvatarButtonForActivity:(FLUActivity *)arg1 longPress:(BOOL)arg2;
@end

