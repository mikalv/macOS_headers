//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class TSDLayout;
@protocol TSDHint, TSDHint><NSSecureCoding;

@protocol TSDPartitioner
- (id <TSDHint><NSSecureCoding>)hintForLayout:(TSDLayout *)arg1;
- (BOOL)didHint:(id <TSDHint>)arg1 syncWithNextHint:(id <TSDHint>)arg2 horizontally:(BOOL)arg3 delta:(int)arg4;
- (TSDLayout *)layoutForHint:(id <TSDHint>)arg1 parentLayout:(TSDLayout *)arg2;
- (id <TSDHint><NSSecureCoding>)nextHintForSize:(struct CGSize)arg1 parentLayout:(TSDLayout *)arg2 previousHint:(id <TSDHint>)arg3 horizontally:(BOOL)arg4 outFinished:(out char *)arg5;
- (TSDLayout *)nextLayoutForSize:(struct CGSize)arg1 parentLayout:(TSDLayout *)arg2 previousHint:(id <TSDHint>)arg3 horizontally:(BOOL)arg4 outFinished:(out char *)arg5;
@end

