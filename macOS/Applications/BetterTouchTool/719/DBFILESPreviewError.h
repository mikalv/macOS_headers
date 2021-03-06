//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DBSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class DBFILESLookupError, NSString;

@interface DBFILESPreviewError : NSObject <DBSerializable, NSCopying>
{
    DBFILESLookupError *_path;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (BOOL)isEqualToPreviewError:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (BOOL)isUnsupportedContent;
- (BOOL)isUnsupportedExtension;
- (BOOL)isInProgress;
- (BOOL)isPath;
@property(readonly, nonatomic) DBFILESLookupError *path; // @synthesize path=_path;
- (id)initWithUnsupportedContent;
- (id)initWithUnsupportedExtension;
- (id)initWithInProgress;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

