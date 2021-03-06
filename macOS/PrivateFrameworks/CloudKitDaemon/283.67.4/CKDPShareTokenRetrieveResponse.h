//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPProtectionInfo, CKDPShareIdentifier, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPShareTokenRetrieveResponse : PBCodable <NSCopying>
{
    NSString *_container;
    int _containerEnvironment;
    NSString *_etag;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    int _participantState;
    int _participantType;
    int _permission;
    NSData *_protectedFullToken;
    CKDPProtectionInfo *_selfAddedPcs;
    CKDPShareIdentifier *_shareId;
    struct {
        unsigned int containerEnvironment:1;
        unsigned int participantState:1;
        unsigned int participantType:1;
        unsigned int permission:1;
    } _has;
}

@property(retain, nonatomic) NSString *ownerLastName; // @synthesize ownerLastName=_ownerLastName;
@property(retain, nonatomic) NSString *ownerFirstName; // @synthesize ownerFirstName=_ownerFirstName;
@property(retain, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property(retain, nonatomic) CKDPProtectionInfo *selfAddedPcs; // @synthesize selfAddedPcs=_selfAddedPcs;
@property(nonatomic) int permission; // @synthesize permission=_permission;
@property(nonatomic) int participantState; // @synthesize participantState=_participantState;
@property(nonatomic) int participantType; // @synthesize participantType=_participantType;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) NSString *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasOwnerLastName;
@property(readonly, nonatomic) BOOL hasOwnerFirstName;
@property(readonly, nonatomic) BOOL hasProtectedFullToken;
@property(readonly, nonatomic) BOOL hasSelfAddedPcs;
@property(nonatomic) BOOL hasPermission;
@property(nonatomic) BOOL hasParticipantState;
@property(nonatomic) BOOL hasParticipantType;
@property(readonly, nonatomic) BOOL hasEtag;
@property(readonly, nonatomic) BOOL hasShareId;
@property(nonatomic) BOOL hasContainerEnvironment;
@property(nonatomic) int containerEnvironment; // @synthesize containerEnvironment=_containerEnvironment;
@property(readonly, nonatomic) BOOL hasContainer;

@end

