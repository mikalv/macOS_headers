//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol TmuxSessionsTableProtocol <NSObject>
- (void)detach;
- (void)linkWindowId:(int)arg1 inSession:(NSString *)arg2 toSession:(NSString *)arg3;
- (void)selectedSessionChangedTo:(NSString *)arg1;
- (NSString *)nameOfAttachedSession;
- (void)attachToSessionWithName:(NSString *)arg1;
- (void)addSessionWithName:(NSString *)arg1;
- (void)removeSessionWithName:(NSString *)arg1;
- (void)renameSessionWithName:(NSString *)arg1 toName:(NSString *)arg2;
- (NSArray *)sessions;
@end

