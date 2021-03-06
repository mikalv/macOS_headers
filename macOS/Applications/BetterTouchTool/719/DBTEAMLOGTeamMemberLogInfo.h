//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DBTEAMLOGUserLogInfo.h"

#import "DBSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface DBTEAMLOGTeamMemberLogInfo : DBTEAMLOGUserLogInfo <DBSerializable, NSCopying>
{
    NSString *_teamMemberId;
    NSString *_memberExternalId;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *memberExternalId; // @synthesize memberExternalId=_memberExternalId;
@property(readonly, copy, nonatomic) NSString *teamMemberId; // @synthesize teamMemberId=_teamMemberId;
- (void).cxx_destruct;
- (BOOL)isEqualToTeamMemberLogInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initDefault;
- (id)initWithAccountId:(id)arg1 displayName:(id)arg2 email:(id)arg3 teamMemberId:(id)arg4 memberExternalId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

