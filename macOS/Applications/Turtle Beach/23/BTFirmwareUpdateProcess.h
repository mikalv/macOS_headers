//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DeviceTolerantMessagingNode.h"

#import "DeviceTolerantMessagingNodeDelegate-Protocol.h"

@class Device, NSData, NSString, NSThread, ProgressMessage;
@protocol DeviceTolerantMessagingNodeDelegate;

@interface BTFirmwareUpdateProcess : DeviceTolerantMessagingNode <DeviceTolerantMessagingNodeDelegate>
{
    id <DeviceTolerantMessagingNodeDelegate> delegate;
    NSData *firmwareBytes;
    NSData *eepromBytes;
    int eraseBTFlashDelayMs;
    NSThread *processThread;
    Device *deviceBT;
    ProgressMessage *progressMessage;
}

- (void).cxx_destruct;
- (void)retry:(id)arg1;
- (void)onTooManyAttempt;
- (void)onAttemptStarted;
- (void)programEEPromForBT;
- (void)programFirmwareForBT;
- (id)getTitle;
- (void)cancel;
- (void)startWithContext:(id)arg1;
- (id)initWithDelegate:(id)arg1 withDevice:(id)arg2 tolerance:(int)arg3 firmware:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

