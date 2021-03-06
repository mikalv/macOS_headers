//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSOrderedSet, NSString, iTermHostRecordMO;

@interface iTermCommandHistoryEntryMO : NSManagedObject
{
}

+ (id)commandHistoryEntryFromDeprecatedDictionary:(id)arg1 inContext:(id)arg2;
+ (id)entityName;
+ (id)commandHistoryEntryInContext:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compareUseTime:(id)arg1;
- (id)lastDirectory;
- (id)lastMark;
- (void)addUsesObject:(id)arg1;
- (void)removeUsesObject:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *command; // @dynamic command;
@property(retain, nonatomic) NSNumber *matchLocation; // @dynamic matchLocation;
@property(retain, nonatomic) NSNumber *numberOfUses; // @dynamic numberOfUses;
@property(retain, nonatomic) iTermHostRecordMO *remoteHost; // @dynamic remoteHost;
@property(retain, nonatomic) NSNumber *timeOfLastUse; // @dynamic timeOfLastUse;
@property(retain, nonatomic) NSOrderedSet *uses; // @dynamic uses;

@end

