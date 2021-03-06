//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSKSelectionPath;
@protocol TSDHint;

@protocol TSDHint <NSObject>
+ (Class)archivedHintClass;
- (id <TSDHint>)copyForArchiving;
- (id <TSDHint>)lastChildHint;
- (id <TSDHint>)firstChildHint;
- (void)offsetByDelta:(int)arg1;
- (BOOL)overlapsWithSelectionPath:(TSKSelectionPath *)arg1;

@optional
- (struct CGSize)effectiveSize;
- (struct CGSize)maximumSize;
- (BOOL)isFirstHint;
@end

