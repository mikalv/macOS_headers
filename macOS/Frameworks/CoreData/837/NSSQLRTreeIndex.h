//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSSQLIndex.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLRTreeIndex : NSSQLIndex
{
    NSString *_tableName;
}

@property(readonly, retain) NSString *tableName; // @synthesize tableName=_tableName;
- (id)bulkUpdateStatementsForStore:(id)arg1;
- (id)dropStatementsForStore:(id)arg1;
- (id)createStatementsForStore:(id)arg1;
- (void)generateSQLStrings;
- (void)dealloc;
- (id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2;

@end

