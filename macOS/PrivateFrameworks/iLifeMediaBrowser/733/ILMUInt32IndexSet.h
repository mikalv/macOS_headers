//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

@interface ILMUInt32IndexSet : NSObject
{
    NSMutableIndexSet *mLowIndexSet;
    NSMutableIndexSet *mMidIndexSet;
    NSMutableIndexSet *mHighIndexSet;
}

+ (id)indexSet;
- (BOOL)containsIndex:(unsigned long long)arg1;
- (void)addIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;

@end

