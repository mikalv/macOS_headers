//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDFetchZoneChangesRequestOperationResult : NSObject
{
    NSData *_resultServerChangeTokenData;
    NSData *_resultClientChangeTokenData;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSData *resultClientChangeTokenData; // @synthesize resultClientChangeTokenData=_resultClientChangeTokenData;
@property(retain, nonatomic) NSData *resultServerChangeTokenData; // @synthesize resultServerChangeTokenData=_resultServerChangeTokenData;
- (void).cxx_destruct;
- (id)init;

@end

