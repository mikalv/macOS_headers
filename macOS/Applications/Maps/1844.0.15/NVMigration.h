//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MapsPaths;

__attribute__((visibility("hidden")))
@interface NVMigration : NSObject
{
    MapsPaths *_locations;
    unsigned long long _logCount;
}

+ (void)performMigrationIfNeeded;
- (void).cxx_destruct;
- (BOOL)_migratePlacesWithOperationName:(id)arg1 fromDefaultsKey:(id)arg2 toLocation:(id)arg3 MSPPropertyListCreationBlockFromMavericksElementPlists:(CDUnknownBlockType)arg4;
- (BOOL)_migrateFromMavericksHistory;
- (BOOL)_migrateFromMavericksBookmarks;
- (BOOL)perform;
- (long long)currentMigrationMarker;
- (id)beginLoggingOperationWithName:(id)arg1;
- (id)locations;

@end

