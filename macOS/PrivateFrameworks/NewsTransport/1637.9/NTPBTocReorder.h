//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBTocReorder : PBCodable <NSCopying>
{
    NSString *_feedId;
    int _feedType;
    NSData *_tocExposureId;
    int _tocNewIndex;
    int _tocOldIndex;
    struct {
        unsigned int feedType:1;
        unsigned int tocNewIndex:1;
        unsigned int tocOldIndex:1;
    } _has;
}

@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) int tocNewIndex; // @synthesize tocNewIndex=_tocNewIndex;
@property(nonatomic) int tocOldIndex; // @synthesize tocOldIndex=_tocOldIndex;
@property(retain, nonatomic) NSData *tocExposureId; // @synthesize tocExposureId=_tocExposureId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(readonly, nonatomic) BOOL hasFeedId;
@property(nonatomic) BOOL hasTocNewIndex;
@property(nonatomic) BOOL hasTocOldIndex;
@property(readonly, nonatomic) BOOL hasTocExposureId;

@end

