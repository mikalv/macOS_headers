//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Sharing/SFDevice.h>

#import <Home/HFHomeKitObject-Protocol.h>

@class NSString, NSUUID;

@interface SFDevice (HFHomeKitObjectConformance) <HFHomeKitObject>
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

