//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RemoteManagement/NSObject-Protocol.h>

@class NSManagedObjectContext;

@protocol RMPersistenceControllerProtocol <NSObject>
- (NSManagedObjectContext *)newBackgroundContext;
- (NSManagedObjectContext *)viewContext;
- (void)performBackgroundTaskAndWait:(void (^)(NSManagedObjectContext *))arg1;
- (void)performBackgroundTask:(void (^)(NSManagedObjectContext *))arg1;
@end

