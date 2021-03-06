//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABGroupDeleteHelper-Protocol.h"

@class ABBookGroupDeleteCommand, ABDeleteGroupSheet, NSString;
@protocol ABCommandExecutor;

@interface ABBookGroupDeleteHelper : NSObject <ABGroupDeleteHelper>
{
    ABDeleteGroupSheet *_deleteSheet;
    ABBookGroupDeleteCommand *_command;
    id <ABCommandExecutor> _commandExecutor;
}

- (void)performDelete;
- (void)dealloc;
- (id)initWithDeleteSheet:(id)arg1 command:(id)arg2 commandExecutor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

