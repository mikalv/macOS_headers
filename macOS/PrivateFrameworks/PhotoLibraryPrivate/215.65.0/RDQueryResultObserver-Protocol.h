//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/NSObject-Protocol.h>

@class RDQueryResult, RDQueryResultChange;

@protocol RDQueryResultObserver <NSObject>
- (void)queryResultChange:(RDQueryResultChange *)arg1 forQueryResult:(RDQueryResult *)arg2;

@optional
- (void)queryResultDidDeactivate:(RDQueryResult *)arg1;
@end

