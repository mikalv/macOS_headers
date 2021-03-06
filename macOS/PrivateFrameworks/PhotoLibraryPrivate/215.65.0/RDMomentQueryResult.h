//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDQueryResult.h>

@class LiFilter, NSString;

@interface RDMomentQueryResult : RDQueryResult
{
    NSString *_momentUuid;
    unsigned long long _modelId;
    LiFilter *_filter;
}

- (void).cxx_destruct;
- (void)libraryUpdatedAlbum:(id)arg1 forKeyPaths:(id)arg2;
- (void)libraryCreatedCustomSortEntry:(id)arg1;
- (void)libraryUpdatedMoment:(id)arg1 forKeyPaths:(id)arg2;
- (void)resendFullResult;
- (id)loadProperties;
- (id)queryFilter;
- (BOOL)isLibraryMessageReceiver;
- (BOOL)isLongLivedQuery;
- (BOOL)isEstablished;
- (BOOL)isCurrent;
- (id)initWithMomentRef:(id)arg1;

@end

