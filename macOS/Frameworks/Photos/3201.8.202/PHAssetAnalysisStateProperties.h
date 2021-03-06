//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

#import <Photos/PHAssetPropertySet-Protocol.h>

@class NSMutableDictionary, PHAsset;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet <PHAssetPropertySet>
{
    NSMutableDictionary *_analysisStates;
}

+ (void)fetchPropertiesForObjects:(id)arg1 photoLibrary:(id)arg2;
- (void).cxx_destruct;
- (void)addAnalysisState:(id)arg1;
- (int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id *)arg2 outIgnoreUntilDate:(id *)arg3;
- (id)initWithAsset:(id)arg1 analysisStates:(id)arg2;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak PHAsset *asset;

@end

