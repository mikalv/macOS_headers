//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTimeToLeaveMapLaunch, NSString;

@interface GEOLogMsgEventMapLaunch : PBCodable <NSCopying>
{
    NSString *_launchUri;
    NSString *_sourceAppId;
    GEOTimeToLeaveMapLaunch *_timeToLeave;
}

@property(retain, nonatomic) GEOTimeToLeaveMapLaunch *timeToLeave; // @synthesize timeToLeave=_timeToLeave;
@property(retain, nonatomic) NSString *launchUri; // @synthesize launchUri=_launchUri;
@property(retain, nonatomic) NSString *sourceAppId; // @synthesize sourceAppId=_sourceAppId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTimeToLeave;
@property(readonly, nonatomic) BOOL hasLaunchUri;
@property(readonly, nonatomic) BOOL hasSourceAppId;
- (void)dealloc;

@end

