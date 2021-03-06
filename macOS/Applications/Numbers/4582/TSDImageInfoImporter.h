//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDInfoImporter.h"

@class NSError, NSObject, TSDDrawableInfo, TSDImageCompatibilityChecker, TSDImageCompatibilityConverter, TSPData, TSUBasicProgress;
@protocol OS_dispatch_queue;

@interface TSDImageInfoImporter : TSDInfoImporter
{
    NSObject<OS_dispatch_queue> *mImportQueue;
    TSUBasicProgress *mProgress;
    TSPData *mImageData;
    TSPData *mOriginalImageData;
    TSPData *mReadonlyImageData;
    TSDDrawableInfo *mInfo;
    NSError *mError;
    // Error parsing type: Ai, name: mIsCancelled
    BOOL mDidMessageDelegateAboutMediaCompatibility;
    TSDImageCompatibilityChecker *mCompatibilityChecker;
    TSDImageCompatibilityConverter *mCompatibilityConverter;
}

+ (BOOL)i_canImportFileWithData:(id)arg1 type:(id)arg2;
+ (BOOL)i_canImportFileAtURL:(id)arg1 type:(id)arg2;
+ (id)i_supportedFileTypesForSubclass;
- (id)error;
- (id)info;
- (id)progress;
- (void).cxx_destruct;
- (unsigned long long)p_dataLengthForInfo:(id)arg1;
- (unsigned long long)dataLength;
- (void)cancel;
- (id)p_emptyImageStyle;
- (void)p_tellDelegateToIgnoreCompatibilityLevelIfNeeded;
- (void)p_finishImportingWithInfo:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)p_importInfoFromDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)p_importImageFromDataConvertingIfNeededToRequiredCompatibilityLevel:(long long)arg1 fromCompatibilityLevel:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 data:(id)arg2 theme:(id)arg3;
- (id)initWithContext:(id)arg1 URL:(id)arg2 theme:(id)arg3;

@end

