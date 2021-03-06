//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSUUID, TSPData, TSPLazyReference, TSPUnarchiver;

@protocol TSPUnarchiverDelegate <NSObject>
@property(readonly, nonatomic) BOOL canRetainObjectReferencedByWeakLazyReference;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property(readonly, nonatomic) BOOL didFinishResolvingReferences;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
- (TSPData *)dataForIdentifier:(long long)arg1;
- (NSUUID *)UUIDForObjectIdentifier:(long long)arg1;
- (long long)objectIdentifierForUUID:(NSUUID *)arg1;
- (void)unarchiver:(TSPUnarchiver *)arg1 didReadLazyReference:(TSPLazyReference *)arg2 isExternal:(char *)arg3;

@optional
@property(readonly, nonatomic) BOOL isCrossAppPaste;
@property(readonly, nonatomic) BOOL isCrossDocumentPaste;
@end

